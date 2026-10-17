import argparse
import json
import logging
import socket
import sys
import time
from enum import IntEnum

ADDRESS = ('0.0.0.0', 7777)
logger = logging.getLogger(__name__)


class MessageId(IntEnum):
    # Wire IDs are permanent: append new IDs without renumbering existing ones.
    JOIN = 1
    HEARTBEAT = 2
    SYNC = 3
    SNAPSHOT = 101
    ADDED = 102
    UPDATED = 103
    REMOVED = 104
    HEARTBEAT_ACK = 105
    ERROR = 199
    CAST_SPELL = 1001


MESSAGE_NAMES = {message_id: message_id.name.lower() for message_id in MessageId}
MESSAGE_IDS = {name: message_id for message_id, name in MESSAGE_NAMES.items()}
SPELL_NAMES = ('Fireball', 'Shield', 'Reflect')


def valid_signature(signature):
    # Flat x/y/stroke triples keep Unity JSON and the 1200-byte JOIN compact.
    if (not isinstance(signature, list) or not 6 <= len(signature) <= 192
            or len(signature) % 3):
        return False
    previous_stroke = 0
    has_line = False
    for index in range(0, len(signature), 3):
        x, y, stroke = signature[index:index + 3]
        if (any(type(value) is not int for value in (x, y, stroke))
                or not 0 <= x <= 255 or not 0 <= y <= 255
                or not 0 <= stroke <= 31
                or (index == 0 and stroke != 0)
                or stroke not in (previous_stroke, previous_stroke + 1)):
            return False
        if index and stroke == previous_stroke:
            has_line |= (x, y) != tuple(signature[index - 3:index - 1])
        previous_stroke = stroke
    return has_line


class LobbyServer:
    def __init__(self, server, timeout=15):
        self.socket = server
        self.timeout = timeout
        self.players = {}
        self.revision = 0
        self.handlers = {
            MessageId.JOIN: self.receive_join,
            MessageId.HEARTBEAT: self.receive_heartbeat,
            MessageId.SYNC: self.receive_sync,
            MessageId.CAST_SPELL: self.receive_cast_spell,
        }

    def send_message(self, message_id, destination, **fields):
        message = {'message_id': message_id,
                   'type': MESSAGE_NAMES[message_id], **fields}
        payload = json.dumps(message).encode('utf-8')
        try:
            self.socket.sendto(payload, destination)
            if message_id != MessageId.HEARTBEAT_ACK:
                logger.info('SEND -> %s:%s (%d bytes) %s',
                            *destination, len(payload), payload.decode('utf-8'))
        except OSError as error:
            # A failed delivery must not stop service for other players.
            logger.warning('SEND FAILED -> %s:%s message_id=%s: %s',
                           *destination, int(message_id), error)

    def broadcast(self, message_id, exclude=None, **fields):
        for aruconum, player in self.players.items():
            if aruconum != exclude:
                self.send_message(message_id, player['address'], **fields)

    def public_player(self, aruconum):
        player = self.players[aruconum]
        return {'aruconum': aruconum, 'signature': player['signature'], 'hp': player['hp']}

    def send_snapshot(self, aruconum, destination, include_interval=False):
        fields = {'revision': self.revision, 'aruconum': aruconum,
                  'players': [self.public_player(key) for key in self.players]}
        if include_interval:
            fields['heartbeat_interval'] = 5
        self.send_message(MessageId.SNAPSHOT, destination, **fields)

    def send_added(self, aruconum):
        self.broadcast(MessageId.ADDED, exclude=aruconum,
                       revision=self.revision, player=self.public_player(aruconum))

    def send_updated(self, aruconum):
        self.broadcast(MessageId.UPDATED, revision=self.revision,
                       player=self.public_player(aruconum))

    def send_removed(self, aruconum):
        self.broadcast(MessageId.REMOVED, revision=self.revision,
                       aruconum=aruconum)

    def send_heartbeat_ack(self, destination, aruconum):
        self.send_message(MessageId.HEARTBEAT_ACK, destination,
                          revision=self.revision, aruconum=aruconum)

    def send_error(self, destination, code, aruconum=0):
        self.send_message(MessageId.ERROR, destination, code=code, aruconum=aruconum)

    def send_cast_spell(self, aruconum, spell):
        # Include the caster so it also receives server confirmation.
        self.broadcast(MessageId.CAST_SPELL, aruconum=aruconum, data=spell)

    def receive_message(self, data, sender):
        if not data or len(data) > 1200:
            logger.warning('DROP <- %s:%s: empty or oversized packet', *sender)
            return
        try:
            message = json.loads(data.decode('utf-8'))
        except (ValueError, UnicodeError):
            logger.warning('DROP <- %s:%s: invalid UTF-8 JSON', *sender)
            return
        if not isinstance(message, dict):
            logger.warning('DROP <- %s:%s: expected a JSON object', *sender)
            return
        if 'message_id' in message:
            message_id = message['message_id']
            # JSON booleans and floats must not alias integer IDs.
            if type(message_id) is not int:
                logger.warning('DROP <- %s:%s: message_id must be an integer', *sender)
                return
        else:
            kind = message.get('type')
            if not isinstance(kind, str):
                logger.warning('DROP <- %s:%s: missing message type', *sender)
                return
            message_id = MESSAGE_IDS.get(kind)
        if message_id != MessageId.HEARTBEAT:
            logger.info('RECEIVE <- %s:%s (%d bytes) %s',
                        *sender, len(data),
                        ascii(data.decode('utf-8')))
        handler = self.handlers.get(message_id)
        if handler is None:
            logger.warning('DROP <- %s:%s: unsupported message_id=%r',
                           *sender, message_id)
            return
        aruconum = message.get('aruconum')
        if type(aruconum) is not int or not 1 <= aruconum <= 4:
            self.send_error(sender, 'invalid_aruconum')
            return
        handler(message, sender)

    def receive_join(self, message, sender):
        aruconum = message['aruconum']
        if (aruconum in self.players
                and self.players[aruconum]['address'] != sender):
            self.send_error(sender, 'aruconum_in_use', aruconum)
            return
        signature = message.get('signature')
        if not valid_signature(signature):
            self.send_error(sender, 'invalid_signature', aruconum)
            return
        is_new = aruconum not in self.players
        changed = is_new or self.players[aruconum]['signature'] != signature
        hp = 100 if is_new else self.players[aruconum]['hp']
        self.players[aruconum] = {'signature': list(signature), 'hp': hp, 'address': sender,
                                   'last_seen': time.monotonic()}
        if changed:
            self.revision += 1
            if is_new:
                self.send_added(aruconum)
            else:
                self.send_updated(aruconum)
        if is_new or not changed:
            self.send_snapshot(aruconum, sender, include_interval=True)

    def refresh_player(self, aruconum, sender):
        if aruconum not in self.players:
            self.send_error(sender, 'unknown_player', aruconum)
            return False
        if self.players[aruconum]['address'] != sender:
            self.send_error(sender, 'aruconum_in_use', aruconum)
            return False
        self.players[aruconum]['last_seen'] = time.monotonic()
        return True

    def receive_heartbeat(self, message, sender):
        if self.refresh_player(message['aruconum'], sender):
            self.send_heartbeat_ack(sender, message['aruconum'])

    def receive_sync(self, message, sender):
        aruconum = message['aruconum']
        if self.refresh_player(aruconum, sender):
            self.send_snapshot(aruconum, sender)

    def receive_cast_spell(self, message, sender):
        aruconum = message['aruconum']
        spell = message.get('data')
        if not isinstance(spell, str) or spell not in SPELL_NAMES:
            self.send_error(sender, 'invalid_spell', aruconum)
            return
        if not self.refresh_player(aruconum, sender):
            return
        self.send_cast_spell(aruconum, spell)

    def expire_players(self):
        now = time.monotonic()
        expired = [key for key, player in self.players.items()
                   if now - player['last_seen'] >= self.timeout]
        for aruconum in expired:
            del self.players[aruconum]
        for aruconum in expired:
            self.revision += 1
            self.send_removed(aruconum)

    def run(self):
        while True:
            self.expire_players()
            try:
                data, sender = self.socket.recvfrom(65535)
            except (socket.timeout, ConnectionResetError):
                continue
            self.receive_message(data, sender)


def serve(address=ADDRESS, timeout=15):
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as server:
        server.bind(address)
        server.settimeout(0.2)
        host, port = server.getsockname()
        print(f'UDP server listening on {host}:{port}', flush=True)
        LobbyServer(server, timeout).run()


if __name__ == '__main__':
    logging.basicConfig(level=logging.INFO, stream=sys.stdout,
                        format='%(asctime)s %(levelname)s %(message)s',
                        datefmt='%H:%M:%S')
    parser = argparse.ArgumentParser(description='UDP player lobby')
    parser.add_argument('--port', type=int, default=ADDRESS[1])
    parser.add_argument('--timeout', type=float, default=15)
    args = parser.parse_args()
    if not 0 <= args.port <= 65535 or not 0 < args.timeout < float('inf'):
        parser.error('port must be 0..65535 and timeout must be positive and finite')
    try:
        serve((ADDRESS[0], args.port), args.timeout)
    except KeyboardInterrupt:
        pass

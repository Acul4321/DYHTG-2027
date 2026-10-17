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


MESSAGE_NAMES = {message_id: message_id.name.lower() for message_id in MessageId}
MESSAGE_IDS = {name: message_id for message_id, name in MESSAGE_NAMES.items()}


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
        for device_id, player in self.players.items():
            if device_id != exclude:
                self.send_message(message_id, player['address'], **fields)

    def public_player(self, device_id):
        return {'device_id': device_id, 'name': self.players[device_id]['name']}

    def send_snapshot(self, device_id, destination, include_interval=False):
        fields = {'revision': self.revision, 'device_id': device_id,
                  'players': [self.public_player(key) for key in self.players]}
        if include_interval:
            fields['heartbeat_interval'] = 5
        self.send_message(MessageId.SNAPSHOT, destination, **fields)

    def send_added(self, device_id):
        self.broadcast(MessageId.ADDED, exclude=device_id,
                       revision=self.revision, player=self.public_player(device_id))

    def send_updated(self, device_id):
        self.broadcast(MessageId.UPDATED, revision=self.revision,
                       player=self.public_player(device_id))

    def send_removed(self, device_id):
        self.broadcast(MessageId.REMOVED, revision=self.revision,
                       device_id=device_id)

    def send_heartbeat_ack(self, destination):
        self.send_message(MessageId.HEARTBEAT_ACK, destination,
                          revision=self.revision)

    def send_error(self, destination, code):
        self.send_message(MessageId.ERROR, destination, code=code)

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
        device_id = message.get('device_id')
        if (not isinstance(device_id, str)
                or not 1 <= len(device_id) <= 256 or not device_id.strip()):
            self.send_error(sender, 'invalid_device_id')
            return
        handler(message, sender)

    def receive_join(self, message, sender):
        device_id = message['device_id']
        name = message.get('name')
        if not isinstance(name, str) or not 1 <= len(name.strip()) <= 32:
            logger.warning('DROP <- %s:%s: name must contain 1-32 characters', *sender)
            return
        name = name.strip()
        is_new = device_id not in self.players
        changed = is_new or self.players[device_id]['name'] != name
        self.players[device_id] = {'name': name, 'address': sender,
                                   'last_seen': time.monotonic()}
        if changed:
            self.revision += 1
            if is_new:
                self.send_added(device_id)
            else:
                self.send_updated(device_id)
        if is_new or not changed:
            self.send_snapshot(device_id, sender, include_interval=True)

    def refresh_player(self, device_id, sender):
        if device_id not in self.players:
            self.send_error(sender, 'unknown_player')
            return False
        self.players[device_id]['address'] = sender
        self.players[device_id]['last_seen'] = time.monotonic()
        return True

    def receive_heartbeat(self, message, sender):
        if self.refresh_player(message['device_id'], sender):
            self.send_heartbeat_ack(sender)

    def receive_sync(self, message, sender):
        device_id = message['device_id']
        if self.refresh_player(device_id, sender):
            self.send_snapshot(device_id, sender)

    def expire_players(self):
        now = time.monotonic()
        expired = [key for key, player in self.players.items()
                   if now - player['last_seen'] >= self.timeout]
        for device_id in expired:
            del self.players[device_id]
        for device_id in expired:
            self.revision += 1
            self.send_removed(device_id)

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

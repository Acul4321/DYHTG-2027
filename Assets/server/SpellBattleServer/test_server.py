import json
import socket
import subprocess
import sys
import threading
import time
import unittest
from pathlib import Path


def signature(label='Alice'):
    return [0, 0, 0, 255, sum(map(ord, label)) % 200 + 1, 0]


class ServerTests(unittest.TestCase):
    def setUp(self):
        self.numbers = {}
        self.start_server()
        self.addCleanup(self.stop_server)
        self.a = self.client()
        self.b = self.client()

    def start_server(self):
        self.process = subprocess.Popen(
            [sys.executable, '-u', str(Path(__file__).with_name('server.py')),
             '--port', '0', '--timeout', '1'],
            stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True,
        )
        line = self.process.stdout.readline()
        self.assertTrue(line.startswith('UDP server listening on '), line)
        self.assertIn(':', line, 'Server must expose its bound UDP port')
        self.address = ('127.0.0.1', int(line.rsplit(':', 1)[1]))
        # Signature snapshots can fill a Windows pipe; drain logs while testing UDP.
        self.log_threads = []
        self.server_errors = []
        for stream, output in ((self.process.stdout, []), (self.process.stderr, self.server_errors)):
            thread = threading.Thread(target=lambda source=stream, lines=output:
                                      lines.extend(iter(source.readline, '')), daemon=True)
            thread.start()
            self.log_threads.append(thread)

    def tearDown(self):
        self.a.close()
        self.b.close()

    def stop_server(self):
        self.process.terminate()
        self.process.wait(timeout=3)
        for thread in self.log_threads:
            thread.join(timeout=3)
        self.process.stdout.close()
        self.process.stderr.close()
        errors = ''.join(self.server_errors)
        if errors:
            print(errors, file=sys.stderr)

    def client(self):
        client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        client.settimeout(2)
        self.addCleanup(client.close)
        return client

    def send(self, client, message):
        if message.get('type') == 'join' or message.get('message_id') == 1:
            message = dict(message)
            message.setdefault('aruconum', self.numbers.setdefault(client, len(self.numbers) + 1))
        client.sendto(json.dumps(message).encode(), self.address)

    def receive(self, client):
        return json.loads(client.recv(65535))

    def join(self, client, name):
        self.send(client, {'type': 'join', 'signature': signature(name)})
        return self.receive(client)

    def test_join_snapshot_and_changes(self):
        first = self.join(self.a, 'Alice')
        self.assertEqual(first['message_id'], 101)
        alice = first['aruconum']
        self.assertEqual(alice, self.numbers[self.a])
        self.assertNotIn('player_id', first)
        self.assertEqual(first['players'], [{'aruconum': alice, 'signature': signature('Alice'), 'hp': 100}])
        second = self.join(self.b, 'Bob')
        self.assertEqual(len(second['players']), 2)
        added = self.receive(self.a)
        self.assertEqual(added['type'], 'added')
        self.assertEqual(added['message_id'], 102)
        self.assertEqual(added['player'], {'aruconum': second['aruconum'], 'signature': signature('Bob'), 'hp': 100})
        self.send(self.b, {'type': 'join', 'aruconum': second['aruconum'], 'signature': signature('Bobby')})
        self.assertEqual(self.receive(self.a)['player']['signature'], signature('Bobby'))
        updated = self.receive(self.b)
        self.assertEqual(updated['type'], 'updated')
        self.assertEqual(updated['message_id'], 103)

    def test_numeric_messages_and_unknown_ids(self):
        for message in ({'message_id': 999}, {'message_id': True, 'signature': signature('Invalid')},
                        {'message_id': 1.0, 'signature': signature('Invalid')},
                        {'message_id': 999, 'type': 'join', 'signature': signature('Invalid')}):
            self.send(self.a, message)
        self.send(self.a, {'message_id': 1, 'signature': signature('Alice')})
        snapshot = self.receive(self.a)
        self.assertEqual(snapshot['message_id'], 101)
        self.assertEqual(len(snapshot['players']), 1)
        aruconum = snapshot['aruconum']
        self.send(self.a, {'message_id': 2, 'aruconum': aruconum})
        self.assertEqual(self.receive(self.a)['message_id'], 105)
        self.send(self.a, {'message_id': 3, 'aruconum': aruconum})
        self.assertEqual(self.receive(self.a)['players'], snapshot['players'])
        self.send(self.a, {'message_id': 2, 'aruconum': 4})
        self.assertEqual(self.receive(self.a), {
            'message_id': 199, 'type': 'error', 'code': 'unknown_player', 'aruconum': 4})

    def test_other_endpoint_cannot_claim_or_refresh_taken_number(self):
        alice = self.join(self.a, 'Alice')['aruconum']
        for message in ({'message_id': 1, 'aruconum': alice, 'signature': signature('Impostor')},
                        {'message_id': 2, 'aruconum': alice},
                        {'message_id': 3, 'aruconum': alice}):
            self.send(self.b, message)
            self.assertEqual(self.receive(self.b)['code'], 'aruconum_in_use')
        self.send(self.a, {'message_id': 2, 'aruconum': alice})
        self.assertEqual(self.receive(self.a)['type'], 'heartbeat_ack')
        self.send(self.b, {'message_id': 1, 'aruconum': 2, 'signature': signature('Bob')})
        self.assertEqual(len(self.receive(self.b)['players']), 2)
        self.assertEqual(self.receive(self.a)['type'], 'added')

    def test_expiry_broadcasts_removal(self):
        alice = self.join(self.a, 'Alice')['aruconum']
        bob = self.join(self.b, 'Bob')['aruconum']
        self.receive(self.a)
        for _ in range(2):
            time.sleep(0.4)
            self.send(self.b, {'type': 'heartbeat', 'aruconum': bob})
            self.receive(self.b)
        removed = self.receive(self.b)
        self.assertEqual(removed['type'], 'removed')
        self.assertEqual(removed['message_id'], 104)
        self.assertEqual(removed['aruconum'], alice)

    def test_invalid_packets_do_not_stop_server(self):
        for packet in (b'bad', b'[]', b'\xff', b'x' * 1201,
                       b'{}'):
            self.a.sendto(packet, self.address)
        self.assertEqual(self.join(self.a, 'Alice')['type'], 'snapshot')

    def test_number_can_be_reused_after_timeout_and_restart(self):
        original = self.join(self.a, 'Alice')
        self.send(self.b, {'message_id': 1, 'aruconum': self.numbers[self.a],
                           'signature': signature('Alice')})
        self.assertEqual(self.receive(self.b)['code'], 'aruconum_in_use')
        time.sleep(1.3)
        self.send(self.b, {'message_id': 1, 'aruconum': self.numbers[self.a],
                           'signature': signature('Alice')})
        self.assertEqual(self.receive(self.b)['aruconum'], original['aruconum'])
        self.stop_server()
        self.start_server()
        self.send(self.b, {'message_id': 1, 'aruconum': self.numbers[self.a],
                           'signature': signature('Alice')})
        returned = self.receive(self.b)
        self.assertEqual(returned['aruconum'], original['aruconum'])
        self.assertEqual(len(returned['players']), 1)
        self.assertEqual(returned['players'][0], {'aruconum': self.numbers[self.a], 'signature': signature('Alice'), 'hp': 100})
        self.assertNotIn('player_id', returned)

    def test_different_numbers_create_distinct_players(self):
        first = self.join(self.a, 'Alice')
        self.send(self.b, {'message_id': 1, 'signature': signature('Bob'),
                           'aruconum': 2})
        second = self.receive(self.b)
        self.assertNotEqual(first['aruconum'], second['aruconum'])
        self.assertEqual(len(second['players']), 2)

    def test_join_requires_integer_number_from_one_to_four(self):
        for aruconum in (None, '', '1', 0, -1, 5, True, False, 1.0, [], {}):
            packet = {'message_id': 1, 'signature': signature('Alice'), 'aruconum': aruconum}
            self.a.sendto(json.dumps(packet).encode(), self.address)
            self.assertEqual(self.receive(self.a)['code'], 'invalid_aruconum')

    def test_old_machine_id_packets_are_rejected(self):
        self.a.sendto(json.dumps({'message_id': 1, 'device_id': 'old-machine',
                                 'signature': signature('Alice')}).encode(), self.address)
        self.assertEqual(self.receive(self.a)['code'], 'invalid_aruconum')

    def test_all_four_numbers_are_valid_and_keep_integer_type(self):
        for number in range(1, 5):
            client = self.client()
            self.send(client, {'message_id': 1, 'aruconum': number, 'signature': signature(f'Player {number}')})
            snapshot = self.receive(client)
            self.assertEqual(snapshot['aruconum'], number)
            self.assertIs(type(snapshot['aruconum']), int)
            self.assertEqual(len(snapshot['players']), number)
            self.assertTrue(all(type(p['aruconum']) is int for p in snapshot['players']))
            self.assertTrue(all('device_id' not in p for p in snapshot['players']))

    def test_cast_spells_broadcast_to_every_player_including_caster(self):
        self.join(self.a, 'Alice')
        before = self.join(self.b, 'Bob')
        self.receive(self.a)  # added notification
        for spell in ('Fireball', 'Shield', 'Reflect'):
            self.send(self.a, {'message_id': 1001, 'aruconum': 1, 'data': spell})
            expected = {'message_id': 1001, 'type': 'cast_spell',
                        'aruconum': 1, 'data': spell}
            self.assertEqual(self.receive(self.a), expected)
            self.assertEqual(self.receive(self.b), expected)
        self.send(self.a, {'message_id': 3, 'aruconum': 1})
        after = self.receive(self.a)
        self.assertEqual(after['players'], before['players'])
        self.assertEqual(after['revision'], before['revision'])

    def test_cast_spell_accepts_string_message_type(self):
        self.join(self.a, 'Alice')
        self.send(self.a, {'type': 'cast_spell', 'aruconum': 1, 'data': 'Shield'})
        self.assertEqual(self.receive(self.a), {
            'message_id': 1001, 'type': 'cast_spell', 'aruconum': 1, 'data': 'Shield'})

    def test_invalid_spells_are_rejected_and_never_broadcast(self):
        self.join(self.a, 'Alice')
        self.join(self.b, 'Bob')
        self.receive(self.a)
        for spell in (None, '', 'Lightning', 1, True, [], {}, 'Fireball' * 100):
            self.send(self.a, {'message_id': 1001, 'aruconum': 1, 'data': spell})
            self.assertEqual(self.receive(self.a), {
                'message_id': 199, 'type': 'error', 'aruconum': 1, 'code': 'invalid_spell'})
        self.send(self.a, {'message_id': 1001, 'aruconum': 1})
        self.assertEqual(self.receive(self.a)['code'], 'invalid_spell')
        # A sync reply acts as a barrier: no rejected cast may precede it.
        self.send(self.b, {'message_id': 3, 'aruconum': 2})
        self.assertEqual(self.receive(self.b)['message_id'], 101)

    def test_unknown_and_spoofed_casters_are_rejected(self):
        self.join(self.a, 'Alice')
        self.send(self.b, {'message_id': 1001, 'aruconum': 2, 'data': 'Fireball'})
        self.assertEqual(self.receive(self.b)['code'], 'unknown_player')
        self.send(self.b, {'message_id': 1001, 'aruconum': 1, 'data': 'Fireball'})
        self.assertEqual(self.receive(self.b)['code'], 'aruconum_in_use')
        self.send(self.a, {'message_id': 3, 'aruconum': 1})
        self.assertEqual(self.receive(self.a)['message_id'], 101)

    def test_join_requires_valid_signature_instead_of_name(self):
        invalid = (None, '', [], [0, 0], [0, 0, 0], [0, 0, 0, 0, 0, 0],
                   [0, 0, 0, 256, 1, 0], [0, 0, 0, -1, 1, 0],
                   [0, 0, 0, True, 1, 0], [0, 0, 0, 1.5, 1, 0],
                   [0, 0, 1, 255, 1, 1], [0, 0, 0, 255, 1, 2],
                   [0, 0, 0, 255, 1, 1], [0, 0, 0, 255, 1, 0] * 33)
        for drawing in invalid:
            self.send(self.a, {'message_id': 1, 'aruconum': 1, 'signature': drawing})
            self.assertEqual(self.receive(self.a)['code'], 'invalid_signature', drawing)
        self.send(self.a, {'message_id': 1, 'aruconum': 1, 'name': 'Old name'})
        self.assertEqual(self.receive(self.a)['code'], 'invalid_signature')

    def test_signature_strokes_survive_join_sync_update_and_rejoin(self):
        drawing = [0, 0, 0, 80, 120, 0, 120, 120, 1, 255, 200, 1]
        self.send(self.a, {'message_id': 1, 'aruconum': 1, 'signature': drawing})
        first = self.receive(self.a)
        self.assertEqual(first['players'][0]['signature'], drawing)
        self.assertNotIn('name', first['players'][0])
        self.send(self.a, {'message_id': 3, 'aruconum': 1})
        self.assertEqual(self.receive(self.a)['players'], first['players'])
        self.send(self.a, {'message_id': 1, 'aruconum': 1, 'signature': drawing})
        self.assertEqual(self.receive(self.a)['revision'], first['revision'])
        drawing[-2] = 220
        self.send(self.a, {'message_id': 1, 'aruconum': 1, 'signature': drawing})
        updated = self.receive(self.a)
        self.assertEqual(updated['message_id'], 103)
        self.assertEqual(updated['player']['signature'], drawing)
        self.assertEqual(updated['player']['hp'], 100)
        self.assertEqual(updated['revision'], first['revision'] + 1)

    def test_largest_signature_fits_request_limit_and_four_player_snapshot(self):
        drawing = [value for i in range(64) for value in (i * 4, 255 - i * 4, 0)]
        for number in range(1, 5):
            client = self.client()
            message = {'message_id': 1, 'aruconum': number, 'signature': drawing}
            self.assertLessEqual(len(json.dumps(message).encode()), 1200)
            self.send(client, message)
            snapshot = self.receive(client)
            self.assertEqual(len(snapshot['players']), number)
            self.assertTrue(all(p['signature'] == drawing for p in snapshot['players']))




if __name__ == '__main__':
    unittest.main()

import json
import socket
import subprocess
import sys
import time
import unittest
from pathlib import Path


class ServerTests(unittest.TestCase):
    def setUp(self):
        self.devices = {}
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

    def tearDown(self):
        self.a.close()
        self.b.close()

    def stop_server(self):
        self.process.terminate()
        _, errors = self.process.communicate(timeout=3)
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
            message.setdefault('device_id', self.devices.setdefault(client, str(len(self.devices))))
        client.sendto(json.dumps(message).encode(), self.address)

    def receive(self, client):
        return json.loads(client.recv(65535))

    def join(self, client, name):
        self.send(client, {'type': 'join', 'name': name})
        return self.receive(client)

    def test_join_snapshot_and_changes(self):
        first = self.join(self.a, 'Alice')
        self.assertEqual(first['message_id'], 101)
        alice = first['device_id']
        self.assertEqual(alice, self.devices[self.a])
        self.assertNotIn('player_id', first)
        self.assertEqual(first['players'], [{'device_id': alice, 'name': 'Alice'}])
        second = self.join(self.b, 'Bob')
        self.assertEqual(len(second['players']), 2)
        added = self.receive(self.a)
        self.assertEqual(added['type'], 'added')
        self.assertEqual(added['message_id'], 102)
        self.assertEqual(added['player'], {'device_id': second['device_id'], 'name': 'Bob'})
        self.send(self.b, {'type': 'join', 'device_id': second['device_id'], 'name': 'Bobby'})
        self.assertEqual(self.receive(self.a)['player']['name'], 'Bobby')
        updated = self.receive(self.b)
        self.assertEqual(updated['type'], 'updated')
        self.assertEqual(updated['message_id'], 103)

    def test_numeric_messages_and_unknown_ids(self):
        for message in ({'message_id': 999}, {'message_id': True, 'name': 'Invalid'},
                        {'message_id': 1.0, 'name': 'Invalid'},
                        {'message_id': 999, 'type': 'join', 'name': 'Invalid'}):
            self.send(self.a, message)
        self.send(self.a, {'message_id': 1, 'name': 'Alice'})
        snapshot = self.receive(self.a)
        self.assertEqual(snapshot['message_id'], 101)
        self.assertEqual(len(snapshot['players']), 1)
        device_id = snapshot['device_id']
        self.send(self.a, {'message_id': 2, 'device_id': device_id})
        self.assertEqual(self.receive(self.a)['message_id'], 105)
        self.send(self.a, {'message_id': 3, 'device_id': device_id})
        self.assertEqual(self.receive(self.a)['players'], snapshot['players'])
        self.send(self.a, {'message_id': 2, 'device_id': 'unknown'})
        self.assertEqual(self.receive(self.a), {
            'message_id': 199, 'type': 'error', 'code': 'unknown_player'})

    def test_heartbeat_migrates_address_and_prevents_expiry(self):
        alice = self.join(self.a, 'Alice')['device_id']
        for _ in range(3):
            time.sleep(0.4)
            self.send(self.b, {'type': 'heartbeat', 'device_id': alice})
            self.assertEqual(self.receive(self.b)['type'], 'heartbeat_ack')
        self.send(self.a, {'type': 'join', 'name': 'Bob', 'device_id': 'bob-device'})
        snapshot = self.receive(self.a)
        self.assertEqual(len(snapshot['players']), 2)
        self.assertEqual(self.receive(self.b)['type'], 'added')

    def test_expiry_broadcasts_removal(self):
        alice = self.join(self.a, 'Alice')['device_id']
        bob = self.join(self.b, 'Bob')['device_id']
        self.receive(self.a)
        for _ in range(2):
            time.sleep(0.4)
            self.send(self.b, {'type': 'heartbeat', 'device_id': bob})
            self.receive(self.b)
        removed = self.receive(self.b)
        self.assertEqual(removed['type'], 'removed')
        self.assertEqual(removed['message_id'], 104)
        self.assertEqual(removed['device_id'], alice)

    def test_invalid_packets_do_not_stop_server(self):
        for packet in (b'bad', b'[]', b'\xff', b'x' * 1201,
                       b'{"type":"join","device_id":"valid-device","name":" "}'):
            self.a.sendto(packet, self.address)
        self.assertEqual(self.join(self.a, 'Alice')['type'], 'snapshot')

    def test_device_returns_from_new_address_after_timeout_and_restart(self):
        original = self.join(self.a, 'Alice')
        self.send(self.b, {'message_id': 1, 'device_id': self.devices[self.a],
                           'name': 'Alice'})
        self.assertEqual(self.receive(self.b)['device_id'], original['device_id'])
        time.sleep(1.3)
        self.send(self.b, {'message_id': 1, 'device_id': self.devices[self.a],
                           'name': 'Alice'})
        self.assertEqual(self.receive(self.b)['device_id'], original['device_id'])
        self.stop_server()
        self.start_server()
        self.send(self.b, {'message_id': 1, 'device_id': self.devices[self.a],
                           'name': 'Alice'})
        returned = self.receive(self.b)
        self.assertEqual(returned['device_id'], original['device_id'])
        self.assertEqual(len(returned['players']), 1)
        self.assertEqual(returned['players'][0], {'device_id': self.devices[self.a], 'name': 'Alice'})
        self.assertNotIn('player_id', returned)

    def test_different_devices_create_distinct_players(self):
        first = self.join(self.a, 'Alice')
        self.send(self.b, {'message_id': 1, 'name': 'Bob',
                           'device_id': 'bob-device'})
        second = self.receive(self.b)
        self.assertNotEqual(first['device_id'], second['device_id'])
        self.assertEqual(len(second['players']), 2)

    def test_join_requires_valid_device_id(self):
        for device_id in (None, '', ' ', 12, [], 'x' * 257):
            packet = {'message_id': 1, 'name': 'Alice', 'device_id': device_id}
            self.a.sendto(json.dumps(packet).encode(), self.address)
            self.assertEqual(self.receive(self.a)['code'], 'invalid_device_id')


if __name__ == '__main__':
    unittest.main()

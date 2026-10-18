import json
import socket
import subprocess
import sys
import threading
import time
import unittest
from unittest.mock import patch
from server import LobbyServer
from pathlib import Path


def signature(label='Alice'):
    return [0, 0, 0, 255, sum(map(ord, label)) % 200 + 1, 0]


class FireballImpactTests(unittest.TestCase):
    def setUp(self):
        class Transport:
            def __init__(self):
                self.packets = []

            def sendto(self, payload, destination):
                self.packets.append((json.loads(payload), destination))

        self.transport = Transport()
        self.server = LobbyServer(self.transport, timeout=15)
        self.clock = patch('server.time.monotonic', return_value=100)
        self.now = self.clock.start()
        self.addCleanup(self.clock.stop)
        self.a, self.b = ('127.0.0.1', 10001), ('127.0.0.1', 10002)
        self.server.receive_join({'aruconum': 1, 'signature': signature('Alice')}, self.a)
        self.server.receive_join({'aruconum': 2, 'signature': signature('Bob')}, self.b)
        self.transport.packets.clear()

    def cast(self):
        self.server.receive_cast_spell({'aruconum': 1, 'data': 'Fireball', 'target': 2}, self.a)

    def defend(self, spell, number=2, address=None):
        self.server.receive_cast_spell({'aruconum': number, 'data': spell},
                                       address or (self.b if number == 2 else self.a))

    def test_shield_blocks_all_currently_incoming_fireballs(self):
        self.cast()
        self.cast()
        self.now.return_value = 101
        self.defend('Shield')
        revision = self.server.revision
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 100)
        self.assertEqual(self.server.revision, revision)

    def test_defense_does_not_protect_against_future_casts(self):
        for spell in ('Shield', 'Reflect'):
            with self.subTest(spell=spell):
                self.server.players[2]['hp'] = 100
                self.defend(spell)
                self.cast()
                self.now.return_value += 2
                self.server.resolve_fireballs()
                self.assertEqual(self.server.players[2]['hp'], 50)

    def test_shield_only_covers_fireballs_that_existed_when_cast(self):
        self.cast()
        self.now.return_value = 100.5
        self.defend('Shield')
        self.now.return_value = 101
        self.cast()
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 100)
        self.now.return_value = 103
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 50)

    def test_reflect_halves_damage_and_returns_a_two_second_fireball(self):
        self.cast()
        self.now.return_value = 101
        self.defend('Reflect')
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 75)
        self.assertEqual(self.server.players[1]['hp'], 100)
        returned = [p for p, _ in self.transport.packets
                    if p['message_id'] == 1001 and p['data'] == 'Fireball' and p.get('target') == 1]
        self.assertEqual(returned, [{'message_id': 1001, 'type': 'cast_spell',
                                    'aruconum': 2, 'data': 'Fireball', 'target': 1}] * 2)
        self.now.return_value = 103.999
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[1]['hp'], 100)
        self.now.return_value = 104
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[1]['hp'], 75)
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[1]['hp'], 75)

    def test_shield_can_block_a_reflected_fireball(self):
        self.cast()
        self.now.return_value = 101
        self.defend('Reflect')
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.now.return_value = 103
        self.defend('Shield', number=1)
        self.now.return_value = 104
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[1]['hp'], 100)
        self.assertEqual(self.server.players[2]['hp'], 75)

    def test_reflected_fireball_can_be_reflected_again_without_gaining_damage(self):
        self.cast()
        self.now.return_value = 101
        self.defend('Reflect')
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.now.return_value = 103
        self.defend('Reflect', number=1)
        self.now.return_value = 104
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[1]['hp'], 87)
        self.now.return_value = 106
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 63)

    def test_latest_defense_replaces_previous_defense(self):
        self.cast()
        self.now.return_value = 100.5
        self.defend('Reflect')
        self.defend('Shield')
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 100)
        self.cast()
        self.now.return_value = 102.5
        self.defend('Shield')
        self.defend('Reflect')
        self.now.return_value = 104
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 75)

    def test_defense_at_or_after_impact_is_too_late(self):
        for spell in ('Shield', 'Reflect'):
            with self.subTest(spell=spell):
                self.server.players[2]['hp'] = 100
                self.cast()
                self.now.return_value += 2
                self.defend(spell)
                self.assertEqual(self.server.players[2]['hp'], 50)
                self.server.resolve_fireballs()
                self.assertEqual(self.server.players[2]['hp'], 50)

    def test_reflection_does_not_target_a_new_player_reusing_attackers_number(self):
        self.cast()
        self.now.return_value = 101
        self.defend('Reflect')
        self.server.players.pop(1)
        self.server.receive_join({'aruconum': 1, 'signature': signature('New Alice')}, self.a)
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 75)
        self.now.return_value = 104
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[1]['hp'], 100)

    def test_another_endpoint_cannot_defend_someone_else(self):
        self.cast()
        self.defend('Shield', address=self.a)
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 50)

    def test_defenses_expire_at_two_seconds_even_for_an_incoming_fireball(self):
        for spell in ('Shield', 'Reflect'):
            with self.subTest(spell=spell):
                self.server.players[2]['hp'] = 100
                self.cast()
                self.defend(spell)
                self.now.return_value += 2
                self.server.resolve_fireballs()
                self.assertEqual(self.server.players[2]['hp'], 50)

    def test_recasting_defense_restarts_the_two_second_window(self):
        self.defend('Shield')
        self.now.return_value = 101
        self.cast()
        self.now.return_value = 101.5
        self.defend('Shield')
        self.now.return_value = 103
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 100)

    def test_impact_before_expiry_is_protected_even_if_server_resolves_late(self):
        self.cast()
        self.now.return_value = 101
        self.defend('Shield')
        self.now.return_value = 104
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 100)

    def test_join_refresh_preserves_an_active_defense_window(self):
        self.cast()
        self.now.return_value = 101
        self.defend('Shield')
        self.server.receive_join({'aruconum': 2, 'signature': signature('Bob updated')}, self.b)
        self.now.return_value = 102
        self.server.resolve_fireballs()
        self.assertEqual(self.server.players[2]['hp'], 100)

    def test_damage_waits_two_seconds_and_is_broadcast_once(self):
        self.cast()
        self.assertEqual(self.server.players[2]['hp'], 100)
        resolve = getattr(self.server, 'resolve_fireballs', None)
        self.assertIsNotNone(resolve, 'Server must schedule damage at fireball impact')
        revision = self.server.revision
        self.now.return_value = 101.999
        resolve()
        self.assertEqual(self.server.players[2]['hp'], 100)
        self.now.return_value = 102
        resolve()
        self.assertEqual(self.server.players[2]['hp'], 50)
        self.assertEqual(self.server.revision, revision + 1)
        updates = [p for p, _ in self.transport.packets if p['message_id'] == 1002]
        self.assertEqual(len(updates), 2)
        self.assertTrue(all(p['hp'] == 50 for p in updates))
        resolve()
        self.assertEqual(self.server.players[2]['hp'], 50)
        self.assertEqual(self.server.revision, revision + 1)

    def test_overlapping_fireballs_have_independent_impacts_and_hp_stops_at_zero(self):
        self.cast()
        resolve = getattr(self.server, 'resolve_fireballs', None)
        self.assertIsNotNone(resolve, 'Server must schedule damage at fireball impact')
        self.now.return_value = 101
        self.cast()
        self.cast()
        self.now.return_value = 102
        resolve()
        self.assertEqual(self.server.players[2]['hp'], 50)
        self.now.return_value = 103
        resolve()
        self.assertEqual(self.server.players[2]['hp'], 0)

    def test_reused_number_does_not_receive_previous_players_damage(self):
        self.cast()
        resolve = getattr(self.server, 'resolve_fireballs', None)
        self.assertIsNotNone(resolve, 'Server must schedule damage at fireball impact')
        self.server.players.pop(2)
        self.server.receive_join({'aruconum': 2, 'signature': signature('New Bob')}, self.b)
        self.now.return_value = 102
        resolve()
        self.assertEqual(self.server.players[2]['hp'], 100)


class ServerTests(unittest.TestCase):
    def setUp(self):
        self.numbers = {}
        self.start_server()
        self.addCleanup(self.stop_server)
        self.a = self.client()
        self.b = self.client()

    def start_server(self, timeout=1):
        self.process = subprocess.Popen(
            [sys.executable, '-u', str(Path(__file__).with_name('server.py')),
             '--port', '0', '--timeout', str(timeout)],
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
            self.send(self.a, {'message_id': 1001, 'aruconum': 1, 'data': spell, 'target': 2})
            expected = {'message_id': 1001, 'type': 'cast_spell',
                        'aruconum': 1, 'data': spell, 'target': 2}
            self.assertEqual(self.receive(self.a), expected)
            self.assertEqual(self.receive(self.b), expected)
        self.send(self.a, {'message_id': 3, 'aruconum': 1})
        after = self.receive(self.a)
        self.assertEqual(after['players'], before['players'])
        self.assertEqual(after['revision'], before['revision'])

    def test_fireball_damage_is_broadcast_after_real_two_second_flight(self):
        self.stop_server()
        self.start_server(timeout=6)
        self.join(self.a, 'Alice')
        self.join(self.b, 'Bob')
        self.receive(self.a)
        started = time.monotonic()
        self.send(self.a, {'message_id': 1001, 'aruconum': 1, 'data': 'Fireball', 'target': 2})
        self.assertEqual(self.receive(self.a)['message_id'], 1001)
        self.assertEqual(self.receive(self.b)['message_id'], 1001)
        self.send(self.a, {'message_id': 3, 'aruconum': 1})
        before = self.receive(self.a)
        self.assertEqual(before['players'][1]['hp'], 100)
        self.a.settimeout(1.5)
        with self.assertRaises(socket.timeout):
            self.receive(self.a)
        self.a.settimeout(2)
        impact = self.receive(self.a)
        self.assertGreaterEqual(time.monotonic() - started, 1.95)
        self.assertEqual(impact['message_id'], 1002)
        self.assertEqual(impact['aruconum'], 2)
        self.assertEqual(impact['hp'], 50)
        self.assertEqual(impact['revision'], before['revision'] + 1)
        self.assertEqual(self.receive(self.b), impact)

    def test_reflect_returns_a_half_damage_fireball_over_udp(self):
        self.stop_server()
        self.start_server(timeout=10)
        self.join(self.a, 'Alice')
        self.join(self.b, 'Bob')
        self.receive(self.a)
        self.a.settimeout(3)
        self.b.settimeout(3)
        started = time.monotonic()
        self.send(self.a, {'message_id': 1001, 'aruconum': 1, 'data': 'Fireball', 'target': 2})
        self.assertEqual(self.receive(self.a)['data'], 'Fireball')
        self.assertEqual(self.receive(self.b)['data'], 'Fireball')
        # Windows' monotonic clock can give adjacent packets the same timestamp.
        # Cast during the flight so defense expiry is strictly after impact.
        time.sleep(0.1)
        self.send(self.b, {'message_id': 1001, 'aruconum': 2, 'data': 'Reflect'})
        self.assertEqual(self.receive(self.a)['data'], 'Reflect')
        self.assertEqual(self.receive(self.b)['data'], 'Reflect')
        first_impact = self.receive(self.a)
        self.assertEqual(first_impact['message_id'], 1002)
        self.assertEqual(first_impact['aruconum'], 2)
        self.assertEqual(first_impact['hp'], 75)
        self.assertEqual(self.receive(self.b), first_impact)
        returned = self.receive(self.a)
        self.assertEqual(returned, {'message_id': 1001, 'type': 'cast_spell',
                                    'aruconum': 2, 'data': 'Fireball', 'target': 1})
        self.assertEqual(self.receive(self.b), returned)
        second_impact = self.receive(self.a)
        self.assertGreaterEqual(time.monotonic() - started, 3.95)
        self.assertEqual(second_impact['message_id'], 1002)
        self.assertEqual(second_impact['aruconum'], 1)
        self.assertEqual(second_impact['hp'], 75)
        self.assertEqual(self.receive(self.b), second_impact)

    def test_cast_spell_accepts_string_message_type(self):
        self.join(self.a, 'Alice')
        self.send(self.a, {'type': 'cast_spell', 'aruconum': 1, 'data': 'Shield'})
        self.assertEqual(self.receive(self.a), {
            'message_id': 1001, 'type': 'cast_spell', 'aruconum': 1, 'data': 'Shield'})

    def test_fireball_requires_another_connected_integer_target(self):
        self.join(self.a, 'Alice')
        self.join(self.b, 'Bob')
        self.receive(self.a)
        for target in (None, 0, 1, 3, 5, '2', True, 2.0, [], {}):
            self.send(self.a, {'message_id': 1001, 'aruconum': 1,
                               'data': 'Fireball', 'target': target})
            self.assertEqual(self.receive(self.a).get('code'), 'invalid_target', target)
        self.send(self.a, {'message_id': 1001, 'aruconum': 1, 'data': 'Fireball'})
        self.assertEqual(self.receive(self.a).get('code'), 'invalid_target')
        self.send(self.b, {'message_id': 3, 'aruconum': 2})
        self.assertEqual(self.receive(self.b)['message_id'], 101)

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

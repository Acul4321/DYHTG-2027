# Spell Battle UDP lobby

Run `python server.py`. The server listens on `0.0.0.0:7777`.
Mobile clients use the computer's LAN IP on the same Wi-Fi. Allow inbound UDP
port 7777 through the firewall.

The server console logs received messages and successfully sent messages
with a timestamp, endpoint, byte count, and JSON content. Invalid packets log
a `DROP` reason; socket send errors log `SEND FAILED`. Routine heartbeats and
heartbeat acknowledgements are not logged; errors remain visible. `SEND` means the local UDP send
succeeded, not that the remote client confirmed delivery.

Each datagram contains one UTF-8 JSON object. Client packets are limited to
1200 bytes. Numeric `message_id` identifies a type, not an individual packet.
String `type` requests are also accepted; explicit numeric IDs take precedence.

Players are keyed directly by `device_id`. A player object contains only
`device_id` and `name`. There is no generated player ID or identity database.
Use `SystemInfo.deviceUniqueIdentifier` in Unity. Device IDs must be nonblank
strings of 1-256 characters; names must have 1-32 characters after trimming.

## Client messages

Join or rename:
```json
{"message_id":1,"device_id":"DEVICE_ABC","name":"Alice"}
```
Heartbeat every 5 seconds:
```json
{"message_id":2,"device_id":"DEVICE_ABC"}
```
Request a full snapshot:
```json
{"message_id":3,"device_id":"DEVICE_ABC"}
```

## Server messages

Snapshot (101), on join or sync:
```json
{"message_id":101,"type":"snapshot","revision":1,"device_id":"DEVICE_ABC","players":[{"device_id":"DEVICE_ABC","name":"Alice"}]}
```
Join snapshots also include `heartbeat_interval: 5`. A rename sends an update.

Added (102):
```json
{"message_id":102,"type":"added","revision":2,"player":{"device_id":"DEVICE_DEF","name":"Bob"}}
```
Updated (103):
```json
{"message_id":103,"type":"updated","revision":3,"player":{"device_id":"DEVICE_DEF","name":"Bobby"}}
```
Removed (104), after 15 seconds without join, heartbeat, or sync:
```json
{"message_id":104,"type":"removed","revision":4,"device_id":"DEVICE_DEF"}
```
Heartbeat acknowledgement (105):
```json
{"message_id":105,"type":"heartbeat_ack","revision":4}
```
Error (199):
```json
{"message_id":199,"type":"error","code":"unknown_player"}
```
`unknown_player` means join again; `invalid_device_id` means the device ID is
missing or invalid. Unknown or non-integer message IDs are ignored.

Rejoining with the same device ID updates the same active entry and address.
Different devices may share a name. After expiry or server restart, join again
with the same device ID. Active players and revisions are held in memory.

UDP can drop, duplicate, or reorder messages. Retry joins and sync requests.
Ignore changes at or below the last applied revision. If a change skips a
revision or a heartbeat reports a newer revision, request a snapshot and replace
the local list. Revisions reset on restart; use the first snapshot after
reconnecting as a fresh baseline.

Device IDs are client claims, visible to other players, and do not prove
ownership. This prototype has no authentication. Snapshots are single UDP
packets, so the protocol is intended for small lobbies.

IDs are defined in the `MessageId` enum. Add new IDs and handlers without
renumbering or reusing existing IDs.

`LobbyServer.receive_message` decodes and dispatches incoming packets through
the `handlers` dictionary to `receive_join`, `receive_heartbeat`, or
`receive_sync`. Each outgoing type has a separate method: `send_snapshot`,
`send_added`, `send_updated`, `send_removed`, `send_heartbeat_ack`, and
`send_error`. Shared JSON encoding and UDP delivery live in `send_message`.
To add an incoming type, add its enum ID, implement a receive method, and
register it in `handlers`. Add a send method for each new outgoing type.

Run `python -m unittest -v` for local UDP integration tests. `--port 0` chooses
a free port; `--timeout 1` shortens expiry for testing.

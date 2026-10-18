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

Players are keyed by integer `aruconum`, chosen by drawing 1, 2, 3, or 4 in Unity.
After number selection, the client prompts "Sign your name" with Clear and Done
buttons. It waits for Done before joining. Each player record contains `aruconum`,
`signature`, and `hp` (initially 100). Numbers must be JSON integers from 1 to 4;
strings, booleans and floats are rejected. There is no string player name.
The protocol no longer accepts machine IDs. Deploy the updated client and server
together.

## Client messages

Join or update a signature:
```json
{"message_id":1,"aruconum":1,"signature":[0,0,0,255,100,0]}
```
Heartbeat every 5 seconds:
```json
{"message_id":2,"aruconum":1}
```
Request a full snapshot:
```json
{"message_id":3,"aruconum":1}
```
Cast a spell (1001):
```json
{"message_id":1001,"aruconum":1,"data":"Fireball","target":2}
```
`data` must be exactly `Fireball`, `Shield`, or `Reflect`. The sender must have
joined and must own that number at its current UDP endpoint. Accepted casts
refresh the player's activity timeout. Unknown players receive `unknown_player`;
another endpoint using a taken number receives `aruconum_in_use`; missing,
non-string, or unsupported spell names receive `invalid_spell`.
`target` identifies another connected player's integer ArUco number. Fireball
requires a target; missing, self, disconnected, or malformed targets receive
`invalid_target`. Shield and Reflect may use `target: 0` (or omit it).
Deploy the updated client and server together to relay targeted casts.

## Signature format

`signature` is a flat integer array of `[x, y, stroke, x, y, stroke, ...]`.
Coordinates are quantized to 0-255 with the drawing's aspect ratio preserved;
Y increases downwards. Stroke IDs start at 0 and increase consecutively, so
separate pen strokes are never connected. The drawing must contain 2-64 points,
at most 32 strokes, and at least one nonzero segment within a stroke. Single-point
strokes are allowed for dotted letters. Floats, booleans, malformed arrays, and
out-of-range coordinates are rejected with `invalid_signature`. Legacy name-only
JOINs are also rejected. Unity resamples the captured strokes to keep the compact
JSON JOIN below 1200 bytes. Signatures are held in memory and relayed as points;
they are not recognized as text or written to an identity database.

On duplicate-number rejection, the client retains its signature while asking for
another number. On signature rejection it retains the number and asks for a new
signature. Both the client and server must be updated together for this format.

## Server messages

Confirmed cast (1001), broadcast to all connected players including the caster:
```json
{"message_id":1001,"type":"cast_spell","aruconum":1,"data":"Fireball","target":2}
```
Here `aruconum` identifies the caster. This confirms and broadcasts the spell.
`target` is preserved when supplied for another player. Clients spawn the
fireball once on this confirmation, using tracked displays for remote players
and the AR camera for their local player's position. If either endpoint has no
tracked position, the client skips the projectile visual. Fireballs fly to the
position at cast confirmation over exactly two seconds, regardless of distance.
An incoming cast instantiates `Assets/Prefabs/FireballWarning.prefab` on the
target's client, showing **Fireball!** at the top of the screen for those two
seconds, even if its caster is not currently tracked. Overlapping incoming
casts keep the warning visible until the last flight ends. The target marker's
`!` indicator is also instantiated from `Assets/Prefabs/TargetIndicator.prefab`.

Two seconds after accepting a Fireball, the server subtracts 50 HP from its
target (clamped to zero), increments the lobby revision, and broadcasts the
health update using message 1002. Client visual timers never change HP. If the
target leaves and its number is reused, the old cast cannot hurt the new player.
Shield and Reflect last exactly two seconds from server acceptance. They protect
the caster only when a fireball's scheduled impact is within that interval;
an impact at the expiration time is unprotected. They require no opponent target.
Recasting restarts the two-second window; switching spells replaces the previous
defense immediately. A cast accepted at or after impact is too late. The server
uses the scheduled impact time even if its next update is delayed.

On every client, confirmed casts instantiate the existing
`Assets/Prefabs/shield_0.prefab` or `Assets/Prefabs/reflect_0.prefab` for two seconds.
Remote effects follow the caster's tracked display; local effects follow the AR
camera. Remote visuals hide on tracking loss and reappear only for the remaining
duration if tracking returns. Recasting refreshes the visual timer, switching
replaces the effect, and leaving removes it.

Shield blocks the covered hits completely. Reflect applies half the incoming
damage at impact, then broadcasts a new Fireball from the defender toward the
original attacker. This return flight also lasts two seconds, uses the existing
projectile and warning prefabs, and deals the remaining half on arrival. Returns
can themselves be shielded or reflected. With integer HP, odd damage keeps the
extra point on the defender (25 becomes 13 taken and 12 returned), so repeated
reflections never increase damage and eventually end. Returns are skipped if
the original attacker has left or its marker number now belongs to a new player.

Cast confirmations themselves
do not change lobby revisions. These are transient UDP events with no retry,
deduplication, or replay; a duplicated request can produce another broadcast.

Snapshot (101), on join or sync:
```json
{"message_id":101,"type":"snapshot","revision":1,"aruconum":1,"players":[{"aruconum":1,"signature":[0,0,0,255,100,0],"hp":100}]}
```
Join snapshots also include `heartbeat_interval: 5`. A changed signature sends an update.

Added (102):
```json
{"message_id":102,"type":"added","revision":2,"player":{"aruconum":2,"signature":[0,0,0,255,150,0],"hp":100}}
```
Updated (103):
```json
{"message_id":103,"type":"updated","revision":3,"player":{"aruconum":2,"signature":[0,0,0,255,180,0],"hp":100}}
```
Removed (104), after 15 seconds without join, heartbeat, or sync:
```json
{"message_id":104,"type":"removed","revision":4,"aruconum":2}
```
Heartbeat acknowledgement (105):
```json
{"message_id":105,"type":"heartbeat_ack","revision":4,"aruconum":1}
```
Error (199):
```json
{"message_id":199,"type":"error","code":"unknown_player","aruconum":1}
```
`unknown_player` means join again with the selected number. `invalid_aruconum`
means the number is missing or is not an integer in 1-4; its error reply uses
`aruconum: 0`. `aruconum_in_use` means another endpoint already holds that number.
The Unity client resets its selection to 0 and prompts for a different drawing.
Errors and heartbeat acknowledgements echo the relevant number, allowing the
client to ignore delayed replies for a previous selection. Unknown or non-integer
message IDs are ignored.

Repeating a join from the same UDP endpoint is safe and may update its signature
without resetting HP. An unchanged signature does not change the revision.
A different endpoint cannot join, heartbeat, or sync using an occupied number.
An endpoint is the sender IP and UDP port, used to route packets and reserve the
selected number; it is not a separate player ID. After 15 seconds without a valid
join, heartbeat, or sync, the number becomes available again. A restarted client
with a new UDP port must choose a free number or wait for its previous slot to
expire. Server restarts clear all reservations. Players may use identical drawings.
Active players and revisions are held in memory; there is no identity database.

UDP can drop, duplicate, or reorder messages. Retry joins and sync requests.
Ignore changes at or below the last applied revision. If a change skips a
revision or a heartbeat reports a newer revision, request a snapshot and replace
the local list. Revisions reset on restart; use the first snapshot after
reconnecting as a fresh baseline.

Numbers are client claims and do not authenticate a person. This prototype has
no authentication. Snapshots are single UDP packets; there are at most four
active number slots. A full four-player signature snapshot may exceed 1200 bytes;
clients must receive the whole datagram. The 1200-byte limit applies to incoming
client requests.

IDs are defined in the `MessageId` enum. Add new IDs and handlers without
renumbering or reusing existing IDs.

`LobbyServer.receive_message` decodes and dispatches incoming packets through
the `handlers` dictionary to `receive_join`, `receive_heartbeat`,
`receive_sync`, or `receive_cast_spell`. Each outgoing type has a separate method: `send_snapshot`,
`send_added`, `send_updated`, `send_removed`, `send_heartbeat_ack`, and
`send_error`, and `send_cast_spell`. Shared JSON encoding and UDP delivery live in `send_message`.
To add an incoming type, add its enum ID, implement a receive method, and
register it in `handlers`. Add a send method for each new outgoing type.

Run `python -m unittest -v` for local UDP integration tests. `--port 0` chooses
a free port; `--timeout 1` shortens expiry for testing.

### Health update (1002)

The server broadcasts an absolute HP value after damage, using the same lobby revision sequence as player updates. Example: {"message_id":1002,"type":"update_health","revision":3,"aruconum":2,"hp":50}. Clients update the existing player object, refresh remote displays, and update the local HP text and slider (0-100) when the affected player is local. Snapshots and message 103 also refresh the health UI. Stale revisions are ignored; gaps request a snapshot. Deploy this server with the updated Unity client.

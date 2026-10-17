# Shared Player Localization Implementation Plan

> **For agentic workers:** Use superpowers:executing-plans if implementation is requested. Track the checklist below task by task. This is a proposed plan, not authorization to implement.

**Goal:** Locate Android and iPhone players in the same physical room in a common coordinate frame for SpellBattle.

**Architecture:** A host publishes one stationary room anchor; every phone resolves that same anchor. Each phone converts its tracked camera pose into anchor-relative coordinates, sends those coordinates through the game server, and reconstructs remote players under its local shared-space root.

**Tech Stack:** Existing Unity 6000.6.6f1, AR Foundation/ARCore/ARKit 6.6.2, Google ARCore Extensions compatible with AR Foundation 6, existing UDP lobby transport.

**Spec:** Proposed design and assumptions are included below. No separate approved design exists yet; implementation should first confirm these decisions with the user.

## Confirmed scope and proposed defaults

- Confirmed: players are physically together, using Android/iPhone AR.
- Locate the participating phone, used as a proxy for the player. This does not locate an uninstrumented person or track a body independently of their phone.
- Start with two players, one room, one anchor, and anchors lasting only as long as needed for a match.
- Start Android-to-Android, then verify Android-to-iPhone before claiming cross-platform support.
- Use metres, unit scale, a right-handed or left-handed convention consistent with Unity throughout, and full quaternion orientation. No GPS or compass alignment.
- Keep the AR camera under its tracking hierarchy. Do not parent it to the shared anchor or overwrite tracked camera transforms.
- Use an upright game frame: origin at the anchor, Y aligned with gravity, yaw defined by the host's chosen facing direction. Store the fixed anchor-to-game-frame offset in room metadata; every client uses that same offset.
- Cloud localization and multiplayer networking are separate services. The existing lobby server remains responsible for room membership and relaying player poses.
- A printed-image provider is an optional fallback using the same shared-space interface, not a second mandatory implementation.

## Existing project evidence

- Packages/manifest.json already includes AR Foundation, ARCore, and ARKit 6.6.2, but not ARCore Extensions.
- ProjectSettings/ProjectVersion.txt specifies Unity 6000.6.6f1.
- Assets/Scenes/SampleScene.unity contains an AR Session and an AR starter scene structure; audit the instantiated XR Origin and managers before adding components.
- Assets/Codes/PlayerSystem.cs implements UDP JOIN, snapshots, lobby deltas, and heartbeats, with player lookup by device_id.
- Assets/Codes/Player.cs contains identity, name, and hp, but no spatial pose.
- Assets/Codes/PlayerNetwork.cs has an empty update loop and a spell-message sender.
- Assets/Codes/NetworkHandle.cs has an empty cast handler; no existing player pose receiver was found.
- No lobby server source was found in this checkout. Server changes are a required external deliverable, not an assumed existing capability.

## Provider choice

1. **Recommended: Google Cloud Anchors.** Closest fit for shared cross-platform visual localization without a physical marker. Requires cloud authorization, Internet access for hosting/resolving, and useful environmental features.
2. **Fallback: fixed printed reference image.** Both phones recognize the same known-size image and derive the same room frame. Simpler operational setup, but requires a stationary physical marker and has its own tracking/drift limits. A QR code containing an anchor ID alone does not provide spatial alignment.
3. **Defer: custom visual mapping/localization service.** Unnecessary complexity for the first working room-scale multiplayer version.

## Coordinate contract

Let T_WA map anchor coordinates into a phone's Unity world; let T_AG be the room's fixed game-frame offset; let T_WC be the tracked camera pose.

    T_WG = T_WA * T_AG
    T_GC = inverse(T_WG) * T_WC
    receiver T_WRemote = receiver T_WG * received T_GC

Implement rigid-pose conversion in SharedSpace, using inverse rotation/translation for sending and forward rotation/translation for receiving. Keep scale at one. Render remote-player objects beneath SharedSpaceRoot with their received game-space pose as their local pose.

Example: independent phones may have entirely different Unity-world origins and headings. A phone two metres along shared +X must nevertheless publish approximately (2, y, 0) on both devices. Sending raw camera.position would not satisfy this.

The provider owns the live anchor transform. SharedSpace derives its root from that transform and the agreed offset. Do not create a feedback loop by moving XR Origin in response to a child anchor's world pose.

## Proposed files and interfaces

All paths below are repository-relative and describe future changes.

| File | Responsibility / interface |
| --- | --- |
| Assets/Codes/Spatial/SpatialTypes.cs | AlignmentState enum; AnchorDescriptor with room_id, anchor_id, anchor_revision, provider, expiry, game-frame offset |
| Assets/Codes/Spatial/ISharedAnchorProvider.cs | HostAsync(CancellationToken), ResolveAsync(AnchorDescriptor, CancellationToken), Reset(); TrackingChanged event; exposes live anchor Transform. Exact task/promise adaptation remains inside provider |
| Assets/Codes/Spatial/CloudAnchorProvider.cs | SDK configuration, local anchor creation, feature-quality checks, asynchronous host/resolve, error mapping, native object cleanup |
| Assets/Codes/Spatial/SharedSpace.cs | bool TryWorldToShared(Pose world, out Pose shared); bool TrySharedToWorld(Pose shared, out Pose world); shared root; readiness |
| Assets/Codes/Spatial/RoomAlignmentController.cs | Room anchor lifecycle, server metadata, revision handling, and ready-state transitions |
| Assets/Codes/Spatial/AlignmentStatusUI.cs | Scan guidance, progress, retry, tracking-loss status |
| Assets/Codes/Spatial/PlayerPoseMessages.cs | Serializable control and pose payloads, protocol version |
| Assets/Codes/Spatial/PlayerPoseStore.cs | Latest valid pose per participant plus bounded interpolation history; independent of lobby Player object replacement |
| Assets/Codes/Spatial/PlayerPoseReplicator.cs | Camera sampling, send cadence, tracking status, receive validation |
| Assets/Codes/Spatial/RemotePlayerView.cs | Marker/name display and interpolation; no ownership of network state |
| Assets/Prefabs/RemotePlayer.prefab | Visible phone-position marker and name label; optional approximate body graphic |
| Assets/Codes/PlayerSystem.cs | Route spatial messages/events and expose connection readiness; retain existing lobby revision semantics |
| Assets/Codes/NetworkSendObject.cs | Support spatial payload envelopes without breaking existing JOIN/snapshot/spell decoding |
| Assets/Scenes/SampleScene.unity | Wire provider, shared root, controller, pose replication, and status UI |

Keep Player.cs as lobby/game identity for the first version; do not push 15 Hz movement through PlayersChanged or lobby revision numbers.

## Task 1: Prove SDK and device compatibility

- [ ] Record current packages and scene setup; check supported physical Android/iPhone models and available iOS signing/build tooling. iOS builds require a suitable Mac/Xcode setup outside this Windows checkout.
- [ ] Select Google's AR Foundation 6-compatible Extensions distribution; pin a verified tag or commit instead of a moving branch. Do not downgrade the project's AR packages speculatively.
- [ ] Configure ARCore on Android and ARKit on iOS, camera permissions, cloud capabilities, and required native build settings for the chosen SDK.
- [ ] Configure a Google Cloud project and supported platform authorization. Keep service-account secrets off phones and out of the repository. If authorization needs a token service, include that as backend scope.
- [ ] Build the official minimal cloud-anchor flow on Android, then iPhone. Host on one and resolve on the other; repeat with roles reversed.
- [ ] Record package versions, device/OS versions, build settings, and successful logs. Failure here blocks cloud-specific integration; investigate before proceeding, or explicitly choose the image-marker fallback.

**Deliverable:** A reproducible cross-platform host/resolve smoke test using the exact selected package combination.

## Task 2: Implement and test shared-space mathematics

- [ ] Add SpatialTypes, SharedSpace, and a temporary debug origin/axis display.
- [ ] Add EditMode tests before implementing conversion: identity frame; translated/rotated frame; round-trip pose conversion; two different device-world frames yielding the same shared coordinates.
- [ ] Verify quaternion composition, nonzero camera height, and a nonidentity anchor-to-game offset. Reject scale-changing setup.
- [ ] Run the tests using Unity Test Runner and verify a two-metre physical reference visually on a device.

**Deliverable:** Correct coordinate conversion independently of the cloud provider or transport.

## Task 3: Implement host/join alignment

- [ ] Add CloudAnchorProvider using the selected SDK's asynchronous host/resolve APIs. Adapt SDK promises/coroutines internally; they are not assumed to be .NET Tasks.
- [ ] Host workflow: join room, win server-assigned anchor-owner role, scan a fixed textured area, place one anchor, define upright frame, host it, publish the descriptor only after success.
- [ ] Join workflow: obtain latest descriptor, scan the same physical area, resolve its ID, construct SharedSpaceRoot, and report spatial readiness.
- [ ] Use states Uninitialized -> Scanning -> Hosting/Resolving -> Aligned, plus TrackingLost and Failed. Lobby membership alone never means Aligned.
- [ ] Cancel outstanding work on scene teardown, room leave, new revision, or application lifecycle changes. Ignore late completions for an obsolete room/revision.
- [ ] Show a shared test cube and axes before rendering player poses. Both phones must agree on origin, forward direction, and metre scale.

**Deliverable:** Both phones independently resolve the same physical game frame.

## Task 4: Extend the server protocol

Proposed IDs below must be coordinated with the server; they are not implemented today. Preserve existing 1-3, 101-105, 199, and 1001 meanings.

| ID | Proposed message | Semantics |
| --- | --- | --- |
| 2001 | PublishRoomAnchor | Authorized owner proposes descriptor; server validates room/revision and stores canonical descriptor |
| 2002 | RequestRoomAnchor | Member requests current descriptor for join/reconnect |
| 2003 | RoomAnchorState | Server sends descriptor and revision, retained in spatial room state |
| 2004 | SpatialStatus | Participant reports aligned/lost/failed for a specific revision |
| 2010 | PlayerPose | Best-effort latest pose in shared coordinates |

- [ ] Obtain server source or coordinate the external backend implementation. Define protocol_version, room_id, session token, participant incarnation, and anchor_revision in the contract.
- [ ] Make control messages reliable through acknowledgements, idempotent retry, and snapshot recovery, or an existing reliable channel if available. Keep pose traffic best effort.
- [ ] Add a dedicated spatial-state revision; do not advance the existing lobby revision for each movement packet.
- [ ] Bind participant identity to authenticated room membership. device_id alone is not authentication; do not trust a sender-provided ID for routing or permissions.
- [ ] Support late join, reconnect, owner disconnect, and anchor replacement. Server state survives host departure for the match; owner reassignment does not automatically replace a valid anchor.
- [ ] Test loss, duplicate publish, reordered control packets, old revision replay, unauthorized room access, and late join receiving the latest descriptor.

**Deliverable:** Every room member receives the same canonical descriptor even when UDP control packets are lost.

## Task 5: Replicate and display player poses

Pose payload: protocol_version, room_id, anchor_revision, participant incarnation, sequence, session-relative monotonic sample time, position (x/y/z), rotation (x/y/z/w), tracking status. The server supplies or verifies participant identity. A timestamp is not directly comparable across devices without a clock-offset estimate.

- [ ] Sample the AR camera after tracking updates. Send at 15 Hz while Aligned and locally Tracking; rendering remains at the device frame rate.
- [ ] Use existing NetworkSendObject.data as serialized payload for an initial compatible version if needed; explicitly deserialize it after dispatch. Keep datagrams compact and capped to avoid fragmentation.
- [ ] Validate finite numbers, usable quaternions, matching room/incarnation/revision, increasing sequence, and configured plausible room bounds. Reset sequence handling on a new incarnation.
- [ ] Store movement independently from lobby snapshots. Remove pose/view state when a participant leaves; reconcile updates that arrive before membership or anchor metadata without unbounded buffering.
- [ ] Render markers in shared coordinates with a starting 100 ms interpolation buffer. Interpolate translation and quaternion rotation. Estimate sender/receiver clock offset or use an arrival-time strategy; never subtract unrelated device clocks.
- [ ] Use receive age to fade at 500 ms without updates and hide at 2 seconds. Avoid unlimited prediction. These values are proposed defaults to tune on device.
- [ ] Send tracking-loss status reliably enough that it cannot leave a peer appearing valid indefinitely; freshness timeouts remain the backstop.
- [ ] Test reordered/duplicated poses, invalid values, reconnect sequence reset, stale timeout, and poses from an obsolete anchor revision.

**Deliverable:** Phone B displays phone A's current physical position and orientation, and vice versa.

## Task 6: Recover and connect gameplay

- [ ] On local tracking loss, stop publishing valid poses, disable spatial casts locally, and show rescan guidance. Peers mark that player unavailable.
- [ ] On session reset, invalidate alignment and resolve again before sending. Merely recovering lobby connection does not restore AR alignment.
- [ ] When the room anchor changes, increment anchor_revision, flush old pose buffers, re-resolve, and require readiness again. Reject old-revision casts and poses.
- [ ] Use short bounded retries for transient network errors; surface authorization, expiry, incompatible data, and quota errors distinctly. Avoid repeated automatic hosting on every retry.
- [ ] For the first gameplay pass, aim at a visible marker or approximate hit volume around the remote phone. Body location and facing remain estimates unless a separate body-tracking feature is added.
- [ ] Future cast payloads should include the shared origin/direction, anchor revision, and shot identity. Server hit validation requires its own agreed timing/lag-compensation design; do not claim authoritative combat from pose relay alone.
- [ ] Test covering the camera, background/foreground, packet outage, host departure, and relocalization without a stale remote marker remaining targetable.

**Deliverable:** Tracking failure cannot silently leave gameplay using obsolete spatial coordinates.

## Task 7: Measure the result on real devices

Proposed acceptance targets are product goals, not SDK guarantees:

- [ ] Mark 3-5 measured locations in a lit, textured room. Record cross-device position error and heading error at each point.
- [ ] Aim for <=15 cm position disagreement and <=5 degrees yaw disagreement at nearby measured points. Define nearby initially as within 3 m of the origin.
- [ ] Run at least ten joins per device pairing; target >=90% resolution within 30 seconds after adequate scanning and network availability. Report median and worst cases, not only the best run.
- [ ] Walk around for five minutes and return to marked points; record drift, corrections, and tracking interruptions.
- [ ] Verify end-to-end visible movement delay, targeting <250 ms on the test network with the proposed interpolation settings.
- [ ] Repeat Android/Android and Android/iPhone, swapping host roles. Repeat after late join, tracking loss, and a simulated 10% packet-loss/reordering condition.
- [ ] If measured accuracy misses the gameplay need, first improve scan location, guidance, and arena size. Do not increase network send rate to solve localization drift.

**Deliverable:** A short device test report with measured error/latency, failure rates, and reproducible build versions.

## Review focus

- A recovered AR session may have a changed world origin: Task 6 must require re-localization.
- Lost anchor-publication datagrams must not strand joiners: Task 4 must retry or recover canonical state.
- Late host/resolve completion must not re-enable an obsolete room: Task 3 must enforce revision/cancellation guards.
- Reconnected players may restart sequence numbers: Task 5 must use a new participant incarnation.
- A valid phone pose is not a measured torso location: Task 6 must keep body estimates explicit.

## Suggested delivery order and effort

1. SDK/device proof: 0.5-1.5 working days if accounts/devices/build tooling are ready.
2. Frame mathematics and shared-origin visual proof: 0.5-1 day.
3. Room metadata and backend protocol: 1-2 days with server access.
4. Pose replication and marker display: 1-2 days.
5. Recovery and device measurements: 1-2 days.

Budget roughly 4-9 working days for one developer for a tested first version, with extra time if signing, SDK compatibility, cloud authorization, or backend access blocks progress. A one-day demonstration should use a printed-image origin and simple pose markers, and should be labelled a prototype.

## Current primary references

- [Microsoft lifecycle: Azure Spatial Anchors retirement](https://learn.microsoft.com/en-us/lifecycle/products/azure-spatial-anchors) — the former Azure service has retired.
- [Google Cloud Anchors overview](https://developers.google.com/ar/develop/cloud-anchors) — shared visual anchors for Android/iOS.
- [AR Foundation 6 support and migration guidance](https://developers.google.com/ar/develop/unity-arf/upgrade-to-ar-foundation-6) — use compatible Extensions and verify the project's exact versions.
- [Google SDK release notes](https://github.com/google-ar/arcore-unity-extensions/releases) — choose and pin the compatible distribution.
- [Cloud Anchors Unity developer guide](https://developers.google.com/ar/develop/unity-arf/cloud-anchors/developer-guide) — asynchronous hosting/resolving, configuration, and errors.
- [Unity image tracking sample](https://github.com/Unity-Technologies/arfoundation-samples/blob/main/Assets/Scenes/ImageTracking/BasicImageTracking/TrackedImageInfoManager.cs) — optional printed-image fallback starting point.

# Custom ArUco Player Displays Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:executing-plans to implement this plan task-by-task when native execution is selected. Alternatively use superpowers:subagent-driven-development only if the user selects delegation. Steps use checkbox syntax for tracking.

**Goal:** Make the existing four PlayerDisplays follow the physical positions of the user's printed ArUco markers.

**Architecture:** A managed C# detector decodes four configured 4x4 patterns from AR camera grayscale images. A calibrated planar pose solver converts their image corners into metric poses; an AR Foundation adapter and display presenter convert these to Unity world positions and manage visibility independently of lobby networking.

**Tech Stack:** Unity 6000.6.6f1, C#, existing AR Foundation/ARCore/ARKit 6.6.2, existing editor menu checks. No OpenCV, native detector libraries, paid plugins or new runtime packages.

**Spec:** docs/superpowers/specs/2026-10-17-aruco-player-displays-design.md, approved by the user on 2026-10-17.

## Global Constraints

- Android and iPhone are targets; physical device tracking remains unverified until tested on each.
- Marker side length is 0.100 metres across the outer black square, excluding white margin.
- Marker IDs 0-3 map to playerDisplays indices 0-3 and lobby player numbers 1-4.
- Default to standard DICT_4X4_50 patterns for IDs 0-3; expose expected bit patterns and provide reference previews because the exact dictionary was not supplied.
- Process at 10 detections per second with the longer image side bounded to 640 pixels; reuse buffers and never overlap detection work.
- Default world-up display offset is 0.10 m, display width is 0.20 m, loss timeout is 0.35 s.
- Preserve current live scene assignments and unrelated uncommitted changes. Never move XR Origin or the AR camera.
- No network pose messages, cloud anchors or lobby-protocol changes. Tracking must work without a lobby snapshot.

## Review Focus

- Rotating or mirroring a camera image must not swap IDs or move displays to the wrong side; Task 3 tests explicit image geometry.
- CPU images can repeat timestamps or have padded rows; Tasks 1 and 3 test strides and duplicate-frame rejection.
- A tracking reset during a frame must invalidate old observations; Task 4 tests reset/reacquisition.
- Partial occlusion, nested contours and similar non-marker squares must not create extra observations; Task 1 tests rejection and deduplication.
- A missing display or a disabled renderer must not prevent other markers updating or leave stale labels visible; Task 4 tests independent lifecycle handling.

## File responsibilities and verification entry points

Runtime files live in Assets/Codes/Tracking. Use the SpellBattle.Tracking namespace. Pure detector and solver classes do not access scene objects, camera APIs or networking.

- ArucoTrackingTypes.cs: GrayImage (byte array, width, height, row stride), ArucoObservation (ID, four ordered Vector2 corners, score), CameraIntrinsics (fx, fy, cx, cy, resolution), and configuration value types.
- ArucoMarkerDictionary.cs: configurable ID/pattern pairs, rotation matching and standard four-marker defaults. Each ushort stores row-major bits, bit 15 at top left, one means white.
- ArucoMarkerDetector.cs: image-to-observation processing with reusable workspace.
- ArucoPoseEstimator.cs: observation/intrinsics-to-camera-pose mathematics, with camera convention x right, y down, z forward.
- ArucoCameraGeometry.cs: native-image/calibration/frame-display geometry and explicit conversion to Unity camera coordinates.
- ArucoPlayerDisplayPresenter.cs: per-ID target state, smoothing, display width/orientation and visibility.
- ArucoPlayerDisplayTracker.cs: MonoBehaviour owning camera acquisition, subscriptions, configuration and presenter calls.
- Assets/Tests/Editor/ArucoTrackingFixtures.cs: independent known patterns, rasterization and projection helpers.
- Assets/Tests/Editor/ArucoTrackingChecks.cs: static menu-based checks consistent with existing project checks. Expose RunDetector(), RunPose(), RunCameraGeometry(), RunDisplays() and RunAll(); each throws on a failed assertion and logs its named PASSED message only after all its assertions pass.
- Assets/Editor/ArucoTrackingSetup.cs: non-destructive active-scene setup menu, reference preview generation and validation; never auto-run on editor load.
- docs/aruco-tracking.md and docs/aruco-markers/: physical setup, reference previews and device validation instructions.

Run each check through Unity MCP execute_menu_item after reading the registered menu items, using Tools/Tests/ArUco Tracking/<Detector|Pose|Camera Geometry|Displays|All>. Check console errors after compilation and every run. Never treat a missing menu, compilation error or absent PASSED message as a pass. For a failing test before its runtime type exists, use reflection in the test harness so the expected failure is a missing-type assertion rather than leaving Unity uncompilable.

### Task 1: Decode the four markers from images

**Interfaces produced:** ArucoMarkerDictionary.CreateDefault(); ArucoMarkerDictionary.TryMatch(ushort observed, out int id, out int clockwiseTurns); ArucoMarkerDetector.Detect(GrayImage image, ArucoMarkerDictionary dictionary, List<ArucoObservation> results), which clears and fills the caller's reusable result list.

- [x] Add RunDetector failing checks. For independent known fixtures, assert exactly one result for every ID and each of four rotations, with the correct ID and canonical corner order. For a warped four-marker image assert IDs {0,1,2,3} exactly once each. Repeat with padded row stride and assert identical results. Blank, seeded noise, invalid border, unsupported ID, one-cell corrupted payload and clipped/degenerate quads must produce zero results. A nested-border fixture must produce only one observation.
- [x] Run Tools/Tests/ArUco Tracking/Detector and record the expected missing-type or missing-behavior assertion before implementation.
- [x] Implement the types, dictionary and detector. Verify the four default patterns against authoritative OpenCV dictionary data, preserve required source attribution and keep the fixture patterns independent of the production generator. Use integral-image adaptive thresholding, traced outer boundaries, convex quad simplification and perspective cell sampling. Validate grid contrast and a black one-cell border, match exact payload under rotations, order corners to the decoded orientation, and deduplicate overlapping candidates for each ID. Reject invalid image dimensions, strides and insufficient buffer lengths predictably.
- [x] Run the detector checks to the DETECTOR CHECKS PASSED log with no console errors. Inspect generated raster fixtures for corner ordering and white margin. Commit only these task files and their Unity metadata.

### Task 2: Recover metric camera-relative marker poses

**Consumes:** ArucoObservation and CameraIntrinsics from Task 1.

**Interface produced:** bool ArucoPoseEstimator.TryEstimate(ArucoObservation observation, CameraIntrinsics intrinsics, float markerSizeMetres, out Pose imageCameraPose, out float reprojectionRmsPixels).

- [x] Add RunPose failing checks using independent pinhole projections: centred 0.100 m marker at 1 m, lateral/vertical translations, tilted markers and all four marker rotations. Assert translation error below 0.01 m and reprojection RMS below 1 pixel for noiseless fixtures. NaN inputs, nonpositive focal lengths/marker size, collinear corners and behind-camera solutions must fail. Include a deliberately inconsistent quadrilateral to exercise a 3-pixel reprojection rejection limit.
- [x] Run the Pose menu and record failure before solver implementation.
- [x] Implement double-precision homography solving, intrinsic normalization, positive-depth scale recovery and orthonormal rotation recovery; use bounded reprojection refinement if required by the perspective fixtures. Define the marker's canonical local corners explicitly and consistently with detector corner order. Reject unstable matrices, nonfinite output and reprojection RMS greater than 3 pixels. Keep the solver independent of Unity scene state.
- [x] Run Pose and Detector checks and record POSE CHECKS PASSED plus the detector pass. Commit only task changes.

### Task 3: Acquire AR camera frames with correct image geometry

**Consumes:** detector and solver interfaces from Tasks 1-2.

**Interfaces produced:** ArucoCameraGeometry.ScaleIntrinsics(CameraIntrinsics original, Vector2Int processingResolution); bool ArucoCameraGeometry.TryImagePoseToWorld(Pose imageCameraPose, Matrix4x4 imageCameraToUnityCamera, Pose arCameraWorldPose, out Pose worldPose); ArucoPlayerDisplayTracker MonoBehaviour with serialized PlayerSystem, ARCameraManager, Camera, dictionary, markerSizeMetres=0.100f and detectionRate=10f.

- [x] Add RunCameraGeometry failing checks: processing downsample preserves projected rays, row/pixel stride is respected, x/y sign and positive depth match Unity camera rays, and a translated/rotated AR camera yields the expected world point. Add separate portrait/landscape and provider matrix-layout fixtures for ARCore and ARKit using verified package shader conventions. Singular/missing geometry must reject a frame instead of guessing orientation. Duplicate timestamps must not count as new observations.
- [x] Run Camera Geometry and record the expected missing-behavior failure.
- [x] Implement the geometry helpers and frame adapter using the installed ARCameraManager.frameReceived, TryAcquireLatestCpuImage and TryGetIntrinsics APIs. Inspect the ARCore/ARKit background shader display-transform conventions and ARCameraFrameEventArgs projection/display matrices before deciding the raw-image-camera to Unity-camera rotation. Encode that decision in the fixtures, including crop and mirroring. Do not use Screen.width/height as a camera-orientation proxy.
- [x] Acquire a CPU image only when the interval is due and the session is tracking. Convert to a reusable grayscale buffer bounded to 640 pixels on its longer side using a supported conversion or the correctly-strided luminance plane; release the image in finally. Scale calibration to actual processing resolution, reject incompatible image/calibration geometry, and prevent overlapping work. Dispose subscriptions and buffers on disable and clear frame history on reset. Reuse result/scratch storage. Expose a read-only LastDetectionMilliseconds diagnostic for device measurements.
- [x] Run Camera Geometry, Pose and Detector checks and record CAMERA GEOMETRY CHECKS PASSED with no compilation errors. Validate that an Editor session without native camera frames remains idle without errors. Commit only task changes.

### Task 4: Move and manage the four displays

**Consumes:** valid world poses from Task 3 and PlayerSystem.playerDisplays.

**Interfaces produced:** ArucoPlayerDisplayPresenter(GameObject[] displays, Camera camera, float offsetMetres, float widthMetres, float timeoutSeconds, float smoothingRate); Observe(int markerId, Pose worldPose, float now); Tick(float now, float deltaTime); Reset(). Tracker owns and calls the presenter; keep PlayerSystem unchanged unless a necessary reference access issue is discovered.

- [x] Add RunDisplays failing checks with four temporary world-space Canvases and a camera: before observation all are hidden; Observe(0, identity pose, 0) targets display 0 at (0,0.10,0); IDs 1-3 target their matching indices. Width becomes 0.20 m. First observation and reacquisition snap; subsequent observations smooth with alpha=1-exp(-12*deltaTime). Verify equivalent elapsed time at different render rates yields equivalent smoothing for a fixed target.
- [x] Assert that visibility is retained at age 0.34 s and lost at 0.36 s independently per ID. Reset immediately hides every display and discards pending targets. A missing display, invalid ID/pose, unavailable frame or disabled tracker must not affect another valid display. Existing name/health child content remains intact. Tests restore PlayerSystem.Instance and destroy temporary objects in finally.
- [x] Run Displays and record failure before implementing the presenter.
- [x] Implement the presenter with per-ID target/time state; use Canvas.enabled to control visibility without disabling tracking. Derive world scale from RectTransform width, account for parent scale or reject unsupported nonuniform parents clearly, apply world-up offset and camera-facing rotation. Tracker forwards observations, ticks smoothing each frame, and calls Reset on tracking loss, session reset, disable and application pause. Drop observations from an obsolete session generation.
- [x] Run Displays and all earlier checks; require DISPLAYS CHECKS PASSED. Run existing ArucoNumberSelectionChecks.Run and ArucoNetworkChecks.Run and inspect their pass logs. Commit only task changes.

### Task 5: Wire the current scene and deliver setup/validation

**Files:** add Assets/Editor/ArucoTrackingSetup.cs, docs/aruco-tracking.md and docs/aruco-markers/marker-0.png through marker-3.png; modify current Assets/Scenes/SampleScene.unity through Unity only. Add generated Unity metadata for runtime/editor files.

- [x] Before scene mutation, check MCP editor readiness and inspect current PlayerSystem/camera/display references. Read relevant menu items and tool schemas. Preserve the current live scene, including assignments not yet on disk; do not reload it. Add a non-destructive Tools/ArUco/Configure Player Displays command that reuses a matching tracker or adds one to system, links the existing camera/system references, applies approved defaults, records Undo, marks the scene dirty and saves through Unity. Never replace populated display assignments or create duplicate trackers.
- [x] Add setup verification asserting one enabled configured tracker, four existing assigned displays in index order, rear AR camera, world-space canvases and approved values. Invoke setup twice and assert tracker count remains one and display references are unchanged.
- [x] Generate clearly labeled standard marker reference PNGs with white margin. The outer black square is the 100 mm measurement; screen display dimensions are not a print-size guarantee. Verify previews visually and against independent dictionary fixtures.
- [x] Document exact mapping, print measurement, tracking-loss behavior, configurable expected patterns, scan conditions, camera permissions and Android/iPhone build prerequisites. Include measured-distance/rotation, all-four-markers, occlusion, phone orientation and pause/resume device checks. Explain that tracking is observation-local and does not replicate player positions between phones.
- [x] Run Tools/Tests/ArUco Tracking/All, existing identity/network checks and setup validation on the saved scene. Check compilation and console, and inspect the scene component references through MCP. Mark physical Android/iPhone checks pending unless actual device evidence is available. Commit only feature changes, preserving all unrelated user changes.
- [x] Review the complete feature diff and report implementation, automated verification, and remaining physical-device validation without claiming synthetic images prove phone tracking works.

## Plan review and execution handoff

The user must review this plan and select native execution (recommended: the same agent implements the dependent geometry and scene tasks in this chat) or subagent-driven execution before implementation. Native implementation selected by the user and executed. Editor/synthetic verification passed; physical phone validation remains pending. See docs/aruco-verification-2026-10-17.md.

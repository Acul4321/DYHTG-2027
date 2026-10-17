# Custom free ArUco player display tracking

Status: proposed written design, awaiting user review. No tracking implementation exists yet.

## Agreed outcome

Use the phone's rear AR camera to locate four printed 4x4 ArUco markers and move the existing PlayerSystem.playerDisplays to their physical positions. Target Android and iPhone with the project's existing AR Foundation, ARCore and ARKit packages. The user selected the custom free route; this design interprets that as managed C# without OpenCV or a paid detector plugin.

| Marker ID | Display array index | Lobby player number |
| --- | --- | --- |
| 0 | 0 | 1 |
| 1 | 1 | 2 |
| 2 | 2 | 3 |
| 3 | 3 | 4 |

Physical marker side length is 0.100 metres, measured across the outer black square, excluding the white paper margin. Default to standard DICT_4X4_50 patterns for IDs 0-3; the user specified 4x4 but not dictionary capacity or a custom dictionary. Supply reference previews so printed patterns can be checked. Expose the four expected bit patterns in configuration so mismatching prints can be accommodated without changing the detector.

## Existing project

Unity 6000.6.6f1 and AR Foundation 6.6.2 are installed. MCP inspection found the rear ARCameraManager on XR Origin (AR Rig)/Camera Offset/Main Camera, and four populated display references on the PlayerSystem component on system. The display prefab uses a world-space Canvas. Current player IDs are integers 1-4. The workspace contains existing uncommitted gameplay and scene changes which must be preserved.

An older shared-player-localization proposal exists under docs/superpowers/plans. This feature uses directly observed moving markers and does not implement that proposal's cloud anchors or network pose replication.

## Approach and alternatives

Use a small managed C# detector specialized to these four known markers. It avoids native plugin builds and licenses and can run through IL2CPP on both platforms. Its detection quality and CPU cost must be measured; it is not a replacement for the full OpenCV detector.

Free native OpenCV is an alternative with an established detector but requires a C-compatible Unity bridge and separate native platform builds. Reference-image tracking is another alternative but does not decode ArUco IDs; the selected implementation will decode the marker grid itself.

## Components and data flow

1. ArucoMarkerDetector: pure image processing over a reusable grayscale buffer. Adaptive thresholding, connected boundary tracing, convex quadrilateral fitting, perspective sampling of the 6x6 grid (one-cell black border and 4x4 payload), and matching against the four configured patterns under all four rotations. Reject bad borders, insufficient contrast, clipped/degenerate quads, and ambiguous matches. Initially require an exact payload match; do not guess an ID. Deduplicate nested boundaries and choose the best observation per ID.
2. ArucoPoseEstimator: solve a planar homography from the ordered marker corners and calibrated camera intrinsics, recover a metric camera-relative rigid pose using the 0.100 m side length, orthonormalize rotation and reject behind-camera, nonfinite or excessive-reprojection-error solutions. Include tests for corner order and all four marker rotations.
3. ArucoPlayerDisplayTracker: a MonoBehaviour on system referencing PlayerSystem, ARCameraManager and the AR camera. Acquire XRCpuImage through the existing AR camera, not a second camera session. Respect row/pixel stride, intrinsics resolution and image dimensions. Process the native image orientation and convert its camera-coordinate pose explicitly to Unity camera coordinates before applying the AR camera world transform. Do not infer orientation from Screen.width or Screen.height.
4. PlayerSystem: expose or retain the display-array mapping; preserve existing lobby, gesture and spell behavior. Tracking observations are local and do not alter lobby revisions or transmit poses to the server.

Image conversion, temporary CPU images and subscriptions must be disposed reliably on disable, exceptions and session changes. Start with a downsampled image bounded to 640 pixels on its longer side at 10 detections per second; scale the intrinsics consistently with the processing resolution. Reuse allocations and prevent overlapping detection jobs. Render smoothing runs every frame independently of detection cadence.

## Visible behavior and recovery

Each display follows the estimated marker centre, with a configurable world-up label offset (default 0.10 m). Keep labels facing the AR camera so names remain readable; tracking the marker's orientation does not require rotating text with the paper. Make display width configurable in metres (default 0.20 m) and derive scale from its RectTransform rather than assuming authored UI units are metres.

Hide displays until first detection. Smooth subsequent positions using elapsed-time-based interpolation; snap on reacquisition. Hide a display after 0.35 seconds without a valid observation. Immediately hide all displays on AR session tracking loss, component disable or session reset, and clear smoothing history. Resume from fresh observations. Missing references or unavailable camera frames must not throw or leave a previously valid display visible indefinitely.

Display tracking does not depend on receiving a lobby snapshot, so it can be checked without a server. Preserve existing names and health UI behavior. Never move the AR camera or XR Origin to make a marker align.

## Files and scene scope

Add runtime scripts under Assets/Codes/Tracking, deterministic detector/pose checks under Assets/Tests/Editor, marker reference previews and setup instructions, and the tracker component with references in the active SampleScene. Limit PlayerSystem edits to necessary tracking integration. Save the current live scene through Unity to preserve its existing unsaved assignments. Do not replace the scene from an older disk copy or broadly rewrite unrelated assets.

## Verification and acceptance

- Synthetic marker images for every ID and rotation, perspective warps, multiple markers, padded row stride, blank/noisy images, invalid border, wrong IDs and degenerate candidates.
- Synthetic projected poses at known distances and rotations verify metric translation, coordinate signs, corner ordering and reprojection rejection. Include nonidentity AR camera transforms.
- Unity checks verify index mapping, first-observation placement, smoothing, independent per-ID timeout, reacquisition, session loss and missing-reference handling. Run existing ArUco identity/network checks to guard gameplay integration.
- Compile in the connected Unity Editor, inspect errors, and verify four correctly wired references. Synthetic tests establish algorithm behavior; they do not establish real camera tracking quality.
- On physical Android and iPhone, scan the actual prints, check ID mapping and scale at measured distances, move and rotate markers, rotate the phone, occlude markers and background/resume the app. Record detection time and visible stability before claiming either platform works. iPhone deployment requires a Mac/Xcode build and signing environment; this Windows workspace cannot alone verify it.

Expected limitations: motion blur, small or oblique markers, lighting, occlusion and camera calibration affect accuracy. Processing callbacks may use a camera pose slightly newer than the captured image; fast camera movement needs measurement. Do not promise persistent location after the marker leaves view or a shared coordinate frame across phones.

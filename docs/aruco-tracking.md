# Printed marker player displays

The custom managed C# tracker uses the existing phone AR camera. It does not require OpenCV, a paid package, an external camera feed, or a server connection for marker placement.

## Markers and mapping

| Standard 4x4 marker ID | PlayerSystem display index | Lobby player number |
| --- | --- | --- |
| 0 | 0 | 1 |
| 1 | 1 | 2 |
| 2 | 2 | 3 |
| 3 | 3 | 4 |

The default patterns are the first four standard DICT_4X4_50 markers. Compare your prints with marker-0.png through marker-3.png in [aruco-markers](aruco-markers/). Each black outer square must measure **100 mm across**, excluding the white margin. PNGs include an 80-pixel margin on every side around a 480-pixel black square; print the entire 640-pixel image at 133.33 mm width to obtain a 100 mm square. Disable printer fit-to-page scaling and verify with a ruler. Screen image size is not a physical print-size guarantee.

If your prints use a custom dictionary, edit the four integer patterns on the tracker. Bits run from top-left to bottom-right, bit 15 first; 1 means white. Only four unambiguous, rotationally distinct 4x4 patterns are supported. Matching is exact, without bit-error correction. Never map a marker ID directly to the lobby identity without the +1 mapping above.

## Scene setup

SampleScene has four existing world-space PlayerDisplay canvases assigned to PlayerSystem on `system`. Run **Tools > ArUco > Configure Player Displays** to add or reconnect the tracker and save the current scene without replacing those assignments. Running this twice does not create another tracker. **Tools > ArUco > Verify Setup** checks wiring and approved defaults.

On `system`, ArucoPlayerDisplayTracker exposes the camera and PlayerSystem references, marker side length, dictionary, detection rate, image size, display width, offset, smoothing and loss timeout. Defaults: 0.100 m markers, 10 detections/second, image longer side at most 640 pixels, 0.20 m display width, 0.10 m world-up offset, smoothing rate 12 and 0.35 s loss timeout. Keep the canvas hierarchy uniformly scaled. The tracker hides a label if its parent has unsupported nonuniform/negative scale.

Displays start hidden, snap to a newly found marker, then smooth movement while facing the camera. Each display hides independently after its marker has not been seen for 0.35 seconds. AR tracking loss, application pause, session reset and tracker disable hide all displays immediately. AR camera and XR Origin transforms remain owned by AR Foundation. Labels retain their existing names/health content.

The tracker reads the rear AR camera's luminance plane with its native row/pixel strides. It uses camera intrinsics, frame projection and provider display matrices rather than screen dimensions to account for camera orientation. Missing or inconsistent calibration skips the frame. The inspector's Status, LastDetectedCount and LastDetectionMilliseconds properties are available to MCP/debug inspectors for diagnosis.

## Verification

Run **Tools > Tests > ArUco Tracking > All** for synthetic detector, pose, image geometry, stride, repeated timestamps and display lifecycle checks. **Marker References** validates the generated reference PNG grids. Run **Scene Setup** to verify setup idempotence, and **Existing Network** for the existing identity/network checks. The old **Check Aruco Number Selection** check had a pre-existing null LocalPlayer exception in CastingAreaController's spell path before tracking was implemented; this feature does not change that path. See the [verification record](aruco-verification-2026-10-17.md) for results and pending device checks.

Synthetic tests do not establish real phone camera performance. Physical Android and iPhone checks remain required:

1. Build for a supported ARCore Android or ARKit iPhone with the corresponding XR provider enabled and camera permission granted. Existing XR packages are retained. iPhone deployment requires a Mac/Xcode and signing setup.
2. With good lighting and flat, matte prints, show each marker separately, then all four. Check label IDs against the table and measure apparent position at 0.5 m and 1 m.
3. Move and rotate each print; rotate the phone through portrait and landscape. Check that movement directions, label placement and physical scale remain correct. Measure detection time using LastDetectionMilliseconds rather than assuming 10 Hz processing finishes within budget.
4. Cover one marker: only its label should disappear within 0.35 s. Reveal it in a new position: it should snap to that position. Cover the camera, pause/resume the app and reset the AR session: no stale labels should remain.
5. Repeat on Android and iPhone. Record device/OS/build versions, tracking latency and measured errors. If a provider's CPU/GPU image geometry differs, inspect the calibration diagnostic and correct it before claiming that platform works.

Blur, glare, poor contrast, steep angles, small image size and partial occlusion reduce detection. This specialized detector is not the full OpenCV detector. Labels are positioned from current visible markers; this does not persist a marker after it leaves view, track a person's body, or share positions across phones.

## Pattern source

Only the four 16-bit marker pattern values are derived from [OpenCV 4.12.0 predefined_dictionaries.hpp](https://github.com/opencv/opencv/blob/4.12.0/modules/objdetect/src/aruco/predefined_dictionaries.hpp), under Apache-2.0. The detector/pose implementation is custom C#. No OpenCV code or binaries are installed. See [third-party notice](third-party-aruco-patterns.md).

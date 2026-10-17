# ArUco tracking verification — 2026-10-17

Implemented in the current DYHTG-2027 checkout and wired into its live SampleScene. Uses the pre-existing local PlayerSystem.playerDisplays array; existing uncommitted gameplay changes are preserved. Unity 6000.6.6f1, AR Foundation 6.6.2.

## Results

| Check | Result |
| --- | --- |
| Unity C# compilation | Passed, no current console errors |
| Detector | Passed: all four IDs under four rotations/tilts; simultaneous markers; padded stride; rejected blank/noise, clipping, damaged borders, wrong/corrupt/ambiguous patterns |
| Metric pose | Passed: 0.4/1/2 m synthetic cases, tilted/rotated markers and invalid geometry |
| Camera geometry | Passed: scale, nonidentity camera transform, ARCore/ARKit row-matrix layouts, portrait/landscape rotations, native row/pixel strides, duplicate/out-of-order timestamps and session timebase reset |
| Displays | Passed: index mapping, metre width, offset, independent 0.35 s timeout, smoothing, snap on reacquisition, invalid observations, missing references and reset. Final review's cleared/replaced-slot regression failed before the fix and passed afterward, including isolation of the other marker. |
| End to end | Passed: four rasterized markers through detection, calibrated pose and world-space conversion |
| Reference PNGs | Passed: all four PNG grids match independent standard pattern fixtures; first preview visually inspected |
| Live scene setup | Passed: one tracker, four distinct existing world-space canvases, rear AR camera, approved defaults; setup twice preserved assignments |
| Existing network checks | Passed: integer identity, joins/deltas/spells, duplicate recovery and stale replies |
| Editor Play smoke test | Passed: tracker waited for calibration in XR Simulation, inspected initial Canvas hidden, no console errors; exited Play mode |
| Existing number-selection checks | Pre-existing failure: CastingAreaController.cs spell path dereferences null LocalPlayer before lobby snapshot; reproduced before tracking implementation |
| Physical Android/iPhone | Pending: real images, CPU/GPU alignment, movement/rotation, scale, loss/reacquisition, pause/resume, frame cost and visual stability |

Synthetic projections and Editor simulation do not demonstrate real phone tracking. No Android or iPhone build/deployment is claimed. See [setup and device procedure](aruco-tracking.md).

## Implementation decisions

1. Work in the existing dev checkout because the user selected "implement here" and Unity MCP targets it. Cost: feature changes coexist with existing edits; only feature-owned source/docs are staged.
2. Maintain the task ledger through PowerShell because the installed Git Bash helper failed with access denied. Cost: task bookkeeping is manual.
3. Group the dependent runtime/check files in one source checkpoint because the shared typed harness references all components. Cost: less granular task commits; RED/GREEN evidence was retained during execution.
4. Add focused reusable homography, luminance and frame-cadence helpers to isolate numerical solving, strides and repeated timestamps. Cost: three extra source files.
5. Save the current live scene through Unity and leave it unstaged: that save also preserves substantial pre-existing unsaved prefab/UI edits. Cost: the scene wiring remains a local uncommitted change, alongside the user's other scene edits.

The feature source checkpoint depends on the existing local PlayerSystem field, which was already uncommitted. Review/commit the project's existing gameplay changes together when preparing a standalone revision or build.

## Final review

A fresh read-only review found no Critical issues and one Important issue: clearing or replacing an array slot could retain an enabled cached Canvas. A regression reproduced the failure; canvas rebinding now hides old renderers and resets their smoothing state.

Final run after the fix passed all six tracking sections, marker reference grids, saved scene setup and existing network checks. Unity reported zero current console errors. The existing number-selection failure remains a separately documented baseline issue.

Deferred minor coverage improvements: nonsquare/cropped/off-centre camera-calibration combinations, and explicit partial-occlusion/nested-border/clutter fixtures. These do not replace the pending physical-device checks.

Review decisions: real CPU/GPU alignment, accuracy, timing and performance remain device-validation work, so no phone-support verification is claimed. Synchronous session-generation handling was retained with the existing presenter reset checks and device lifecycle procedure; a native lifecycle edge could still require a follow-up fix.

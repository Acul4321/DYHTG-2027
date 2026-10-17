using System;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using Debug = UnityEngine.Debug;

namespace SpellBattle.Tracking
{
    [DisallowMultipleComponent]
    public sealed class ArucoPlayerDisplayTracker : MonoBehaviour
    {
        public PlayerSystem playerSystem;
        public ARCameraManager cameraManager;
        public Camera arCamera;
        public ArucoMarkerDictionary dictionary = ArucoMarkerDictionary.CreateDefault();
        [Min(0.001f)] public float markerSizeMetres = 0.100f;
        [Range(1,30)] public float detectionRate = 10;
        [Range(160,960)] public int maximumImageDimension = 640;
        public float displayOffsetMetres = 0.10f;
        [Min(0.01f)] public float displayWidthMetres = 0.20f;
        [Min(0.01f)] public float lostMarkerTimeout = 0.35f;
        [Min(0.01f)] public float smoothingRate = 12;

        public double LastDetectionMilliseconds { get; private set; }
        public int LastDetectedCount { get; private set; }
        public string Status { get; private set; } = "Waiting for AR session";

        ArucoMarkerDetector detector;
        ArucoPlayerDisplayPresenter presenter;
        readonly List<ArucoObservation> observations = new List<ArucoObservation>(4);
        readonly ArucoFrameGate frameGate = new ArucoFrameGate();
        byte[] luminance;
        bool processing, warned, paused;
        int generation;
        ARCameraManager subscribedManager;

        void OnEnable()
        {
            if (!Application.isPlaying) return;
            if (!playerSystem) playerSystem = GetComponent<PlayerSystem>();
            if (!arCamera) arCamera = Camera.main;
            if (!cameraManager && arCamera) cameraManager = arCamera.GetComponent<ARCameraManager>();
            detector = new ArucoMarkerDetector();
            presenter = new ArucoPlayerDisplayPresenter(playerSystem ? playerSystem.playerDisplays : null,
                arCamera, displayOffsetMetres, displayWidthMetres, lostMarkerTimeout, smoothingRate);
            frameGate.Reset(); warned = false; paused = false;
            if (!playerSystem || !arCamera || !cameraManager)
            {
                Status = "Missing PlayerSystem or AR camera reference";
                Debug.LogWarning("[ArUco] " + Status, this);
                return;
            }
            subscribedManager = cameraManager;
            subscribedManager.frameReceived += OnCameraFrame;
            ARSession.stateChanged += OnSessionStateChanged;
        }

        void OnDisable()
        {
            if (subscribedManager) subscribedManager.frameReceived -= OnCameraFrame;
            subscribedManager = null;
            ARSession.stateChanged -= OnSessionStateChanged;
            ResetTracking("Tracking disabled");
            presenter = null; detector = null; luminance = null;
        }

        void Update()
        {
            if (paused || ARSession.state != ARSessionState.SessionTracking)
            {
                if (LastDetectedCount != 0) ResetTracking("Waiting for AR tracking");
            }
            presenter?.Tick(Time.unscaledTime, Time.unscaledDeltaTime);
        }

        void OnSessionStateChanged(ARSessionStateChangedEventArgs args)
        {
            if (args.state != ARSessionState.SessionTracking) ResetTracking("Waiting for AR tracking");
        }

        void OnApplicationPause(bool pause)
        {
            paused = pause;
            ResetTracking(pause ? "Application paused" : "Waiting for camera frame");
        }

        void ResetTracking(string status)
        {
            generation++; frameGate.Reset(); presenter?.Reset();
            observations.Clear(); LastDetectedCount = 0; Status = status;
        }

        void OnCameraFrame(ARCameraFrameEventArgs args)
        {
            float now = Time.unscaledTime;
            if (!isActiveAndEnabled || paused || processing || detector == null || !arCamera || !cameraManager
                || ARSession.state != ARSessionState.SessionTracking || !frameGate.IsDue(now)) return;
            if (!args.displayMatrix.HasValue || !args.projectionMatrix.HasValue) { Status = "Waiting for camera calibration"; return; }
            if (!cameraManager.TryGetIntrinsics(out XRCameraIntrinsics nativeIntrinsics)
                || !cameraManager.TryAcquireLatestCpuImage(out XRCpuImage image)) return;
            processing = true;
            int frameGeneration = generation;
            long started = Stopwatch.GetTimestamp();
            try
            {
                if (!frameGate.TryAccept(image.timestamp, now, 1 / Mathf.Clamp(detectionRate,1,30))) return;
                if (image.format != XRCpuImage.Format.AndroidYuv420_888
                    && image.format != XRCpuImage.Format.IosYpCbCr420_8BiPlanarFullRange
                    && image.format != XRCpuImage.Format.OneComponent8)
                { Status = "Unsupported AR camera image format: " + image.format; return; }
                var nativeK = new CameraIntrinsics(nativeIntrinsics.focalLength.x, nativeIntrinsics.focalLength.y,
                    nativeIntrinsics.principalPoint.x, nativeIntrinsics.principalPoint.y, nativeIntrinsics.resolution);
                if (!nativeK.IsValid || image.width <= 0 || image.height <= 0 || image.planeCount < 1) return;
                // Camera intrinsics may use a different resolution, but must describe the same aspect ratio.
                if (Mathf.Abs((float)nativeK.Resolution.x/nativeK.Resolution.y - (float)image.width/image.height) > 0.01f)
                { Status = "Camera image and intrinsics aspect ratios differ"; return; }
                bool arkit = Application.platform == RuntimePlatform.IPhonePlayer;
                if (!ArucoCameraGeometry.TryGetImageCameraBasis(nativeK, args.displayMatrix.Value,
                    args.projectionMatrix.Value, arkit, out Matrix4x4 basis))
                { Status = "Camera orientation/calibration unavailable"; return; }
                float scale = Mathf.Min(1,(float)Mathf.Clamp(maximumImageDimension,160,960)/Mathf.Max(image.width,image.height));
                int width = Mathf.Max(1,Mathf.FloorToInt(image.width*scale)), height = Mathf.Max(1,Mathf.FloorToInt(image.height*scale));
                int count = width*height;
                if (luminance == null || luminance.Length < count) luminance = new byte[count];
                XRCpuImage.Plane plane = image.GetPlane(0);
                if (!ArucoLuminance.CopyDownsampled(plane.data,image.width,image.height,plane.rowStride,
                    plane.pixelStride,width,height,luminance)) { Status = "Invalid camera luminance plane"; return; }
                CameraIntrinsics k = ArucoCameraGeometry.ScaleIntrinsics(nativeK,new Vector2Int(width,height));
                Pose cameraPose = new Pose(arCamera.transform.position,arCamera.transform.rotation);
                detector.Detect(new GrayImage(luminance,width,height,width),dictionary,observations);
                LastDetectedCount = 0;
                foreach (ArucoObservation observation in observations)
                {
                    if (!ArucoPoseEstimator.TryEstimate(observation,k,markerSizeMetres,out Pose imagePose,out _)
                        || !ArucoCameraGeometry.TryImagePoseToWorld(imagePose,basis,cameraPose,out Pose worldPose)) continue;
                    if (frameGeneration != generation || ARSession.state != ARSessionState.SessionTracking) return;
                    presenter?.Observe(observation.Id,worldPose,now);
                    LastDetectedCount++;
                }
                Status = LastDetectedCount == 0 ? "Scanning for markers 0-3" : "Tracking " + LastDetectedCount + " marker(s)";
            }
            catch (Exception exception)
            {
                ResetTracking("Camera frame failed; waiting to retry");
                if (!warned) { warned = true; Debug.LogWarning("[ArUco] " + exception.Message, this); }
            }
            finally
            {
                image.Dispose(); processing = false;
                LastDetectionMilliseconds = (Stopwatch.GetTimestamp()-started)*1000.0/Stopwatch.Frequency;
            }
        }
    }
}

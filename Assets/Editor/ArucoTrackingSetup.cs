using System;
using System.IO;
using System.Linq;
using SpellBattle.Tracking;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;

public static class ArucoTrackingSetup
{
    static PlayerSystem FindSystem()
    {
        var systems = UnityEngine.Object.FindObjectsByType<PlayerSystem>(FindObjectsInactive.Include,FindObjectsSortMode.None)
            .Where(s => s.gameObject.scene == SceneManager.GetActiveScene()).ToArray();
        if (systems.Length != 1) throw new InvalidOperationException("ArUco setup needs exactly one PlayerSystem in the active scene.");
        return systems[0];
    }

    [MenuItem("Tools/ArUco/Configure Player Displays")]
    public static void Configure()
    {
        if (EditorApplication.isPlayingOrWillChangePlaymode) throw new InvalidOperationException("Configure ArUco outside Play mode.");
        PlayerSystem system = FindSystem();
        var cameras = UnityEngine.Object.FindObjectsByType<ARCameraManager>(FindObjectsInactive.Include,FindObjectsSortMode.None)
            .Where(c => c.gameObject.scene == system.gameObject.scene).ToArray();
        if (cameras.Length != 1 || !cameras[0].GetComponent<Camera>())
            throw new InvalidOperationException("ArUco setup needs one ARCameraManager and Camera in the active scene.");
        ValidateDisplays(system);
        var trackers = UnityEngine.Object.FindObjectsByType<ArucoPlayerDisplayTracker>(FindObjectsInactive.Include,FindObjectsSortMode.None)
            .Where(t => t.gameObject.scene == system.gameObject.scene).ToArray();
        if (trackers.Length > 1 || (trackers.Length == 1 && trackers[0].gameObject != system.gameObject))
            throw new InvalidOperationException("Resolve existing duplicate/misplaced ArUco trackers before setup.");
        var tracker = system.GetComponent<ArucoPlayerDisplayTracker>();
        if (!tracker) tracker = Undo.AddComponent<ArucoPlayerDisplayTracker>(system.gameObject);
        Undo.RecordObject(tracker,"Configure ArUco displays");
        tracker.playerSystem = system;
        tracker.cameraManager = cameras[0];
        tracker.arCamera = cameras[0].GetComponent<Camera>();
        tracker.enabled = true;
        EditorUtility.SetDirty(tracker);
        EditorSceneManager.MarkSceneDirty(system.gameObject.scene);
        if (!EditorSceneManager.SaveScene(system.gameObject.scene)) throw new IOException("Could not save the current AR scene.");
        Debug.Log("ARUCO SETUP SAVED: existing display assignments preserved; tracker connected to AR camera.");
    }

    static void ValidateDisplays(PlayerSystem system)
    {
        if (system.playerDisplays == null || system.playerDisplays.Length < 4)
            throw new InvalidOperationException("Assign four PlayerSystem.playerDisplays in marker ID order (0,1,2,3).");
        for (int i=0;i<4;i++)
        {
            GameObject display=system.playerDisplays[i];
            if (!display || !display.TryGetComponent(out Canvas canvas) || canvas.renderMode!=RenderMode.WorldSpace)
                throw new InvalidOperationException("Display "+i+" needs an existing world-space Canvas.");
            if (system.playerDisplays.Take(i).Contains(display)) throw new InvalidOperationException("Each marker needs a distinct display.");
        }
    }

    [MenuItem("Tools/ArUco/Verify Setup")]
    public static void Verify()
    {
        PlayerSystem system=FindSystem();ValidateDisplays(system);
        var trackers=UnityEngine.Object.FindObjectsByType<ArucoPlayerDisplayTracker>(FindObjectsInactive.Include,FindObjectsSortMode.None)
            .Where(t=>t.gameObject.scene==system.gameObject.scene).ToArray();
        if(trackers.Length!=1)throw new InvalidOperationException("Expected one scene tracker.");
        var t=trackers[0];
        if(!t.enabled||t.playerSystem!=system||!t.cameraManager||!t.arCamera||t.cameraManager.gameObject!=t.arCamera.gameObject)
            throw new InvalidOperationException("Tracker references are incomplete.");
        if(t.cameraManager.requestedFacingDirection!=CameraFacingDirection.World)
            throw new InvalidOperationException("Rear AR camera required.");
        if(Mathf.Abs(t.markerSizeMetres-0.1f)>1e-5f||Mathf.Abs(t.detectionRate-10)>1e-5f
            ||t.maximumImageDimension!=640||Mathf.Abs(t.lostMarkerTimeout-0.35f)>1e-5f
            ||Mathf.Abs(t.displayOffsetMetres-0.1f)>1e-5f||Mathf.Abs(t.displayWidthMetres-0.2f)>1e-5f)
            throw new InvalidOperationException("Scene differs from approved tracking defaults; review settings.");
        Debug.Log("ARUCO SETUP CHECKS PASSED: one tracker, AR camera, four distinct displays, 100mm markers and approved defaults.");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/Scene Setup")]
    public static void CheckIdempotence()
    {
        var before=(GameObject[])FindSystem().playerDisplays.Clone();
        Configure();Configure();Verify();
        if(!before.SequenceEqual(FindSystem().playerDisplays))throw new InvalidOperationException("Setup changed display assignments.");
        Debug.Log("ARUCO SETUP IDEMPOTENCE CHECK PASSED");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/Existing Network")]
    public static void CheckExistingNetwork() => ArucoNetworkChecks.Run();

    [MenuItem("Tools/ArUco/Generate Marker References")]
    public static void GenerateReferences()
    {
        string directory=Path.Combine(Directory.GetParent(Application.dataPath).FullName,"docs","aruco-markers");
        Directory.CreateDirectory(directory);
        int[] patterns=ArucoMarkerDictionary.CreateDefault().patterns;
        const int margin=80,cell=80,size=640;
        for(int id=0;id<4;id++)
        {
            var texture=new Texture2D(size,size,TextureFormat.RGB24,false);
            try
            {
                var pixels=new Color32[size*size];
                for(int y=0;y<size;y++)
                for(int x=0;x<size;x++)
                {
                    int col=(x-margin)/cell,row=(y-margin)/cell;
                    bool outside=x<margin||y<margin||x>=size-margin||y>=size-margin;
                    bool border=row==0||row==5||col==0||col==5;
                    bool white=outside||(!border&&(patterns[id]&(1<<(15-(row-1)*4-(col-1))))!=0);
                    byte colour=(byte)(white?255:0);
                    // Texture2D pixels are bottom-up; dictionary/reference rows are top-down.
                    pixels[(size-1-y)*size+x]=new Color32(colour,colour,colour,255);
                }
                texture.SetPixels32(pixels);texture.Apply();
                File.WriteAllBytes(Path.Combine(directory,"marker-"+id+".png"),texture.EncodeToPNG());
            }
            finally { UnityEngine.Object.DestroyImmediate(texture); }
        }
        Debug.Log("ARUCO MARKER REFERENCES GENERATED: docs/aruco-markers/marker-0.png through marker-3.png; black square is 480/640 of image width.");
    }
}

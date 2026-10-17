using System;
using System.Collections.Generic;
using SpellBattle.Tracking;
using UnityEditor;
using UnityEngine;
using Unity.Collections;

public static class ArucoTrackingChecks
{
    static void Check(bool value,string message)
    { if(!value) throw new InvalidOperationException("ARUCO TRACKING: "+message); }

    [MenuItem("Tools/Tests/ArUco Tracking/Detector")]
    public static void RunDetector()
    {
        var detector=new ArucoMarkerDetector();
        var dictionary=ArucoMarkerDictionary.CreateDefault();
        var found=new List<ArucoObservation>();
        for(int id=0;id<4;id++)
        for(int turn=0;turn<4;turn++)
        {
            byte[] image=ArucoTrackingFixtures.White(320,240,337);
            Quaternion q=Quaternion.Euler(12,-18,turn*90);
            Vector3 t=new Vector3(0.015f,-0.01f,0.55f);
            ArucoTrackingFixtures.Paint(image,320,240,337,ArucoTrackingFixtures.Patterns[id],t,q,0.1f,650,650,160,120);
            detector.Detect(new GrayImage(image,320,240,337),dictionary,found);
            Check(found.Count==1&&found[0].Id==id,$"ID {id}, turn {turn}: expected one marker, got {found.Count}");
            Vector2[] expected=ArucoTrackingFixtures.Corners(t,q,0.1f,650,650,160,120);
            for(int c=0;c<4;c++) Check(Vector2.Distance(expected[c],found[0].Corner(c))<4,$"canonical corner {c}, ID {id}, turn {turn}");
        }
        byte[] multiple=ArucoTrackingFixtures.White(640,480,640);
        for(int id=0;id<4;id++)
            ArucoTrackingFixtures.Paint(multiple,640,480,640,ArucoTrackingFixtures.Patterns[id],
                new Vector3((id%2==0?-1:1)*0.13f,(id<2?-1:1)*0.1f,0.7f),Quaternion.Euler(8,12,id*90),0.1f,650,650,320,240);
        detector.Detect(new GrayImage(multiple,640,480,640),dictionary,found);
        Check(found.Count==4,"four simultaneous markers without nested duplicates");
        var ids=new HashSet<int>(); foreach(var item in found) ids.Add(item.Id);
        Check(ids.SetEquals(new[]{0,1,2,3}),"simultaneous IDs");
        foreach(string bits in new[]{"1011010100110011","0001001000110100"})
        {
            byte[] invalid=ArucoTrackingFixtures.White(320,240,320);
            ArucoTrackingFixtures.Paint(invalid,320,240,320,bits,new Vector3(0,0,0.6f),Quaternion.identity,0.1f,650,650,160,120);
            detector.Detect(new GrayImage(invalid,320,240,320),dictionary,found);
            Check(found.Count==0,"corrupt/unsupported payload");
        }
        byte[] broken=ArucoTrackingFixtures.White(320,240,320);
        ArucoTrackingFixtures.Paint(broken,320,240,320,ArucoTrackingFixtures.Patterns[0],new Vector3(0,0,0.6f),Quaternion.identity,0.1f,650,650,160,120,true);
        detector.Detect(new GrayImage(broken,320,240,320),dictionary,found);
        Check(found.Count==0,"invalid border");
        detector.Detect(new GrayImage(ArucoTrackingFixtures.White(320,240,320),320,240,320),dictionary,found);
        Check(found.Count==0,"blank image");
        byte[] noise=new byte[320*240];new System.Random(2741).NextBytes(noise);
        detector.Detect(new GrayImage(noise,320,240,320),dictionary,found);
        Check(found.Count==0,"seeded noise");
        byte[] clipped=ArucoTrackingFixtures.White(320,240,320);
        ArucoTrackingFixtures.Paint(clipped,320,240,320,ArucoTrackingFixtures.Patterns[0],new Vector3(-0.14f,0,0.5f),Quaternion.identity,0.1f,650,650,160,120);
        detector.Detect(new GrayImage(clipped,320,240,320),dictionary,found);
        Check(found.Count==0,"clipped marker");
        detector.Detect(new GrayImage(new byte[4],320,240,320),dictionary,found);
        Check(found.Count==0,"invalid buffer");
        Check(!dictionary.TryMatch(0xFFFF,out _,out _),"unsupported bits");
        var ambiguous=new ArucoMarkerDictionary{patterns=new[]{0xB532,0xB532,0x332D,0x9946}};
        Check(!ambiguous.TryMatch(0xB532,out _,out _),"ambiguous dictionary");
        Debug.Log("DETECTOR CHECKS PASSED: 16 perspective/rotation cases, multi-marker, stride and rejection fixtures.");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/Pose")]
    public static void RunPose()
    {
        var k=new CameraIntrinsics(700,710,320,240,new Vector2Int(640,480));
        foreach(float z in new[]{0.4f,1f,2f})
        for(int turn=0;turn<4;turn++)
        {
            Vector3 p=new Vector3(0.06f,-0.04f,z);Quaternion q=Quaternion.Euler(18,-24,turn*90);
            Vector2[] c=ArucoTrackingFixtures.Corners(p,q,0.1f,700,710,320,240);
            var o=new ArucoObservation(0,c[0],c[1],c[2],c[3]);
            Check(ArucoPoseEstimator.TryEstimate(o,k,0.1f,out Pose actual,out float rms),"valid pose must solve");
            Check(Vector3.Distance(actual.position,p)<0.01f,$"metric translation at {z}m: {actual.position}");
            Check(Quaternion.Angle(actual.rotation,q)<1,"marker orientation");
            Check(rms<1,"noiseless reprojection");
        }
        var line=new ArucoObservation(0,Vector2.zero,Vector2.right,Vector2.right*2,Vector2.right*3);
        Check(!ArucoPoseEstimator.TryEstimate(line,k,0.1f,out _,out _),"collinear quad");
        var nan=new ArucoObservation(0,new Vector2(float.NaN,0),Vector2.right,Vector2.one,Vector2.up);
        Check(!ArucoPoseEstimator.TryEstimate(nan,k,0.1f,out _,out _),"NaN corners");
        Check(!ArucoPoseEstimator.TryEstimate(line,k,-0.1f,out _,out _),"negative side length");
        Check(!ArucoPoseEstimator.TryEstimate(line,new CameraIntrinsics(0,700,0,0,new Vector2Int(640,480)),0.1f,out _,out _),"invalid intrinsics");
        var bad=new ArucoObservation(0,new Vector2(100,100),new Vector2(500,100),new Vector2(350,120),new Vector2(100,450));
        Check(!ArucoPoseEstimator.TryEstimate(bad,k,0.1f,out _,out _),"inconsistent square projection");
        Debug.Log("POSE CHECKS PASSED: metric depth, tilt/rotation and invalid geometry.");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/End To End")]
    public static void RunEndToEnd()
    {
        var detector=new ArucoMarkerDetector();var dictionary=ArucoMarkerDictionary.CreateDefault();
        var found=new List<ArucoObservation>();var k=new CameraIntrinsics(650,650,320,240,new Vector2Int(640,480));
        Pose camera=new Pose(new Vector3(1,0.5f,-2),Quaternion.Euler(0,35,0));
        Matrix4x4 flipY=Matrix4x4.Scale(new Vector3(1,-1,1));
        for(int id=0;id<4;id++)
        {
            Vector3 expected=new Vector3(0.03f,-0.02f,0.75f);
            byte[] image=ArucoTrackingFixtures.White(640,480,640);
            ArucoTrackingFixtures.Paint(image,640,480,640,ArucoTrackingFixtures.Patterns[id],expected,Quaternion.Euler(15,20,id*90),0.1f,650,650,320,240);
            detector.Detect(new GrayImage(image,640,480,640),dictionary,found);
            Check(found.Count==1&&found[0].Id==id,"end-to-end decode");
            Check(ArucoPoseEstimator.TryEstimate(found[0],k,0.1f,out Pose relative,out _),"detected-corner pose");
            Check(Vector3.Distance(relative.position,expected)<0.025f,"detector-to-metric-pose error");
            Check(ArucoCameraGeometry.TryImagePoseToWorld(relative,flipY,camera,out Pose world),"end-to-end world conversion");
            Check(Vector3.Distance(world.position,camera.position+camera.rotation*new Vector3(expected.x,-expected.y,expected.z))<0.025f,"world placement after rasterization");
        }
        Debug.Log("END TO END CHECKS PASSED: four rendered marker IDs to calibrated metric world poses.");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/Camera Geometry")]
    public static void RunCameraGeometry()
    {
        var k=new CameraIntrinsics(1000,1100,640,360,new Vector2Int(1280,720));
        var scaled=ArucoCameraGeometry.ScaleIntrinsics(k,new Vector2Int(640,360));
        Check(Mathf.Abs(scaled.Fx-500)<0.001f&&Mathf.Abs(scaled.Cy-180)<0.001f,"downsample intrinsics");
        Matrix4x4 flipY=Matrix4x4.Scale(new Vector3(1,-1,1));
        Pose image=new Pose(new Vector3(0.2f,0.3f,1),Quaternion.identity);
        Pose camera=new Pose(new Vector3(2,3,4),Quaternion.Euler(0,90,0));
        Check(ArucoCameraGeometry.TryImagePoseToWorld(image,flipY,camera,out Pose world),"valid camera geometry");
        Check(Vector3.Distance(world.position,camera.position+camera.rotation*new Vector3(0.2f,-0.3f,1))<1e-5f,"world axes and AR camera transform");
        Check(!ArucoCameraGeometry.TryImagePoseToWorld(image,Matrix4x4.zero,camera,out _),"singular geometry");
        var squareK=new CameraIntrinsics(400,400,320,320,new Vector2Int(640,640));
        Matrix4x4 projection=Matrix4x4.Perspective(2*Mathf.Atan(0.8f)*Mathf.Rad2Deg,1,0.01f,100);
        foreach(bool arkit in new[]{false,true})
        foreach(int angle in new[]{0,90,180,270})
        {
            float a=angle*Mathf.Deg2Rad,c=Mathf.Cos(a),s=Mathf.Sin(a);
            Matrix4x4 display=Matrix4x4.zero;
            display.m00=c;display.m10=s;display.m01=s;display.m11=-c;
            display.m20=(1-c-s)/2;display.m21=(1-s+c)/2;
            if(arkit) {display.m30=display.m20;display.m31=display.m21;display.m20=display.m21=0;}
            Check(ArucoCameraGeometry.TryGetImageCameraBasis(squareK,display,projection,arkit,out Matrix4x4 basis),"provider portrait/landscape basis "+angle);
            Vector3 expected=Quaternion.Euler(0,0,angle)*new Vector3(0.2f,-0.3f,1);
            Check(Vector3.Distance(basis.MultiplyVector(image.position),expected)<0.001f,"provider matrix layout and rotation "+angle);
        }
        Check(!ArucoCameraGeometry.TryGetImageCameraBasis(squareK,Matrix4x4.zero,projection,false,out _),"missing display transform");
        var gate=new ArucoFrameGate();
        Check(gate.TryAccept(1,0,0.1f),"first timestamp");
        Check(!gate.TryAccept(1,0.2f,0.1f),"duplicate timestamp");
        Check(!gate.TryAccept(0.9,0.4f,0.1f),"out-of-order timestamp");
        gate.Reset();Check(gate.TryAccept(0.1,0,0.1f),"reset accepts new session timebase");
        Check(!gate.TryAccept(0.2,0.01f,0.1f),"rate limit");
        using(var plane=new NativeArray<byte>(new byte[]{10,99,20,99,88,88,30,99,40,99,88,88},Allocator.Temp))
        {
            var copied=new byte[4];
            Check(ArucoLuminance.CopyDownsampled(plane,2,2,6,2,2,2,copied),"padded native plane copy");
            Check(copied[0]==10&&copied[1]==20&&copied[2]==30&&copied[3]==40,"row and pixel stride");
            Check(!ArucoLuminance.CopyDownsampled(plane,20,2,6,2,2,2,copied),"invalid native dimensions");
        }
        Debug.Log("CAMERA GEOMETRY CHECKS PASSED: intrinsics scale, camera basis and invalid geometry.");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/Displays")]
    public static void RunDisplays()
    {
        var cameraObject=new GameObject("Tracking check camera",typeof(Camera));
        var displays=new GameObject[4];
        try
        {
            for(int i=0;i<4;i++){
                displays[i]=new GameObject("Tracking check display "+i,typeof(RectTransform),typeof(Canvas));
                displays[i].GetComponent<RectTransform>().sizeDelta=new Vector2(200,40);
                displays[i].GetComponent<Canvas>().renderMode=RenderMode.WorldSpace;
            }
            var presenter=new ArucoPlayerDisplayPresenter(displays,cameraObject.GetComponent<Camera>(),0.1f,0.2f,0.35f,12);
            foreach(var display in displays) Check(!display.GetComponent<Canvas>().enabled,"initially hidden");
            for(int i=0;i<4;i++) presenter.Observe(i,new Pose(new Vector3(i,0,1),Quaternion.identity),0);
            presenter.Tick(0,0.016f);
            for(int i=0;i<4;i++){
                Check(displays[i].GetComponent<Canvas>().enabled,"detected display visible");
                Check(Vector3.Distance(displays[i].transform.position,new Vector3(i,0.1f,1))<1e-5f,"index and offset");
                Check(Mathf.Abs(displays[i].transform.lossyScale.x*200-0.2f)<1e-5f,"metre width");
            }
            presenter.Tick(0.34f,0.01f);Check(displays[0].GetComponent<Canvas>().enabled,"before timeout");
            presenter.Observe(1,new Pose(new Vector3(1,0,1),Quaternion.identity),0.34f);
            presenter.Tick(0.36f,0.02f);
            Check(!displays[0].GetComponent<Canvas>().enabled&&displays[1].GetComponent<Canvas>().enabled,"independent timeouts");
            presenter.Observe(0,new Pose(new Vector3(5,0,1),Quaternion.identity),0.37f);presenter.Tick(0.37f,0.01f);
            Check(Mathf.Abs(displays[0].transform.position.x-5)<1e-5f,"reacquisition snap");
            presenter.Observe(0,new Pose(new Vector3(6,0,1),Quaternion.identity),0.38f);presenter.Tick(0.38f,0.01f);
            Check(displays[0].transform.position.x>5&&displays[0].transform.position.x<6,"smooth subsequent positions");
            presenter.Observe(99,Pose.identity,0.38f);
            presenter.Observe(0,new Pose(new Vector3(float.NaN,0,0),Quaternion.identity),0.38f);
            presenter.Reset();foreach(var display in displays) Check(!display.GetComponent<Canvas>().enabled,"reset");
            var partial=new ArucoPlayerDisplayPresenter(new[]{displays[0],null},cameraObject.GetComponent<Camera>(),0.1f,0.2f,0.35f,12);
            partial.Observe(1,Pose.identity,0);partial.Observe(0,Pose.identity,0);partial.Tick(0,0.01f);
            Check(displays[0].GetComponent<Canvas>().enabled,"missing reference isolation");partial.Reset();
        }
        finally {foreach(var display in displays)if(display)UnityEngine.Object.DestroyImmediate(display);UnityEngine.Object.DestroyImmediate(cameraObject);}
        Debug.Log("DISPLAYS CHECKS PASSED: mapping, scale, timeout, smoothing, invalid observations and reset.");
    }

    [MenuItem("Tools/Tests/ArUco Tracking/All")]
    public static void RunAll(){RunDetector();RunPose();RunCameraGeometry();RunDisplays();RunEndToEnd();Debug.Log("ALL ARUCO TRACKING CHECKS PASSED");}
}

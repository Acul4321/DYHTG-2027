using System;
using UnityEngine;

namespace SpellBattle.Tracking
{
    public static class ArucoPoseEstimator
    {
        [ThreadStatic] static ArucoHomography fit;
        [ThreadStatic] static Vector2[] source, destination;
        public static bool TryEstimate(ArucoObservation observation, CameraIntrinsics intrinsics,
            float markerSizeMetres, out Pose imageCameraPose, out float reprojectionRmsPixels)
        {
            imageCameraPose=default;reprojectionRmsPixels=float.PositiveInfinity;
            if(!intrinsics.IsValid||!TrackingMath.Finite(markerSizeMetres)||markerSizeMetres<=0) return false;
            if(fit==null) {fit=new ArucoHomography();source=new Vector2[4];destination=new Vector2[4];}
            float half=markerSizeMetres/2;
            source[0]=new Vector2(-half,-half);source[1]=new Vector2(half,-half);
            source[2]=new Vector2(half,half);source[3]=new Vector2(-half,half);
            for(int i=0;i<4;i++)
            {
                Vector2 c=observation.Corner(i);
                destination[i]=new Vector2((c.x-intrinsics.Cx)/intrinsics.Fx,(c.y-intrinsics.Cy)/intrinsics.Fy);
            }
            if(!fit.Fit(source,destination)) return false;
            Vector3 a=new Vector3((float)fit[0],(float)fit[3],(float)fit[6]);
            Vector3 b=new Vector3((float)fit[1],(float)fit[4],(float)fit[7]);
            float scale=2/(a.magnitude+b.magnitude);
            Vector3 t=new Vector3((float)fit[2],(float)fit[5],1)*scale;
            Vector3 right=a.normalized,up=(b-Vector3.Dot(right,b)*right).normalized;
            Vector3 forward=Vector3.Cross(right,up);
            if(!TrackingMath.Finite(t)||t.z<=0||forward.sqrMagnitude<0.9f) return false;
            Quaternion rotation=Quaternion.LookRotation(forward,up);
            float error=0;
            for(int i=0;i<4;i++)
            {
                Vector3 p=t+rotation*new Vector3(source[i].x,source[i].y,0);
                if(p.z<=0) return false;
                Vector2 pixel=new Vector2(intrinsics.Fx*p.x/p.z+intrinsics.Cx,intrinsics.Fy*p.y/p.z+intrinsics.Cy);
                error+=(pixel-observation.Corner(i)).sqrMagnitude;
            }
            reprojectionRmsPixels=Mathf.Sqrt(error/4);
            if(!TrackingMath.Finite(reprojectionRmsPixels)||reprojectionRmsPixels>3) return false;
            imageCameraPose=new Pose(t,rotation);return true;
        }
    }
}

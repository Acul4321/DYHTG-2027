using UnityEngine;

namespace SpellBattle.Tracking
{
    public static class ArucoCameraGeometry
    {
        public static CameraIntrinsics ScaleIntrinsics(CameraIntrinsics original, Vector2Int processingResolution)
        {
            if(!original.IsValid||processingResolution.x<=0||processingResolution.y<=0) return default;
            float sx=(float)processingResolution.x/original.Resolution.x,sy=(float)processingResolution.y/original.Resolution.y;
            return new CameraIntrinsics(original.Fx*sx,original.Fy*sy,original.Cx*sx,original.Cy*sy,processingResolution);
        }
        public static bool TryImagePoseToWorld(Pose imageCameraPose, Matrix4x4 imageCameraToUnityCamera,
            Pose arCameraWorldPose, out Pose worldPose)
        {
            worldPose=default;
            if(!TrackingMath.Finite(imageCameraPose.position)||imageCameraPose.position.z<=0
                ||!TrackingMath.Finite(imageCameraPose.rotation)||!TrackingMath.Finite(arCameraWorldPose.position)
                ||!TrackingMath.Finite(arCameraWorldPose.rotation)||!ValidBasis(imageCameraToUnityCamera)) return false;
            Vector3 local=imageCameraToUnityCamera.MultiplyVector(imageCameraPose.position);
            // Image camera and marker use y-down. Mirror both coordinate bases to keep a proper rotation.
            Vector3 forward=imageCameraToUnityCamera.MultiplyVector(imageCameraPose.rotation*Vector3.forward);
            Vector3 up=-imageCameraToUnityCamera.MultiplyVector(imageCameraPose.rotation*Vector3.up);
            worldPose=new Pose(arCameraWorldPose.position+arCameraWorldPose.rotation*local,
                arCameraWorldPose.rotation*Quaternion.LookRotation(forward,up));
            return TrackingMath.Finite(worldPose.position);
        }

        static bool ValidBasis(Matrix4x4 basis)
        {
            Vector3 x=basis.GetColumn(0),y=basis.GetColumn(1),z=basis.GetColumn(2);
            return TrackingMath.Finite(x)&&TrackingMath.Finite(y)&&TrackingMath.Finite(z)
                && Mathf.Abs(x.sqrMagnitude-1)<0.02f&&Mathf.Abs(y.sqrMagnitude-1)<0.02f&&Mathf.Abs(z.sqrMagnitude-1)<0.02f
                && Mathf.Abs(Vector3.Dot(x,y))<0.02f&&Mathf.Abs(Vector3.Dot(x,z))<0.02f&&Mathf.Abs(Vector3.Dot(y,z))<0.02f
                && Vector3.Dot(Vector3.Cross(x,y),z)<-0.98f;
        }

        // Both installed provider shaders multiply a row UV vector by the display matrix.
        // ARCore uses (u,v,1,0), ARKit uses (u,v,1,1). Include viewport crop/rotation,
        // then use the frame's projection to recover the sensor basis without Screen.orientation.
        public static bool TryGetImageCameraBasis(CameraIntrinsics intrinsics, Matrix4x4 display,
            Matrix4x4 projection, bool arkit, out Matrix4x4 basis)
        {
            basis=Matrix4x4.zero;
            if(!intrinsics.IsValid||Mathf.Abs(projection.determinant)<1e-8f) return false;
            float determinant=display.m00*display.m11-display.m10*display.m01;
            if(!TrackingMath.Finite(determinant)||Mathf.Abs(determinant)<1e-8f) return false;
            Matrix4x4 inverseProjection=projection.inverse;
            if(!TryRay(intrinsics.Cx,intrinsics.Cy,intrinsics,display,inverseProjection,arkit,determinant,out Vector3 centre)
                ||!TryRay(intrinsics.Cx+intrinsics.Fx,intrinsics.Cy,intrinsics,display,inverseProjection,arkit,determinant,out Vector3 rightRay)
                ||!TryRay(intrinsics.Cx,intrinsics.Cy+intrinsics.Fy,intrinsics,display,inverseProjection,arkit,determinant,out Vector3 downRay)) return false;
            Vector3 right=(rightRay-centre).normalized,down=(downRay-centre).normalized,forward=centre.normalized;
            basis=Matrix4x4.identity;
            basis.SetColumn(0,new Vector4(right.x,right.y,right.z,0));
            basis.SetColumn(1,new Vector4(down.x,down.y,down.z,0));
            basis.SetColumn(2,new Vector4(forward.x,forward.y,forward.z,0));
            return ValidBasis(basis);
        }

        static bool TryRay(float x,float y,CameraIntrinsics k,Matrix4x4 display,Matrix4x4 inverseProjection,
            bool arkit,float determinant,out Vector3 ray)
        {
            float u=x/k.Resolution.x-display.m20-(arkit?display.m30:0);
            float v=y/k.Resolution.y-display.m21-(arkit?display.m31:0);
            float viewportX=(u*display.m11-v*display.m10)/determinant;
            float viewportY=(v*display.m00-u*display.m01)/determinant;
            Vector4 view=inverseProjection*new Vector4(viewportX*2-1,viewportY*2-1,1,1);
            ray=new Vector3(view.x,view.y,-view.z);
            if(!TrackingMath.Finite(ray)||Mathf.Abs(ray.z)<1e-8f) return false;
            ray/=ray.z;return true;
        }
    }
}

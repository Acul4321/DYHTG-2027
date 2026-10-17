using UnityEngine;

namespace SpellBattle.Tracking
{
    public sealed class ArucoPlayerDisplayPresenter
    {
        readonly GameObject[] displays;
        readonly Canvas[] canvases;
        readonly Camera camera;
        readonly Vector3[] targets;
        readonly float[] lastSeen;
        readonly bool[] tracked;
        readonly float offset,width,timeout,smoothing;

        public ArucoPlayerDisplayPresenter(GameObject[] displays, Camera camera, float offsetMetres,
            float widthMetres, float timeoutSeconds, float smoothingRate)
        {
            this.displays=displays??System.Array.Empty<GameObject>();this.camera=camera;
            offset=offsetMetres;width=Mathf.Max(0.01f,widthMetres);timeout=Mathf.Max(0.01f,timeoutSeconds);smoothing=Mathf.Max(0.01f,smoothingRate);
            int count=Mathf.Min(4,this.displays.Length);
            canvases=new Canvas[count];targets=new Vector3[count];lastSeen=new float[count];tracked=new bool[count];
            for(int i=0;i<count;i++) if(this.displays[i])
            {
                canvases[i]=this.displays[i].GetComponent<Canvas>();
                if(canvases[i]) {canvases[i].worldCamera=camera;canvases[i].enabled=false;}
            }
        }

        public void Observe(int markerId, Pose worldPose, float now)
        {
            if(markerId<0||markerId>=tracked.Length||!displays[markerId]||!canvases[markerId]
                ||!TrackingMath.Finite(worldPose.position)||!TrackingMath.Finite(worldPose.rotation)||!TrackingMath.Finite(now)) return;
            targets[markerId]=worldPose.position+Vector3.up*offset;
            bool reacquired=!tracked[markerId]||now-lastSeen[markerId]>timeout;
            tracked[markerId]=true;lastSeen[markerId]=now;
            if(reacquired) displays[markerId].transform.position=targets[markerId];
        }

        public void Tick(float now, float deltaTime)
        {
            for(int i=0;i<tracked.Length;i++)
            {
                if(!displays[i]||!canvases[i]) continue;
                bool visible=camera && tracked[i] && now-lastSeen[i]<=timeout;
                canvases[i].enabled=visible;
                if(!visible) {tracked[i]=false;continue;}
                Transform transform=displays[i].transform;
                transform.position=Vector3.Lerp(transform.position,targets[i],1-Mathf.Exp(-smoothing*Mathf.Max(0,deltaTime)));
                // UI canvas front is its local -Z side; align its +Z with the camera-to-label direction.
                Vector3 away=transform.position-camera.transform.position;
                if(away.sqrMagnitude>1e-8f) transform.rotation=Quaternion.LookRotation(away,camera.transform.up);
                var rect=transform as RectTransform;
                if(rect && rect.rect.width>0)
                {
                    Vector3 parentScale=transform.parent?transform.parent.lossyScale:Vector3.one;
                    if(Mathf.Abs(parentScale.x-parentScale.y)>0.001f||Mathf.Abs(parentScale.x-parentScale.z)>0.001f
                        ||parentScale.x<=0) {canvases[i].enabled=false;tracked[i]=false;continue;}
                    transform.localScale=Vector3.one*(width/rect.rect.width/parentScale.x);
                }
            }
        }

        public void Reset()
        {
            for(int i=0;i<tracked.Length;i++) {tracked[i]=false;lastSeen[i]=float.NegativeInfinity;if(canvases[i])canvases[i].enabled=false;}
        }
    }
}

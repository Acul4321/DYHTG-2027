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
        readonly bool[] hasPosition;
        readonly float offset,width,timeout,smoothing;

        public ArucoPlayerDisplayPresenter(GameObject[] displays, Camera camera, float offsetMetres,
            float widthMetres, float timeoutSeconds, float smoothingRate)
        {
            this.displays=displays??System.Array.Empty<GameObject>();this.camera=camera;
            offset=offsetMetres;width=Mathf.Max(0.01f,widthMetres);timeout=Mathf.Max(0.01f,timeoutSeconds);smoothing=Mathf.Max(0.01f,smoothingRate);
            int count=Mathf.Min(4,this.displays.Length);
            canvases=new Canvas[count];targets=new Vector3[count];lastSeen=new float[count];tracked=new bool[count];
            hasPosition=new bool[count];
            for(int i=0;i<count;i++) RefreshCanvas(i);
        }

        Canvas RefreshCanvas(int index)
        {
            GameObject display=displays[index];
            Canvas previous=canvases[index];
            if(previous && display && previous.gameObject==display) return previous;
            if(previous) previous.enabled=false;
            tracked[index]=false;
            hasPosition[index]=false;
            canvases[index]=display?display.GetComponent<Canvas>():null;
            if(canvases[index])
            {
                canvases[index].worldCamera=camera;
                canvases[index].enabled=false;
            }
            return canvases[index];
        }

        public void Observe(int markerId, Pose worldPose, float now)
        {
            if(markerId<0||markerId>=tracked.Length||!TrackingMath.Finite(worldPose.position)
                ||!TrackingMath.Finite(worldPose.rotation)||!TrackingMath.Finite(now)) return;
            if(!RefreshCanvas(markerId)) return;
            targets[markerId]=worldPose.position+Vector3.up*offset;
            bool reacquired=!tracked[markerId]||now-lastSeen[markerId]>timeout;
            tracked[markerId]=true;lastSeen[markerId]=now;
            hasPosition[markerId]=true;
            if(reacquired) displays[markerId].transform.position=targets[markerId];
        }

        public void Tick(float now, float deltaTime)
        {
            for(int i=0;i<tracked.Length;i++)
            {
                if(!RefreshCanvas(i)) continue;
                bool visible=camera && hasPosition[i];
                canvases[i].enabled=visible;
                if(!visible) {tracked[i]=false;continue;}
                bool fresh=tracked[i] && now-lastSeen[i]<=timeout;
                if(!fresh) tracked[i]=false;
                Transform transform=displays[i].transform;
                if(fresh) transform.position=Vector3.Lerp(transform.position,targets[i],1-Mathf.Exp(-smoothing*Mathf.Max(0,deltaTime)));
                // UI canvas front is its local -Z side; align its +Z with the camera-to-label direction.
                Vector3 away=transform.position-camera.transform.position;
                if(away.sqrMagnitude>1e-8f) transform.rotation=Quaternion.LookRotation(away,camera.transform.up);
                var rect=transform as RectTransform;
                if(rect && rect.rect.width>0)
                {
                    Vector3 parentScale=transform.parent?transform.parent.lossyScale:Vector3.one;
                    if(Mathf.Abs(parentScale.x-parentScale.y)>0.001f||Mathf.Abs(parentScale.x-parentScale.z)>0.001f
                        ||parentScale.x<=0) {tracked[i]=false;canvases[i].enabled=false;continue;}
                    transform.localScale=Vector3.one*(width/rect.rect.width/parentScale.x);
                }
            }
        }

        public bool IsTracked(int markerId)
        {
            return markerId >= 0 && markerId < tracked.Length && tracked[markerId]
                && displays[markerId] && displays[markerId].activeInHierarchy && canvases[markerId]
                && canvases[markerId].enabled;
        }

        public Vector3 GetMarkerPosition(int markerId) => targets[markerId] - Vector3.up * offset;

        public bool HasPosition(int markerId)
        {
            return markerId >= 0 && markerId < hasPosition.Length && hasPosition[markerId]
                && displays[markerId] && displays[markerId].activeInHierarchy && canvases[markerId]
                && canvases[markerId].enabled;
        }

        public void Reset()
        {
            for(int i=0;i<tracked.Length;i++)
            {
                RefreshCanvas(i);
                tracked[i]=false;lastSeen[i]=float.NegativeInfinity;
                hasPosition[i]=false;
                if(canvases[i]) canvases[i].enabled=false;
            }
        }
    }
}

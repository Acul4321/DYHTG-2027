using System;
using System.Collections.Generic;
using UnityEngine;

namespace SpellBattle.Tracking
{
    public sealed class ArucoMarkerDetector
    {
        byte[] mask = Array.Empty<byte>();
        int[] integral = Array.Empty<int>(), queue = Array.Empty<int>();
        readonly List<Vector2> boundary = new List<Vector2>(2048);
        readonly List<Vector2> hull = new List<Vector2>(256);
        readonly Vector2[] quad = new Vector2[4];
        readonly Vector2[] square = { Vector2.zero, Vector2.right, Vector2.one, Vector2.up };
        readonly float[] cells = new float[36];
        readonly ArucoHomography warp = new ArucoHomography();
        static readonly Comparison<Vector2> PointOrder = (a,b) => a.x == b.x ? a.y.CompareTo(b.y) : a.x.CompareTo(b.x);

        public void Detect(GrayImage image, ArucoMarkerDictionary dictionary, List<ArucoObservation> results)
        {
            if (results == null) throw new ArgumentNullException(nameof(results));
            results.Clear();
            if (!image.IsValid || dictionary == null || image.Width < 24 || image.Height < 24
                || (long)image.Width * image.Height > 1920 * 1080) return;
            int w=image.Width,h=image.Height,count=w*h,pitch=w+1;
            if(mask.Length<count) { mask=new byte[count]; queue=new int[count]; }
            if(integral.Length<(w+1)*(h+1)) integral=new int[(w+1)*(h+1)];
            Array.Clear(integral,0,(w+1)*(h+1));
            for(int y=0;y<h;y++)
            {
                int sum=0;
                for(int x=0;x<w;x++)
                { sum+=image[x,y]; integral[(y+1)*pitch+x+1]=integral[y*pitch+x+1]+sum; }
            }
            int radius=Mathf.Max(8,Mathf.Min(w,h)/20);
            for(int y=0;y<h;y++)
            for(int x=0;x<w;x++)
            {
                int x0=Mathf.Max(0,x-radius),x1=Mathf.Min(w,x+radius+1);
                int y0=Mathf.Max(0,y-radius),y1=Mathf.Min(h,y+radius+1);
                int sum=integral[y1*pitch+x1]-integral[y0*pitch+x1]-integral[y1*pitch+x0]+integral[y0*pitch+x0];
                mask[y*w+x]=(byte)(image[x,y]<sum/((x1-x0)*(y1-y0))-7 ? 1 : 0);
            }
            for(int index=0;index<count;index++)
            {
                if(mask[index]!=1) continue;
                boundary.Clear(); int head=0,tail=1; queue[0]=index; mask[index]=2;
                bool clipped=false;
                while(head<tail)
                {
                    int p=queue[head++],x=p%w,y=p/w;
                    if(x==0||y==0||x==w-1||y==h-1) { clipped=true; continue; }
                    bool edge=false;
                    Visit(p-1,ref tail,ref edge); Visit(p+1,ref tail,ref edge);
                    Visit(p-w,ref tail,ref edge); Visit(p+w,ref tail,ref edge);
                    if(edge) boundary.Add(new Vector2(x,y));
                }
                if(clipped||tail<36||boundary.Count<16) continue;
                if(!MakeQuad()||!ReadMarker(image,dictionary,out int id,out int turn,out float score)) continue;
                var observation=new ArucoObservation(id,quad[turn],quad[(turn+1)&3],quad[(turn+2)&3],quad[(turn+3)&3],score);
                int previous=-1;
                for(int i=0;i<results.Count;i++) if(results[i].Id==id) {previous=i;break;}
                if(previous<0) results.Add(observation);
                else if(results[previous].Score<score) results[previous]=observation;
            }
        }

        void Visit(int index,ref int tail,ref bool edge)
        {
            if(mask[index]==0) edge=true;
            else if(mask[index]==1) { mask[index]=2; queue[tail++]=index; }
        }
        static float Cross(Vector2 a,Vector2 b,Vector2 c)
            => (b.x-a.x)*(c.y-a.y)-(b.y-a.y)*(c.x-a.x);

        bool MakeQuad()
        {
            boundary.Sort(PointOrder); hull.Clear();
            foreach(Vector2 p in boundary)
            {
                while(hull.Count>=2 && Cross(hull[hull.Count-2],hull[hull.Count-1],p)<=0) hull.RemoveAt(hull.Count-1);
                hull.Add(p);
            }
            int lower=hull.Count;
            for(int i=boundary.Count-2;i>=0;i--)
            {
                Vector2 p=boundary[i];
                while(hull.Count>lower && Cross(hull[hull.Count-2],hull[hull.Count-1],p)<=0) hull.RemoveAt(hull.Count-1);
                hull.Add(p);
            }
            if(hull.Count>0) hull.RemoveAt(hull.Count-1);
            while(hull.Count>4)
            {
                int remove=0; float smallest=float.PositiveInfinity;
                for(int i=0;i<hull.Count;i++)
                {
                    float area=Mathf.Abs(Cross(hull[(i+hull.Count-1)%hull.Count],hull[i],hull[(i+1)%hull.Count]));
                    if(area<smallest) {smallest=area;remove=i;}
                }
                hull.RemoveAt(remove);
            }
            if(hull.Count!=4) return false;
            int first=0;
            for(int i=1;i<4;i++) if(hull[i].x+hull[i].y<hull[first].x+hull[first].y) first=i;
            float areaSum=0;
            for(int i=0;i<4;i++)
            {
                quad[i]=hull[(i+first)&3];
                Vector2 a=hull[i],b=hull[(i+1)&3];
                if(Vector2.Distance(a,b)<12) return false;
                areaSum+=a.x*b.y-a.y*b.x;
            }
            return areaSum>288 && warp.Fit(square,quad);
        }

        bool ReadMarker(GrayImage image,ArucoMarkerDictionary dictionary,out int id,out int turn,out float score)
        {
            id=-1;turn=0;score=0;float low=255,high=0;
            for(int row=0;row<6;row++)
            for(int col=0;col<6;col++)
            {
                float sum=0;
                for(int sy=0;sy<3;sy++)
                for(int sx=0;sx<3;sx++)
                {
                    Vector2 p=warp.Transform((col+0.35f+sx*0.15f)/6,(row+0.35f+sy*0.15f)/6);
                    if(!TrackingMath.Finite(p.x)||!TrackingMath.Finite(p.y)||p.x<0||p.y<0||p.x>=image.Width||p.y>=image.Height) return false;
                    sum+=image[Mathf.Clamp(Mathf.RoundToInt(p.x),0,image.Width-1),Mathf.Clamp(Mathf.RoundToInt(p.y),0,image.Height-1)];
                }
                float mean=sum/9;cells[row*6+col]=mean;low=Mathf.Min(low,mean);high=Mathf.Max(high,mean);
            }
            if(high-low<45) return false;
            float threshold=(high+low)*0.5f; int bits=0;
            for(int row=0;row<6;row++)
            for(int col=0;col<6;col++)
            {
                bool white=cells[row*6+col]>threshold;
                if(row==0||row==5||col==0||col==5) { if(white) return false; }
                else bits=(bits<<1)|(white?1:0);
            }
            score=(high-low)*Mathf.Abs(Cross(quad[0],quad[1],quad[2]));
            return dictionary.TryMatch((ushort)bits,out id,out turn);
        }
    }
}

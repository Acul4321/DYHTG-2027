using UnityEngine;

internal static class ArucoTrackingFixtures
{
    // Independent rows transcribed from the standard dictionary bytes.
    public static readonly string[] Patterns = {
        "1011010100110010", "0000111110011010", "0011001100101101", "1001100101000110"
    };
    public static byte[] White(int width, int height, int stride)
    {
        var data = new byte[stride * height];
        for (int i = 0; i < data.Length; i++) data[i] = 240;
        return data;
    }
    public static Vector2 Project(Vector3 p, float fx, float fy, float cx, float cy)
        => new Vector2(fx * p.x / p.z + cx, fy * p.y / p.z + cy);
    public static Vector2[] Corners(Vector3 t, Quaternion q, float size, float fx, float fy, float cx, float cy)
    {
        float h = size / 2;
        return new[] {
            Project(t + q * new Vector3(-h,-h,0),fx,fy,cx,cy),
            Project(t + q * new Vector3( h,-h,0),fx,fy,cx,cy),
            Project(t + q * new Vector3( h, h,0),fx,fy,cx,cy),
            Project(t + q * new Vector3(-h, h,0),fx,fy,cx,cy)
        };
    }
    // Ray/plane rasterizer independent of production homography code.
    public static void Paint(byte[] data, int width, int height, int stride, string bits,
        Vector3 t, Quaternion q, float size, float fx, float fy, float cx, float cy, bool brokenBorder = false)
    {
        Vector3 n = q * Vector3.forward; float plane = Vector3.Dot(n,t);
        Quaternion inverse = Quaternion.Inverse(q);
        for (int y=0;y<height;y++)
        for (int x=0;x<width;x++)
        {
            Vector3 ray = new Vector3((x-cx)/fx,(y-cy)/fy,1);
            float denominator = Vector3.Dot(n,ray);
            if (Mathf.Abs(denominator)<1e-6f) continue;
            float distance=plane/denominator; if(distance<=0) continue;
            Vector3 p=inverse*(ray*distance-t);
            float u=p.x/size+0.5f,v=p.y/size+0.5f;
            if(u<0||v<0||u>=1||v>=1) continue;
            int col=Mathf.FloorToInt(u*6),row=Mathf.FloorToInt(v*6);
            bool border=row==0||row==5||col==0||col==5;
            bool white=border?brokenBorder:bits[(row-1)*4+col-1]=='1';
            data[y*stride+x]=(byte)(white?240:15);
        }
    }
}

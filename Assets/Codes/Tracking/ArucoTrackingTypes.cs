using System;
using UnityEngine;

namespace SpellBattle.Tracking
{
    public readonly struct GrayImage
    {
        public readonly byte[] Data;
        public readonly int Width, Height, RowStride;
        public GrayImage(byte[] data, int width, int height, int rowStride)
        { Data = data; Width = width; Height = height; RowStride = rowStride; }
        public bool IsValid => Data != null && Width > 0 && Height > 0 && RowStride >= Width
            && (long)(Height - 1) * RowStride + Width <= Data.Length;
        public byte this[int x, int y] => Data[y * RowStride + x];
    }

    public struct ArucoObservation
    {
        public int Id;
        public Vector2 C0, C1, C2, C3;
        public float Score;
        public ArucoObservation(int id, Vector2 a, Vector2 b, Vector2 c, Vector2 d, float score = 1)
        { Id = id; C0 = a; C1 = b; C2 = c; C3 = d; Score = score; }
        public Vector2 Corner(int index)
        { switch (index & 3) { case 0: return C0; case 1: return C1; case 2: return C2; default: return C3; } }
    }

    public readonly struct CameraIntrinsics
    {
        public readonly float Fx, Fy, Cx, Cy;
        public readonly Vector2Int Resolution;
        public CameraIntrinsics(float fx, float fy, float cx, float cy, Vector2Int resolution)
        { Fx = fx; Fy = fy; Cx = cx; Cy = cy; Resolution = resolution; }
        public bool IsValid => TrackingMath.Finite(Fx) && TrackingMath.Finite(Fy)
            && TrackingMath.Finite(Cx) && TrackingMath.Finite(Cy) && Fx > 0 && Fy > 0
            && Resolution.x > 0 && Resolution.y > 0;
    }

    internal static class TrackingMath
    {
        public static bool Finite(float x) => !float.IsNaN(x) && !float.IsInfinity(x);
        public static bool Finite(Vector3 v) => Finite(v.x) && Finite(v.y) && Finite(v.z);
        public static bool Finite(Quaternion q) => Finite(q.x) && Finite(q.y) && Finite(q.z) && Finite(q.w)
            && q.x*q.x + q.y*q.y + q.z*q.z + q.w*q.w > 0.0001f;
    }
}

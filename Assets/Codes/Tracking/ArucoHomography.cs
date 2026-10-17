using System;
using UnityEngine;

namespace SpellBattle.Tracking
{
    // Reusable double precision four-point projective fit; no per-fit allocation.
    internal sealed class ArucoHomography
    {
        readonly double[,] system = new double[8, 9];
        readonly double[] h = new double[8];

        public bool Fit(Vector2[] source, Vector2[] destination)
        {
            Array.Clear(system, 0, system.Length);
            for (int i = 0; i < 4; i++)
            {
                double x = source[i].x, y = source[i].y, u = destination[i].x, v = destination[i].y;
                if (double.IsNaN(x+y+u+v) || double.IsInfinity(x+y+u+v)) return false;
                int r = i * 2;
                system[r,0]=x; system[r,1]=y; system[r,2]=1;
                system[r,6]=-u*x; system[r,7]=-u*y; system[r,8]=u;
                system[r+1,3]=x; system[r+1,4]=y; system[r+1,5]=1;
                system[r+1,6]=-v*x; system[r+1,7]=-v*y; system[r+1,8]=v;
            }
            for (int col = 0; col < 8; col++)
            {
                int pivot = col;
                for (int row = col + 1; row < 8; row++)
                    if (Math.Abs(system[row,col]) > Math.Abs(system[pivot,col])) pivot = row;
                if (Math.Abs(system[pivot,col]) < 1e-10) return false;
                for (int j = col; j < 9; j++)
                { double temp = system[col,j]; system[col,j] = system[pivot,j]; system[pivot,j] = temp; }
                double divisor = system[col,col];
                for (int j = col; j < 9; j++) system[col,j] /= divisor;
                for (int row = 0; row < 8; row++)
                {
                    if (row == col) continue;
                    double factor = system[row,col];
                    for (int j = col; j < 9; j++) system[row,j] -= factor * system[col,j];
                }
            }
            for (int i = 0; i < 8; i++) h[i] = system[i,8];
            return true;
        }

        public double this[int index] => index == 8 ? 1 : h[index];
        public Vector2 Transform(float x, float y)
        {
            double denominator = h[6]*x + h[7]*y + 1;
            if (Math.Abs(denominator) < 1e-12) return new Vector2(float.NaN,float.NaN);
            return new Vector2((float)((h[0]*x+h[1]*y+h[2])/denominator),
                (float)((h[3]*x+h[4]*y+h[5])/denominator));
        }
    }
}

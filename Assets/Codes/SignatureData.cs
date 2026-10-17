using System;
using System.Collections.Generic;
using PDollarGestureRecognizer;
using UnityEngine;

// Normalized, quantized x/y/stroke triples; at most 64 points and 32 strokes.
public static class SignatureData
{
    public const int MaximumPoints = 64;
    public const int MaximumStrokes = 32;

    public static bool IsValid(int[] data)
    {
        if (data == null || data.Length < 6 || data.Length > MaximumPoints * 3 || data.Length % 3 != 0)
            return false;
        int previousStroke = 0;
        bool hasLine = false;
        for (int i = 0; i < data.Length; i += 3)
        {
            int stroke = data[i + 2];
            if (data[i] < 0 || data[i] > 255 || data[i + 1] < 0 || data[i + 1] > 255
                || stroke < 0 || stroke >= MaximumStrokes || (i == 0 && stroke != 0)
                || stroke < previousStroke || stroke > previousStroke + 1)
                return false;
            if (i > 0 && stroke == previousStroke
                && (data[i] != data[i - 3] || data[i + 1] != data[i - 2]))
                hasLine = true;
            previousStroke = stroke;
        }
        return hasLine;
    }

    public static int[] FromPoints(IReadOnlyList<Point> points)
    {
        if (points == null || points.Count < 2)
            return null;
        var strokes = new List<List<Vector2>>();
        float minX = float.MaxValue, minY = float.MaxValue;
        float maxX = float.MinValue, maxY = float.MinValue;
        for (int i = 0; i < points.Count; i++)
        {
            Point point = points[i];
            if (point == null || float.IsNaN(point.X) || float.IsInfinity(point.X)
                || float.IsNaN(point.Y) || float.IsInfinity(point.Y))
                return null;
            if (i == 0 || point.StrokeID != points[i - 1].StrokeID)
                strokes.Add(new List<Vector2>());
            if (strokes.Count > MaximumStrokes)
                return null;
            var position = new Vector2(point.X, point.Y);
            List<Vector2> stroke = strokes[strokes.Count - 1];
            if (stroke.Count == 0 || (stroke[stroke.Count - 1] - position).sqrMagnitude > 0)
                stroke.Add(position);
            minX = Mathf.Min(minX, point.X); minY = Mathf.Min(minY, point.Y);
            maxX = Mathf.Max(maxX, point.X); maxY = Mathf.Max(maxY, point.Y);
        }
        float scale = Mathf.Max(maxX - minX, maxY - minY);
        if (scale <= Mathf.Epsilon || float.IsInfinity(scale))
            return null;
        var lengths = new float[strokes.Count];
        var counts = new int[strokes.Count];
        int total = 0;
        for (int s = 0; s < strokes.Count; s++)
        {
            for (int i = 1; i < strokes[s].Count; i++)
                lengths[s] += Vector2.Distance(strokes[s][i - 1], strokes[s][i]);
            counts[s] = Mathf.Min(2, strokes[s].Count);
            total += counts[s];
        }
        if (total > MaximumPoints)
            return null;
        int desired = Mathf.Min(MaximumPoints, points.Count);
        // Assign remaining samples to the stroke with the widest sample spacing.
        while (total < desired)
        {
            int best = -1;
            float spacing = 0;
            for (int s = 0; s < strokes.Count; s++)
            {
                if (counts[s] < 2) continue;
                float candidate = lengths[s] / (counts[s] - 1);
                if (candidate > spacing) { best = s; spacing = candidate; }
            }
            if (best < 0) break;
            counts[best]++;
            total++;
        }
        var result = new int[total * 3];
        int output = 0;
        for (int s = 0; s < strokes.Count; s++)
        {
            List<Vector2> stroke = strokes[s];
            int segment = 1;
            float traversed = 0;
            for (int sample = 0; sample < counts[s]; sample++)
            {
                float target = counts[s] == 1 ? 0 : lengths[s] * sample / (counts[s] - 1);
                while (segment < stroke.Count - 1
                    && traversed + Vector2.Distance(stroke[segment - 1], stroke[segment]) < target)
                {
                    traversed += Vector2.Distance(stroke[segment - 1], stroke[segment]);
                    segment++;
                }
                Vector2 point = stroke[0];
                if (stroke.Count > 1)
                {
                    float length = Vector2.Distance(stroke[segment - 1], stroke[segment]);
                    point = Vector2.Lerp(stroke[segment - 1], stroke[segment], (target - traversed) / length);
                }
                result[output++] = Mathf.Clamp(Mathf.RoundToInt((point.x - minX) / scale * 255), 0, 255);
                result[output++] = Mathf.Clamp(Mathf.RoundToInt((point.y - minY) / scale * 255), 0, 255);
                result[output++] = s;
            }
        }
        return IsValid(result) ? result : null;
    }
}

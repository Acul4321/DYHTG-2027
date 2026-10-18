using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GestureTrailGraphic : MaskableGraphic
{
    [SerializeField, Min(1f)] private float lineWidth = 6f;
    [SerializeField, Min(1f)] private float glowWidth = 18f;
    [SerializeField] private Color glowColor = new Color(0.12f, 0.8f, 1f, 0.75f);
    [SerializeField] private Color coreColor = new Color(0.88f, 0.99f, 1f, 1f);

    private const int RingSegments = 12;
    private const int VertexBudget = 64000;
    private readonly List<Vector2> points = new List<Vector2>();
    private readonly List<bool> strokeStarts = new List<bool>();

    public void AddPoint(Vector2 point, bool startsStroke = false)
    {
        points.Add(point);
        strokeStarts.Add(startsStroke);
        SetVerticesDirty();
    }

    public void Clear()
    {
        points.Clear();
        strokeStarts.Clear();
        SetVerticesDirty();
    }

    protected override void OnPopulateMesh(VertexHelper mesh)
    {
        mesh.Clear();
        if (points.Count == 0) return;

        // Visual smoothing leaves the original recognition points unchanged.
        for (int i = 0; i < points.Count; i++)
        {
            if (mesh.currentVertCount + 6 > VertexBudget) break;
            bool start = i == 0 || strokeStarts[i];
            bool end = i == points.Count - 1 || strokeStarts[i + 1];
            Vector2 position = SmoothedPoint(i);
            Vector2 incoming = start ? Vector2.zero : (position - SmoothedPoint(i - 1)).normalized;
            Vector2 outgoing = end ? Vector2.zero : (SmoothedPoint(i + 1) - position).normalized;
            Vector2 tangent = (incoming + outgoing).normalized;
            if (tangent.sqrMagnitude < 0.001f)
                tangent = outgoing.sqrMagnitude > 0 ? outgoing : incoming;
            if (tangent.sqrMagnitude < 0.001f) tangent = Vector2.right;
            Vector2 normal = new Vector2(-tangent.y, tangent.x);
            // Limit miters at sharp corners to prevent spikes.
            float miter = !start && !end
                ? 1f / Mathf.Max(0.7f, Vector2.Dot(tangent, outgoing)) : 1f;
            normal *= miter;
            float edge = lineWidth * 0.5f;
            float halo = Mathf.Max(glowWidth * 0.5f, edge + 1);
            int first = mesh.currentVertCount;
            Color clear = glowColor; clear.a = 0;
            AddVertex(mesh, position - normal * halo, clear);
            AddVertex(mesh, position - normal * edge, glowColor);
            AddVertex(mesh, position - normal * edge * 0.35f, coreColor);
            AddVertex(mesh, position + normal * edge * 0.35f, coreColor);
            AddVertex(mesh, position + normal * edge, glowColor);
            AddVertex(mesh, position + normal * halo, clear);
            if (start) continue;
            for (int band = 0; band < 5; band++)
            {
                int previous = first - 6 + band;
                int current = first + band;
                mesh.AddTriangle(previous, previous + 1, current + 1);
                mesh.AddTriangle(previous, current + 1, current);
            }
        }

        // Rounded ends make taps and separate signature strokes visible.
        for (int i = 0; i < points.Count; i++)
        {
            bool start = i == 0 || strokeStarts[i];
            bool end = i == points.Count - 1 || strokeStarts[i + 1];
            if (start || end) AddGlowDisc(mesh, points[i], lineWidth * 0.5f, glowWidth * 0.5f);
        }
        AddGlowDisc(mesh, points[points.Count - 1], lineWidth * 0.7f, glowWidth * 0.8f);
    }

    private Vector2 SmoothedPoint(int index)
    {
        if (index == 0 || index == points.Count - 1 || strokeStarts[index] || strokeStarts[index + 1])
            return points[index];
        return (points[index - 1] + points[index] * 2f + points[index + 1]) * 0.25f;
    }

    private void AddGlowDisc(VertexHelper mesh, Vector2 center, float radius, float halo)
    {
        if (mesh.currentVertCount + 1 + RingSegments * 3 > VertexBudget) return;
        int first = mesh.currentVertCount;
        AddVertex(mesh, center, coreColor);
        for (int ring = 0; ring < 3; ring++)
        {
            float size = ring == 0 ? radius * 0.35f : ring == 1 ? radius : Mathf.Max(radius + 1, halo);
            Color tint = ring == 0 ? coreColor : glowColor;
            if (ring == 2) tint.a = 0;
            for (int i = 0; i < RingSegments; i++)
            {
                float angle = i * Mathf.PI * 2 / RingSegments;
                AddVertex(mesh, center + new Vector2(Mathf.Cos(angle), Mathf.Sin(angle)) * size, tint);
            }
        }
        for (int i = 0; i < RingSegments; i++)
        {
            int next = (i + 1) % RingSegments;
            mesh.AddTriangle(first, first + 1 + i, first + 1 + next);
            for (int ring = 0; ring < 2; ring++)
            {
                int inner = first + 1 + ring * RingSegments;
                int outer = inner + RingSegments;
                mesh.AddTriangle(inner + i, outer + i, outer + next);
                mesh.AddTriangle(inner + i, outer + next, inner + next);
            }
        }
    }

    private void AddVertex(VertexHelper mesh, Vector2 position, Color tint)
    {
        UIVertex vertex = UIVertex.simpleVert;
        vertex.color = tint * color;
        vertex.position = position;
        mesh.AddVert(vertex);
    }
}

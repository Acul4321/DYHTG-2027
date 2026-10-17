using UnityEngine;
using UnityEngine.UI;

public class SignatureGraphic : MaskableGraphic
{
    private int[] signature;

    public void SetSignature(int[] drawing)
    {
        signature = SignatureData.IsValid(drawing) ? (int[])drawing.Clone() : null;
        raycastTarget = false;
        SetVerticesDirty();
    }

    protected override void OnPopulateMesh(VertexHelper mesh)
    {
        mesh.Clear();
        if (signature == null) return;
        Rect rect = GetPixelAdjustedRect();
        if (rect.width <= 0 || rect.height <= 0) return;
        int minX = 255, minY = 255, maxX = 0, maxY = 0;
        for (int i = 0; i < signature.Length; i += 3)
        {
            minX = Mathf.Min(minX, signature[i]); maxX = Mathf.Max(maxX, signature[i]);
            minY = Mathf.Min(minY, signature[i + 1]); maxY = Mathf.Max(maxY, signature[i + 1]);
        }
        float padding = Mathf.Min(rect.width, rect.height) * 0.05f;
        float scale = Mathf.Min((rect.width - padding * 2) / Mathf.Max(1, maxX - minX),
            (rect.height - padding * 2) / Mathf.Max(1, maxY - minY));
        float halfWidth = Mathf.Max(0.5f, Mathf.Min(rect.width, rect.height) * 0.012f);
        for (int i = 0; i < signature.Length; i += 3)
        {
            Vector2 end = Position(i, rect.center, minX, minY, maxX, maxY, scale);
            bool hasPrevious = i > 0 && signature[i + 2] == signature[i - 1];
            bool hasNext = i + 3 < signature.Length && signature[i + 2] == signature[i + 5];
            if (hasPrevious)
            {
                Vector2 start = Position(i - 3, rect.center, minX, minY, maxX, maxY, scale);
                if ((end - start).sqrMagnitude <= Mathf.Epsilon) continue;
                Vector2 direction = (end - start).normalized;
                var normal = new Vector2(-direction.y, direction.x) * halfWidth;
                Quad(mesh, start - normal, start + normal, end + normal, end - normal);
            }
            else if (!hasNext)
            {
                // Preserve dotted letters and other one-point strokes.
                Quad(mesh, end + new Vector2(-halfWidth, -halfWidth), end + new Vector2(-halfWidth, halfWidth),
                    end + new Vector2(halfWidth, halfWidth), end + new Vector2(halfWidth, -halfWidth));
            }
        }
    }

    private Vector2 Position(int i, Vector2 center, int minX, int minY, int maxX, int maxY, float scale) =>
        center + new Vector2(signature[i] - (minX + maxX) * 0.5f,
            (minY + maxY) * 0.5f - signature[i + 1]) * scale;

    private void Quad(VertexHelper mesh, Vector2 a, Vector2 b, Vector2 c, Vector2 d)
    {
        int first = mesh.currentVertCount;
        foreach (Vector2 point in new[] { a, b, c, d })
        {
            UIVertex vertex = UIVertex.simpleVert;
            vertex.position = point;
            vertex.color = color;
            mesh.AddVert(vertex);
        }
        mesh.AddTriangle(first, first + 1, first + 2);
        mesh.AddTriangle(first, first + 2, first + 3);
    }
}

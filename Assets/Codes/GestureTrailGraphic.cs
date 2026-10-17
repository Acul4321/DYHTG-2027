using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GestureTrailGraphic : MaskableGraphic
{
    [SerializeField, Min(1f)] private float lineWidth = 6f;

    private readonly List<Vector2> points = new List<Vector2>();

    public void AddPoint(Vector2 point)
    {
        points.Add(point);
        SetVerticesDirty();
    }

    public void Clear()
    {
        points.Clear();
        SetVerticesDirty();
    }

    protected override void OnPopulateMesh(VertexHelper vertexHelper)
    {
        vertexHelper.Clear();
        if (points.Count < 2)
            return;

        for (int i = 1; i < points.Count; i++)
        {
            Vector2 start = points[i - 1];
            Vector2 end = points[i];
            Vector2 direction = (end - start).normalized;
            Vector2 perpendicular = new Vector2(-direction.y, direction.x) * (lineWidth * 0.5f);
            int firstVertex = vertexHelper.currentVertCount;

            AddVertex(vertexHelper, start - perpendicular);
            AddVertex(vertexHelper, start + perpendicular);
            AddVertex(vertexHelper, end + perpendicular);
            AddVertex(vertexHelper, end - perpendicular);

            vertexHelper.AddTriangle(firstVertex, firstVertex + 1, firstVertex + 2);
            vertexHelper.AddTriangle(firstVertex, firstVertex + 2, firstVertex + 3);
        }
    }

    private void AddVertex(VertexHelper vertexHelper, Vector2 position)
    {
        UIVertex vertex = UIVertex.simpleVert;
        vertex.color = color;
        vertex.position = position;
        vertexHelper.AddVert(vertex);
    }
}

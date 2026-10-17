using System.Collections;
using System.Collections.Generic;
using PDollarGestureRecognizer;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

[System.Serializable]
public class GestureRecognizedEvent : UnityEngine.Events.UnityEvent<string, float>
{
}

public class CastingAreaController : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    [SerializeField] private float recognitionDelay = 0.55f;
    [SerializeField, Range(0f, 1f)] private float minimumConfidence = 0.5f;
    [SerializeField] private GestureRecognizedEvent onGestureRecognized = new GestureRecognizedEvent();

    private readonly List<Gesture> trainingSet = new List<Gesture>();
    private readonly List<Point> points = new List<Point>();
    private RectTransform drawingArea;
    private GestureTrailGraphic trail;
    private Text statusText;
    private Coroutine recognitionCoroutine;
    private int strokeId;
    private bool isDrawing;
    private bool hasRecognized;

    public GestureRecognizedEvent OnGestureRecognized => onGestureRecognized;

    private void Awake()
    {
        drawingArea = transform as RectTransform;
        if (drawingArea == null)
        {
            Debug.LogError("CastingAreaController must be attached to a UI RectTransform.", this);
            enabled = false;
            return;
        }

        LoadTrainingGestures();
        CreateDrawingSurface();
        CreateStatusText();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (recognitionCoroutine != null)
        {
            StopCoroutine(recognitionCoroutine);
            recognitionCoroutine = null;
        }
        else if (hasRecognized || points.Count > 0)
        {
            ClearGesture();
        }

        strokeId++;
        isDrawing = true;
        AddPoint(eventData);
        statusText.text = "Draw a spell gesture";
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (isDrawing)
            AddPoint(eventData);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (!isDrawing)
            return;

        AddPoint(eventData);
        isDrawing = false;
        recognitionCoroutine = StartCoroutine(RecognizeAfterDelay());
        statusText.text = "Release complete - continue drawing or pause to recognize";
    }

    private void LoadTrainingGestures()
    {
        TextAsset[] gestureFiles = Resources.LoadAll<TextAsset>("GestureSet/10-stylus-MEDIUM");
        foreach (TextAsset gestureFile in gestureFiles)
        {
            Gesture gesture = GestureIO.ReadGestureFromXML(gestureFile.text);
            if (TryGetSpellName(gesture.Name, out _))
                trainingSet.Add(gesture);
        }

        if (trainingSet.Count == 0)
            Debug.LogError("No supported spell gesture templates were found in Resources/GestureSet/10-stylus-MEDIUM.", this);
    }

    private void CreateDrawingSurface()
    {
        GameObject surface = new GameObject(
            "GestureTrail",
            typeof(RectTransform),
            typeof(CanvasRenderer),
            typeof(GestureTrailGraphic));
        RectTransform surfaceTransform = (RectTransform)surface.transform;
        surfaceTransform.SetParent(drawingArea, false);
        surfaceTransform.anchorMin = Vector2.zero;
        surfaceTransform.anchorMax = Vector2.one;
        surfaceTransform.offsetMin = Vector2.zero;
        surfaceTransform.offsetMax = Vector2.zero;

        trail = surface.GetComponent<GestureTrailGraphic>();
        trail.raycastTarget = false;
    }

    private void CreateStatusText()
    {
        GameObject label = new GameObject("GestureStatus", typeof(RectTransform), typeof(Text));
        RectTransform labelTransform = (RectTransform)label.transform;
        labelTransform.SetParent(drawingArea, false);
        labelTransform.anchorMin = new Vector2(0f, 1f);
        labelTransform.anchorMax = new Vector2(1f, 1f);
        labelTransform.pivot = new Vector2(0.5f, 1f);
        labelTransform.offsetMin = new Vector2(12f, -42f);
        labelTransform.offsetMax = new Vector2(-12f, -8f);

        statusText = label.GetComponent<Text>();
        statusText.font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        statusText.fontSize = 18;
        statusText.alignment = TextAnchor.UpperLeft;
        statusText.color = Color.white;
        statusText.raycastTarget = false;
        statusText.text = trainingSet.Count == 0
            ? "No gesture templates loaded"
            : "Draw a spell gesture";
    }

    private void AddPoint(PointerEventData eventData)
    {
        if (!RectTransformUtility.ScreenPointToLocalPointInRectangle(
                trail.rectTransform, eventData.position, eventData.pressEventCamera, out Vector2 localPoint))
            return;

        Point point = new Point(localPoint.x, -localPoint.y, strokeId);
        if (points.Count > 0 && points[points.Count - 1].StrokeID == strokeId)
        {
            Point previous = points[points.Count - 1];
            float deltaX = point.X - previous.X;
            float deltaY = point.Y - previous.Y;
            if (deltaX * deltaX + deltaY * deltaY < 1f)
                return;
        }

        points.Add(point);
        trail.AddPoint(localPoint);
    }

    private IEnumerator RecognizeAfterDelay()
    {
        yield return new WaitForSecondsRealtime(recognitionDelay);
        recognitionCoroutine = null;

        if (points.Count < 2 || PathLength(points) <= Mathf.Epsilon)
        {
            statusText.text = "Draw a longer gesture";
            hasRecognized = true;
            yield break;
        }

        if (trainingSet.Count == 0)
        {
            statusText.text = "No gesture templates loaded";
            hasRecognized = true;
            yield break;
        }

        Result result = PointCloudRecognizer.Classify(
            new Gesture(points.ToArray()), trainingSet.ToArray());
        Debug.Log($"[Spell] PDollar result: '{result.GestureClass}', confidence {result.Score:P0}.", this);

        if (result.GestureClass == "No match"
            || result.Score < minimumConfidence
            || !TryGetSpellName(result.GestureClass, out string spellName))
        {
            statusText.text = $"Unrecognized gesture ({result.Score:P0})";
        }
        else
        {
            statusText.text = $"{spellName} ({result.Score:P0})";
            Debug.Log($"[Spell] Recognized '{result.GestureClass}' as {spellName}; sending message 1001.", this);
            onGestureRecognized.Invoke(result.GestureClass, result.Score);

            if (PlayerSystem.Instance == null)
            {
                Debug.LogWarning("Recognized a spell gesture, but PlayerSystem is not available to send it.", this);
            }
            else
            {
                PlayerSystem.Instance.SendNetworkMessage(1001, spellName);
                RunSpell(spellName);
            }
        }

        hasRecognized = true;
    }

    private static bool TryGetSpellName(string gestureName, out string spellName)
    {
        switch (gestureName?.Trim().Replace('_', ' ').ToLowerInvariant())
        {
            case "five point star":
                spellName = "Fireball";
                return true;
            case "null":
                spellName = "Shield";
                return true;
            case "arrowhead":
                spellName = "Reflect";
                return true;
            default:
                spellName = null;
                return false;
        }
    }

    private void RunSpell(string spell)
    {
        var player = PlayerSystem.Instance?.LocalPlayer;
        if (player == null)
        {
            Debug.LogWarning("Recognized a spell gesture, but the local player is not available to cast it.", this);
            return;
        }

        Spell spellToCast = null;
        switch (spell.ToLower())
        {
            case "fireball":
            spellToCast = new Fireball();
            break;

            case "shield":
            spellToCast = new ShieldSpell();
            break;

            case "reflect":
            spellToCast = new ReflectSpell(25); // default dmg value for reflect
            break;

            default:
            spellToCast = null;
            break;
        }

        if (spellToCast != null)
        {
            player.CastSpell(spellToCast);
        }
    }

    private static float PathLength(List<Point> gesturePoints)
    {
        float length = 0f;
        for (int i = 1; i < gesturePoints.Count; i++)
        {
            if (gesturePoints[i].StrokeID == gesturePoints[i - 1].StrokeID)
                length += Vector2.Distance(
                    new Vector2(gesturePoints[i - 1].X, gesturePoints[i - 1].Y),
                    new Vector2(gesturePoints[i].X, gesturePoints[i].Y));
        }

        return length;
    }

    private void ClearGesture()
    {
        points.Clear();
        trail.Clear();
        strokeId = 0;
        hasRecognized = false;
    }
}

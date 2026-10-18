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
    [SerializeField] private float numberRecognitionDelay = 0.9f;
    [SerializeField, Range(0f, 1f)] private float minimumConfidence = 0.8f;
    [SerializeField, Min(1f)] private float minimumNumberPathLength = 30f;
    [SerializeField] private GestureRecognizedEvent onGestureRecognized = new GestureRecognizedEvent();

    private readonly List<Gesture> trainingSet = new List<Gesture>();
    private readonly List<Gesture> digitTrainingSet = new List<Gesture>();
    private readonly List<Point> points = new List<Point>();
    private RectTransform drawingArea;
    private GestureTrailGraphic trail;
    private Text statusText;
    private Coroutine recognitionCoroutine;
    private int strokeId;
    private bool isDrawing;
    private bool hasRecognized;
    private PlayerSystem playerSystem;
    private GameObject signatureButtons;

    public GestureRecognizedEvent OnGestureRecognized => onGestureRecognized;

    private bool IsSelectingNumber => PlayerSystem.Instance == null
        || PlayerSystem.Instance.aruconum < 1 || PlayerSystem.Instance.aruconum > 4;
    private bool IsSigning => !IsSelectingNumber && !PlayerSystem.Instance.HasSignature;
    private string DrawingPrompt => IsSelectingNumber
        ? "Draw 1, 2, 3, or 4 to select your number"
        : IsSigning ? "Sign your name" : "Draw a spell gesture";

    private void Start()
    {
        playerSystem = PlayerSystem.Instance;
        if (playerSystem != null)
            playerSystem.ServerErrorReceived += OnServerError;
    }

    private void OnDestroy()
    {
        if (playerSystem != null)
            playerSystem.ServerErrorReceived -= OnServerError;
    }

    private void OnServerError(string code)
    {
        if (code != "aruconum_in_use" && code != "invalid_signature")
            return;
        if (recognitionCoroutine != null)
        {
            StopCoroutine(recognitionCoroutine);
            recognitionCoroutine = null;
        }
        isDrawing = false;
        ClearGesture();
        UpdateSignatureControls();
        statusText.text = code == "aruconum_in_use"
            ? "Number already taken - draw another: 1, 2, 3, or 4"
            : "Signature not accepted - sign your name again";
    }

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
        CreateSignatureControls();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (recognitionCoroutine != null)
        {
            StopCoroutine(recognitionCoroutine);
            recognitionCoroutine = null;
        }
        else if (hasRecognized || (!IsSigning && points.Count > 0))
        {
            ClearGesture();
        }

        strokeId++;
        isDrawing = true;
        AddPoint(eventData);
        statusText.text = DrawingPrompt;
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
        if (IsSigning)
        {
            statusText.text = "Sign your name - press Done when finished";
            return;
        }
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

        foreach (TextAsset digitFile in Resources.LoadAll<TextAsset>("GestureSet/Digits"))
        {
            Gesture gesture = GestureIO.ReadGestureFromXML(digitFile.text);
            if (int.TryParse(gesture.Name, out int digit) && digit >= 1 && digit <= 4)
                digitTrainingSet.Add(gesture);
        }

        if (digitTrainingSet.Count == 0)
            Debug.LogError("No number gesture templates were found in Resources/GestureSet/Digits.", this);
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
        statusText.text = (IsSelectingNumber ? digitTrainingSet : trainingSet).Count == 0
            ? "No gesture templates loaded"
            : DrawingPrompt;
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

        if (points.Count >= 4096)
            return;
        bool startsStroke = points.Count == 0 || points[points.Count - 1].StrokeID != strokeId;
        points.Add(point);
        trail.AddPoint(localPoint, startsStroke);
    }

    private void CreateSignatureControls()
    {
        signatureButtons = new GameObject("SignatureControls", typeof(RectTransform));
        var rect = (RectTransform)signatureButtons.transform;
        rect.SetParent(drawingArea, false);
        rect.anchorMin = rect.anchorMax = new Vector2(1, 0);
        rect.pivot = new Vector2(1, 0);
        rect.anchoredPosition = new Vector2(-12, 12);
        rect.sizeDelta = new Vector2(212, 40);
        CreateSignatureButton("Clear", new Vector2(0, 0), ClearSignature);
        CreateSignatureButton("Done", new Vector2(112, 0), ConfirmSignature);
        UpdateSignatureControls();
    }

    private void CreateSignatureButton(string title, Vector2 position, UnityEngine.Events.UnityAction action)
    {
        var buttonObject = new GameObject(title, typeof(RectTransform), typeof(Image), typeof(Button));
        var rect = (RectTransform)buttonObject.transform;
        rect.SetParent(signatureButtons.transform, false);
        rect.anchorMin = rect.anchorMax = Vector2.zero;
        rect.pivot = Vector2.zero;
        rect.anchoredPosition = position;
        rect.sizeDelta = new Vector2(100, 40);
        Image background = buttonObject.GetComponent<Image>();
        background.color = new Color(0.1f, 0.18f, 0.28f, 1);
        Button button = buttonObject.GetComponent<Button>();
        button.targetGraphic = background;
        button.onClick.AddListener(action);
        var labelObject = new GameObject("Label", typeof(RectTransform), typeof(Text));
        var labelRect = (RectTransform)labelObject.transform;
        labelRect.SetParent(rect, false);
        labelRect.anchorMin = Vector2.zero; labelRect.anchorMax = Vector2.one;
        labelRect.offsetMin = labelRect.offsetMax = Vector2.zero;
        Text label = labelObject.GetComponent<Text>();
        label.font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        label.fontSize = 18; label.color = Color.white;
        label.alignment = TextAnchor.MiddleCenter; label.text = title;
        label.raycastTarget = false;
    }

    private void UpdateSignatureControls()
    {
        if (signatureButtons != null) signatureButtons.SetActive(IsSigning);
        if (trail != null) trail.rectTransform.offsetMin = new Vector2(0, IsSigning ? 60 : 0);
    }

    public void ClearSignature()
    {
        if (!IsSigning) return;
        isDrawing = false;
        ClearGesture();
        statusText.text = "Sign your name";
    }

    public void ConfirmSignature()
    {
        if (!IsSigning || isDrawing) return;
        if (PathLength(points) < minimumNumberPathLength)
        {
            statusText.text = "Sign your name before pressing Done";
            return;
        }
        int[] drawing = SignatureData.FromPoints(points);
        if (drawing == null || !PlayerSystem.Instance.SubmitSignature(drawing))
        {
            statusText.text = "Signature too complex - clear and sign again";
            return;
        }
        ClearGesture();
        UpdateSignatureControls();
        statusText.text = "Signature saved. Draw a spell gesture";
    }

    private IEnumerator RecognizeAfterDelay()
    {
        yield return new WaitForSecondsRealtime(IsSelectingNumber ? numberRecognitionDelay : recognitionDelay);
        recognitionCoroutine = null;
        // Signing is submitted explicitly with Done, never by an idle timer.
        if (IsSigning) yield break;
        bool selectingNumber = IsSelectingNumber;
        List<Gesture> activeTrainingSet = selectingNumber ? digitTrainingSet : trainingSet;

        float pathLength = PathLength(points);
        if (points.Count < 2 || pathLength <= Mathf.Epsilon
            || (selectingNumber && pathLength < minimumNumberPathLength))
        {
            statusText.text = selectingNumber
                ? "Draw a longer number: 1, 2, 3, or 4"
                : "Draw a longer gesture";
            ClearGesture();
            hasRecognized = true;
            yield break;
        }

        if (activeTrainingSet.Count == 0)
        {
            statusText.text = "No gesture templates loaded";
            ClearGesture();
            hasRecognized = true;
            yield break;
        }

        Result result = PointCloudRecognizer.Classify(
            new Gesture(points.ToArray()), activeTrainingSet.ToArray());
        ClearGesture();

        if (selectingNumber)
        {
            if (result.Score < minimumConfidence || float.IsNaN(result.Score)
                || !int.TryParse(result.GestureClass, out int number) || number < 1 || number > 4)
            {
                statusText.text = "Number unclear - draw 1, 2, 3, or 4 again";
            }
            else if (PlayerSystem.Instance == null)
            {
                statusText.text = "Player system not ready - draw your number again";
            }
            else
            {
                PlayerSystem.Instance.SelectArucoNumber(number);
                UpdateSignatureControls();
                statusText.text = DrawingPrompt;
                Debug.Log($"[Gesture] Selected aruconum {number}, confidence {result.Score:P0}.", this);
            }

            hasRecognized = true;
            yield break;
        }

        Debug.Log($"[Spell] PDollar result: '{result.GestureClass}', confidence {result.Score:P0}.", this);

        if (result.GestureClass == "No match"
            || result.Score < minimumConfidence
            || float.IsNaN(result.Score)
            || !TryGetSpellName(result.GestureClass, out string spellName))
        {
            statusText.text = $"Unrecognized gesture ({result.Score:P0})";
            if (PlayerSystem.Instance) PlayerSystem.Instance.ShowCastStatus("Fails");
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
                if (!PlayerSystem.Instance.TryCastSpell(spellName))
                    statusText.text = spellName == "Fireball" && PlayerSystem.Instance.TargetArucoNumber == 0
                        ? "Face another player's marker to target Fireball"
                        : "Waiting for player connection";
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

using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using System.Xml;
using PDollarGestureRecognizer;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

// Run in batch mode with -executeMethod ArucoNumberSelectionChecks.RunBatch.
public static class ArucoNumberSelectionChecks
{
    private const BindingFlags PrivateInstance = BindingFlags.Instance | BindingFlags.NonPublic;

    public static void RunBatch()
    {
        try
        {
            ArucoNetworkChecks.Run();
            Run();
            EditorApplication.Exit(0);
        }
        catch (Exception exception)
        {
            Debug.LogException(exception);
            EditorApplication.Exit(1);
        }
    }

    [MenuItem("Tools/Tests/Check Aruco Number Selection")]
    public static void Run()
    {
        FieldInfo numberField = typeof(PlayerSystem).GetField("aruconum");
        Check(numberField != null && numberField.FieldType == typeof(int),
            "PlayerSystem must expose an int named aruconum.");

        PlayerSystem previousInstance = PlayerSystem.Instance;
        var playerObject = new GameObject("Number selection test player");
        var player = playerObject.AddComponent<PlayerSystem>();
        PlayerSystem.Instance = player;
        try
        {
            Check((int)numberField.GetValue(player) == 0, "A new session must start unselected.");
            TextAsset[] templates = Resources.LoadAll<TextAsset>("GestureSet/Digits");
            Check(templates.Length >= 4, "Digit templates must be bundled with the game.");
            var covered = new HashSet<int>();
            foreach (TextAsset template in templates)
            {
                Gesture example = GestureIO.ReadGestureFromXML(template.text);
                Check(int.TryParse(example.Name, out int expected) && expected >= 1 && expected <= 4,
                    "Only digits 1-4 belong in the startup template set.");
                covered.Add(expected);
                numberField.SetValue(player, 0);
                typeof(PlayerSystem).GetProperty("Signature").SetValue(player, null);
                WithController(controller =>
                {
                    Check(Status(controller).Contains("1, 2, 3, or 4"), "Startup must prompt for a digit.");
                    Set(controller, "minimumConfidence", 1.01f);
                    Draw(controller, ReadPoints(template.text));
                    Check((int)numberField.GetValue(player) == 0, "A low confidence result must not save a number.");
                    Set(controller, "minimumConfidence", 0.5f);
                    // Translation, scale and small drawing variation must preserve the digit.
                    List<Point> points = ReadPoints(template.text);
                    for (int i = 0; i < points.Count; i++)
                    {
                        points[i].X = points[i].X * 1.7f + 53f + (i % 3 - 1) * 0.2f;
                        points[i].Y = points[i].Y * 1.7f - 27f;
                    }
                    Draw(controller, points);
                    Check((int)numberField.GetValue(player) == expected,
                        $"Expected {expected} from {template.name}, got {numberField.GetValue(player)}.");
                    Check(Status(controller) == "Sign your name", "Number selection must prompt for a signature.");
                    Check(Get<GameObject>(controller, "signatureButtons").activeSelf, "Signing controls must be visible.");
                    controller.ConfirmSignature();
                    Check(!player.HasSignature, "Done must reject a blank signature.");
                    Draw(controller, ReadPoints(template.text));
                    Check(!player.HasSignature, "Pausing must not submit a signature.");
                    controller.ClearSignature();
                    Check(Get<List<Point>>(controller, "points").Count == 0, "Clear must reset the drawing.");
                    Get<List<Point>>(controller, "points").AddRange(ReadPoints(template.text));
                    controller.ConfirmSignature();
                    Check(player.HasSignature && Status(controller).Contains("Draw a spell"), "Done must save the signature then enable spells.");
                    Check(!Get<GameObject>(controller, "signatureButtons").activeSelf, "Signing controls must hide for spells.");
                    Draw(controller, new List<Point> { new Point(1, 1, 1) });
                    Check((int)numberField.GetValue(player) == expected, "Later drawing must preserve the chosen number.");
                });
            }
            Check(covered.Count == 4, "All four digits must be recognizable.");
            numberField.SetValue(player, 0);
            typeof(PlayerSystem).GetProperty("Signature").SetValue(player, null);
            WithController(controller =>
            {
                Draw(controller, new List<Point>(Stroke(5,30,15,10,35,0,60,5,70,20,65,35,
                    45,50,25,65,10,85,15,100,35,100,60,90,80,95)));
                Check(player.aruconum == 2, "A handwritten 2 with a curved tail must not be confused with 3.");
            });
            // Independent drawings, rather than exact copies of the saved examples.
            Point[][] drawings =
            {
                Stroke(48, 6, 49, 35, 47, 70, 48, 95),
                Stroke(12, 25, 25, 5, 60, 8, 78, 20, 80, 35, 15, 92, 88, 96),
                Stroke(12, 12, 35, 3, 62, 5, 78, 19, 70, 35, 48, 47,
                    72, 55, 82, 70, 77, 90, 55, 98, 30, 96, 12, 87),
                Stroke(65, 3, 13, 55, 84, 58, 68, 58, 67, 97)
            };
            for (int i = 0; i < drawings.Length; i++)
            {
                numberField.SetValue(player, 0);
                typeof(PlayerSystem).GetProperty("Signature").SetValue(player, null);
                int expected = i + 1;
                WithController(controller =>
                {
                    Draw(controller, new List<Point>(drawings[expected - 1]));
                    Check((int)numberField.GetValue(player) == expected,
                        $"Independent drawing of {expected} must select that number.");
                    // Finish signup before checking spell recognition.
                    Get<List<Point>>(controller, "points").AddRange(new[] { new Point(0, 0, 0), new Point(100, 80, 0) });
                    controller.ConfirmSignature();
                    // A spell must still use the spell template set after selection.
                    TextAsset star = Resources.Load<TextAsset>(
                        "GestureSet/10-stylus-MEDIUM/10-stylus-medium-five_point_star-01");
                    bool spellRecognized = false;
                    controller.OnGestureRecognized.AddListener((name, score) =>
                        spellRecognized = name == "five point star");
                    Draw(controller, ReadPoints(star.text));
                    Check(spellRecognized, "Spell recognition must work after number selection.");
                    Check((int)numberField.GetValue(player) == expected, "Casting must preserve the selected number.");
                });
            }
            numberField.SetValue(player, 0);
                typeof(PlayerSystem).GetProperty("Signature").SetValue(player, null);
            WithController(controller =>
            {
                Draw(controller, new List<Point> { new Point(1, 1, 1) });
                Check((int)numberField.GetValue(player) == 0, "A tap must not select a number.");
                Draw(controller, new List<Point> { new Point(1, 1, 1), new Point(1, 3, 1) });
                Check((int)numberField.GetValue(player) == 0, "A tiny nonzero stroke must not accidentally select 1.");
                Check(Status(controller).Contains("1, 2, 3, or 4"), "A rejected drawing must explain how to retry.");
                PlayerSystem.Instance = null;
                Draw(controller, ReadPoints(templates[0].text));
                Check((int)numberField.GetValue(player) == 0, "Missing PlayerSystem must not complete selection.");
                PlayerSystem.Instance = player;
                Draw(controller, ReadPoints(templates[0].text));
                int takenNumber = player.aruconum;
                player.ReceiveNetworkMessage($"{{\"message_id\":199,\"aruconum\":{takenNumber},\"code\":\"aruconum_in_use\"}}");
                Check(player.aruconum == 0, "An occupied number must return to number selection.");
                Check(Status(controller).Contains("already taken"), "The drawing area must explain number rejection.");
                Draw(controller, ReadPoints(templates[0].text));
                Check(player.aruconum == takenNumber, "The drawing area must accept a retry after server rejection.");
            });
            Debug.Log($"ARUCO CHECKS PASSED: {templates.Length} digit variants; startup, rejection, retry, storage and spell transition.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(playerObject);
            PlayerSystem.Instance = previousInstance;
        }
    }

    private static void WithController(Action<CastingAreaController> action)
    {
        var drawingObject = new GameObject("Number selection test area", typeof(RectTransform));
        try
        {
            CastingAreaController controller = drawingObject.AddComponent<CastingAreaController>();
            if (Get<Text>(controller, "statusText") == null)
                typeof(CastingAreaController).GetMethod("Awake", PrivateInstance).Invoke(controller, null);
            typeof(CastingAreaController).GetMethod("Start", PrivateInstance).Invoke(controller, null);
            action(controller);
        }
        finally
        {
            // These editor checks invoke Start manually, so pair it with teardown:
            // Unity does not run the usual play-mode lifecycle for these objects.
            CastingAreaController controller = drawingObject.GetComponent<CastingAreaController>();
            if (controller != null)
                typeof(CastingAreaController).GetMethod("OnDestroy", PrivateInstance).Invoke(controller, null);
            UnityEngine.Object.DestroyImmediate(drawingObject);
        }
    }

    private static void Draw(CastingAreaController controller, List<Point> drawing)
    {
        List<Point> points = Get<List<Point>>(controller, "points");
        points.Clear();
        points.AddRange(drawing);
        var recognition = (IEnumerator)typeof(CastingAreaController)
            .GetMethod("RecognizeAfterDelay", PrivateInstance).Invoke(controller, null);
        recognition.MoveNext(); // Skip the real-time pause in this synchronous editor check.
        recognition.MoveNext();
    }

    private static List<Point> ReadPoints(string xml)
    {
        var document = new XmlDocument();
        document.LoadXml(xml);
        var points = new List<Point>();
        int strokeId = 0;
        foreach (XmlNode stroke in document.SelectNodes("/Gesture/Stroke"))
        {
            foreach (XmlNode point in stroke.SelectNodes("Point"))
                points.Add(new Point(float.Parse(point.Attributes["X"].Value, System.Globalization.CultureInfo.InvariantCulture),
                    float.Parse(point.Attributes["Y"].Value, System.Globalization.CultureInfo.InvariantCulture), strokeId));
            strokeId++;
        }
        return points;
    }

    private static Point[] Stroke(params float[] coordinates)
    {
        var points = new Point[coordinates.Length / 2];
        for (int i = 0; i < points.Length; i++)
            points[i] = new Point(coordinates[i * 2], coordinates[i * 2 + 1], 0);
        return points;
    }

    private static string Status(CastingAreaController controller) => Get<Text>(controller, "statusText").text;
    private static T Get<T>(object target, string name) => (T)target.GetType().GetField(name, PrivateInstance).GetValue(target);
    private static void Set(object target, string name, object value) => target.GetType().GetField(name, PrivateInstance).SetValue(target, value);
    private static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }
}

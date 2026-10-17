using System;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Reflection;
using System.Text;
using PDollarGestureRecognizer;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public static class SignatureChecks
{
    private const BindingFlags PrivateInstance = BindingFlags.Instance | BindingFlags.NonPublic;
    public static void RunBatch()
    {
        try
        {
            Run();
            ArucoNetworkChecks.Run();
            ArucoNumberSelectionChecks.Run();
            EditorApplication.Exit(0);
        }
        catch (Exception exception)
        {
            Debug.LogException(exception);
            EditorApplication.Exit(1);
        }
    }

    [MenuItem("Tools/Tests/Check Signatures and Player Displays")]
    public static void Run()
    {
        Check(typeof(Player).GetField("signature")?.FieldType == typeof(int[]), "Player must store drawing points as signature.");
        Check(typeof(Player).GetField("name") == null, "Player must no longer store a string name.");
        Check(typeof(JoinMessage).GetField("signature")?.FieldType == typeof(int[]), "JOIN must carry drawing points.");
        Type dataType = typeof(Player).Assembly.GetType("SignatureData");
        var raw = new List<Point>();
        for (int stroke = 0; stroke < 2; stroke++)
            for (int i = 0; i < 300; i++)
                raw.Add(new Point(50 + i * 2, 30 + stroke * 100 + (float)Math.Sin(i * 0.04f) * 20, stroke + 4));
        var captured = (int[])dataType.GetMethod("FromPoints").Invoke(null, new object[] { raw });
        Check(captured.Length <= 192 && captured.Length >= 12, "Long drawings must fit 64 points without losing strokes.");
        Check((bool)dataType.GetMethod("IsValid").Invoke(null, new object[] { captured }), "Captured signature must satisfy wire validation.");
        Check(Array.Exists(captured, value => value == 1), "Separate strokes must survive compression.");
        raw[0].X = float.NaN;
        Check(dataType.GetMethod("FromPoints").Invoke(null, new object[] { raw }) == null, "Non-finite input must be rejected.");

        PlayerSystem previous = PlayerSystem.Instance;
        var obj = new GameObject("Signature player checks");
        var display = new GameObject("Test PlayerDisplay", typeof(RectTransform), typeof(Canvas));
        var player = obj.AddComponent<PlayerSystem>();
        PlayerSystem.Instance = player;
        TMP_Text nameLabel = Label(display, "name");
        TMP_Text idLabel = Label(display, "id");
        TMP_Text hpLabel = Label(display, "hpnum");
        display.GetComponent<Canvas>().enabled = false;
        player.playerDisplays = new[] { null, display, null, null };
        try
        {
            using (var receiver = new UdpClient(new IPEndPoint(IPAddress.Loopback, 0)))
            using (var sender = new UdpClient())
            {
                receiver.Client.ReceiveTimeout = 1000;
                sender.Connect((IPEndPoint)receiver.Client.LocalEndPoint);
                Set(player, "udp", sender);
                player.SelectArucoNumber(1);
                Check(!receiver.Client.Poll(50000, SelectMode.SelectRead), "Selecting a number must wait for the signature before JOIN.");
                MethodInfo submit = typeof(PlayerSystem).GetMethod("SubmitSignature");
                Check(!(bool)submit.Invoke(player, new object[] { new int[0] }), "Blank signatures must not submit.");
                Check((bool)submit.Invoke(player, new object[] { captured }), "A valid signature must submit.");
                IPEndPoint endpoint = null;
                byte[] packet = receiver.Receive(ref endpoint);
                Check(packet.Length <= 1200, "The actual Unity JOIN must fit the server datagram limit.");
                string json = Encoding.UTF8.GetString(packet);
                Check(json.Contains("\"signature\"") && !json.Contains("\"name\""), "JOIN must replace name with signature.");
                Set(player, "udp", null);
            }
            const string first = "[0,0,0,100,100,0,150,30,1,255,180,1]";
            const string second = "[0,0,0,255,255,0]";
            player.ReceiveNetworkMessage("{\"message_id\":101,\"revision\":1,\"aruconum\":1,\"players\":[{\"aruconum\":1,\"signature\":" + first + ",\"hp\":100},{\"aruconum\":2,\"signature\":" + first + ",\"hp\":80}]}");
            Check(idLabel.text == "2" && hpLabel.text == "80", "Display index 1 must show player number 2 and its HP.");
            Check(!nameLabel.enabled, "The signature must replace the old text name.");
            Component graphic = Array.Find(display.GetComponentsInChildren<Component>(true), item => item != null && item.GetType().Name == "SignatureGraphic");
            Check(graphic != null, "PlayerDisplay must render its signature.");
            using (var mesh = new VertexHelper())
            {
                graphic.GetType().GetMethod("OnPopulateMesh", PrivateInstance, null, new[] { typeof(VertexHelper) }, null).Invoke(graphic, new object[] { mesh });
                Check(mesh.currentVertCount == 8, "Two separate strokes must render two segments, with no joining line.");
            }
            Check(!display.GetComponent<Canvas>().enabled && display.activeSelf, "Data updates must preserve tracking visibility.");
            player.ReceiveNetworkMessage("{\"message_id\":103,\"revision\":2,\"player\":{\"aruconum\":2,\"signature\":" + second + ",\"hp\":65}}");
            Check(hpLabel.text == "65", "Updated player records must refresh the display.");
            Check(((int[])typeof(Player).GetField("signature").GetValue(player.GetPlayer(2))).Length == 6, "Signature updates must reach the player record.");
            player.ReceiveNetworkMessage("{\"message_id\":104,\"revision\":3,\"aruconum\":2}");
            Check(idLabel.text == "" && hpLabel.text == "", "Removed players must clear their labels.");
            using (var mesh = new VertexHelper())
            {
                graphic.GetType().GetMethod("OnPopulateMesh", PrivateInstance, null, new[] { typeof(VertexHelper) }, null).Invoke(graphic, new object[] { mesh });
                Check(mesh.currentVertCount == 0, "Removed players must clear their signature.");
            }
            CheckSigningInput(player);
            Debug.Log("SIGNATURE CHECKS PASSED: compression, stroke separation, delayed join, wire size and PlayerDisplay refresh/removal.");
        }
        finally
        {
            Set(player, "udp", null);
            UnityEngine.Object.DestroyImmediate(display);
            UnityEngine.Object.DestroyImmediate(obj);
            PlayerSystem.Instance = previous;
        }
    }

    private static void CheckSigningInput(PlayerSystem player)
    {
        typeof(PlayerSystem).GetProperty("Signature").SetValue(player, null);
        var area = new GameObject("Signature input checks", typeof(RectTransform));
        var controller = area.AddComponent<CastingAreaController>();
        try
        {
            if (Get<Text>(controller, "statusText") == null)
                typeof(CastingAreaController).GetMethod("Awake", PrivateInstance).Invoke(controller, null);
            typeof(CastingAreaController).GetMethod("Start", PrivateInstance).Invoke(controller, null);
            var pointer = new PointerEventData(null);
            pointer.position = new Vector2(10, 40); controller.OnPointerDown(pointer);
            pointer.position = new Vector2(80, 70); controller.OnDrag(pointer);
            pointer.position = new Vector2(130, 90); controller.OnPointerUp(pointer);
            int firstCount = Get<List<Point>>(controller, "points").Count;
            Check(firstCount >= 2 && !player.HasSignature, "Releasing a signature stroke must keep it unsubmitted.");
            Check(Get<Coroutine>(controller, "recognitionCoroutine") == null, "Signature strokes must not start idle recognition.");
            pointer.position = new Vector2(200, 80); controller.OnPointerDown(pointer);
            pointer.position = new Vector2(260, 110); controller.OnPointerUp(pointer);
            Check(Get<List<Point>>(controller, "points").Count > firstCount, "A later stroke must retain the first stroke.");
            GameObject buttons = Get<GameObject>(controller, "signatureButtons");
            buttons.transform.Find("Clear").GetComponent<Button>().onClick.Invoke();
            Check(Get<List<Point>>(controller, "points").Count == 0, "Clear button must discard the entire signature.");
            pointer.position = new Vector2(10, 40); controller.OnPointerDown(pointer);
            pointer.position = new Vector2(130, 90); controller.OnPointerUp(pointer);
            buttons.transform.Find("Done").GetComponent<Button>().onClick.Invoke();
            Check(player.HasSignature && !buttons.activeSelf, "Done button must save the drawing and hide signature controls.");
            player.ReceiveNetworkMessage("{\"message_id\":199,\"aruconum\":1,\"code\":\"invalid_signature\"}");
            Check(!player.HasSignature && buttons.activeSelf, "Server rejection must reopen signing.");
        }
        finally
        {
            typeof(CastingAreaController).GetMethod("OnDestroy", PrivateInstance).Invoke(controller, null);
            UnityEngine.Object.DestroyImmediate(area);
        }
    }

    public static void PreviewBatch()
    {
        try
        {
            var playerObject = new GameObject("Preview player");
            var player = playerObject.AddComponent<PlayerSystem>();
            PlayerSystem.Instance = player;
            player.SelectArucoNumber(1);
            var cameraObject = new GameObject("Preview camera", typeof(Camera));
            Camera camera = cameraObject.GetComponent<Camera>();
            camera.orthographic = true;
            camera.orthographicSize = 2.25f;
            camera.transform.position = new Vector3(0, 0, -10);
            camera.clearFlags = CameraClearFlags.SolidColor;
            camera.backgroundColor = new Color(0.035f, 0.055f, 0.09f);
            var canvasObject = new GameObject("Preview canvas", typeof(RectTransform), typeof(Canvas));
            Canvas canvas = canvasObject.GetComponent<Canvas>();
            canvas.renderMode = RenderMode.WorldSpace;
            canvas.worldCamera = camera;
            var rootRect = (RectTransform)canvasObject.transform;
            rootRect.sizeDelta = new Vector2(800, 450);
            rootRect.localScale = Vector3.one * 0.01f;
            var area = new GameObject("Casting area", typeof(RectTransform), typeof(Image));
            var areaRect = (RectTransform)area.transform;
            areaRect.SetParent(rootRect, false);
            areaRect.sizeDelta = new Vector2(740, 390);
            area.GetComponent<Image>().color = new Color(0.075f, 0.11f, 0.17f);
            var controller = area.AddComponent<CastingAreaController>();
            if (Get<Text>(controller, "statusText") == null)
                typeof(CastingAreaController).GetMethod("Awake", PrivateInstance).Invoke(controller, null);
            var signatureObject = new GameObject("Signature preview", typeof(RectTransform), typeof(CanvasRenderer), typeof(SignatureGraphic));
            var signatureRect = (RectTransform)signatureObject.transform;
            signatureRect.SetParent(areaRect, false);
            signatureRect.sizeDelta = new Vector2(600, 210);
            signatureRect.anchoredPosition = new Vector2(0, 10);
            var signature = signatureObject.GetComponent<SignatureGraphic>();
            signature.color = Color.white;
            // Hand-drawn multi-stroke preview with separate dotted marks.
            signature.SetSignature(new[] { 0,120,0, 15,15,0, 30,135,0, 45,65,0, 70,130,0,
                90,70,0, 110,135,0, 135,85,0, 150,135,0, 170,85,0, 185,125,0, 205,95,0,
                225,130,0, 250,100,0, 140,30,1, 210,45,2 });
            signatureRect.SetAsFirstSibling();
            Canvas.ForceUpdateCanvases();
            var target = new RenderTexture(1280, 720, 24);
            camera.targetTexture = target;
            camera.Render();
            RenderTexture.active = target;
            var image = new Texture2D(1280, 720, TextureFormat.RGB24, false);
            image.ReadPixels(new Rect(0, 0, 1280, 720), 0, 0);
            image.Apply();
            string path = System.IO.Path.GetFullPath("../signature-preview.png");
            System.IO.File.WriteAllBytes(path, image.EncodeToPNG());
            Debug.Log("SIGNATURE PREVIEW: " + path);
            RenderTexture.active = null;
            camera.targetTexture = null;
            UnityEngine.Object.DestroyImmediate(image);
            UnityEngine.Object.DestroyImmediate(target);
            UnityEngine.Object.DestroyImmediate(canvasObject);
            UnityEngine.Object.DestroyImmediate(cameraObject);
            UnityEngine.Object.DestroyImmediate(playerObject);
            EditorApplication.Exit(0);
        }
        catch (Exception exception)
        {
            Debug.LogException(exception);
            EditorApplication.Exit(1);
        }
    }

    private static TMP_Text Label(GameObject parent, string name)
    {
        var child = new GameObject(name, typeof(RectTransform), typeof(TextMeshProUGUI));
        child.transform.SetParent(parent.transform, false);
        ((RectTransform)child.transform).sizeDelta = new Vector2(400, 100);
        return child.GetComponent<TMP_Text>();
    }
    private static void Set(object target, string name, object value) => target.GetType().GetField(name, PrivateInstance).SetValue(target, value);
    private static T Get<T>(object target, string name) => (T)target.GetType().GetField(name, PrivateInstance).GetValue(target);
    private static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }
}

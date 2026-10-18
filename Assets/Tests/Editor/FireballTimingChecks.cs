using System;
using UnityEditor;
using UnityEngine;

public static class FireballTimingChecks
{
    static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }

    [MenuItem("Tools/Tests/Fireball Timing")]
    public static void Run()
    {
        var obj = new GameObject("Fireball timing check", typeof(FireballObject));
        try
        {
            var ball = obj.GetComponent<FireballObject>();
            ball.Initialize(new Vector3(10, 0, 0), null);
            ball.Advance(1);
            Check(Vector3.Distance(obj.transform.position, new Vector3(5, 0, 0)) < 0.001f,
                "At one second a fireball must be halfway to its target, regardless of distance.");
            ball.Advance(0.999f);
            Check(obj != null, "Fireball must remain in flight until two seconds.");
            ball.Advance(0.0011f);
            Check(obj == null, "Fireball must disappear at its two-second impact.");
        }
        finally { if (obj) UnityEngine.Object.DestroyImmediate(obj); }

        var root = new GameObject("Incoming warning checks");
        PlayerSystem previous = PlayerSystem.Instance;
        GameObject warning = null;
        try
        {
            var system = root.AddComponent<PlayerSystem>();
            PlayerSystem.Instance = system;
            system.aruconum = 1;
            system.ReceiveNetworkMessage("{\"message_id\":101,\"aruconum\":1,\"revision\":1,\"players\":[{\"aruconum\":1,\"hp\":100,\"signature\":[0,0,0,255,100,0]},{\"aruconum\":2,\"hp\":100,\"signature\":[0,0,0,255,100,0]}]}");
            var asset = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/FireballWarning.prefab");
            Check(asset != null, "Warning UI prefab must be saved in Assets/Prefabs.");
            system.fireballWarningPrefab = asset;
            system.ReceiveNetworkMessage("{\"message_id\":1001,\"aruconum\":1,\"data\":\"Fireball\",\"target\":2}");
            Check(system.IncomingFireballCount == 0,
                "Casting at someone else must not warn the caster.");
            system.ReceiveNetworkMessage("{\"message_id\":1001,\"aruconum\":2,\"data\":\"Fireball\",\"target\":1}");
            warning = system.FireballWarning;
            Check(warning && warning.activeSelf, "Incoming fireball warns even without a tracked caster display.");
            Check(warning.GetComponentInChildren<TMPro.TMP_Text>().text == "Fireball!", "Warning uses exact Fireball! text.");
            Check(warning.GetComponent<Canvas>().renderMode == RenderMode.ScreenSpaceOverlay,
                "Warning must be screen UI, independent of AR camera tracking.");
            var banner = warning.transform.Find("Banner") as RectTransform;
            Check(banner && banner.anchorMin.y == 1 && banner.anchorMax.y == 1 && banner.pivot.y == 1,
                "Authored warning banner must be anchored at the top of the screen.");
            Action<float> advance = system.AdvanceFireballWarnings;
            advance(1);
            system.ReceiveNetworkMessage("{\"message_id\":1001,\"aruconum\":2,\"data\":\"Fireball\",\"target\":1}");
            advance(1);
            Check(warning.activeSelf && system.IncomingFireballCount == 1,
                "Warning stays visible for a later incoming fireball.");
            advance(1);
            Check(!warning.activeSelf, "Warning disappears after the last two-second flight.");
            Check(system.LocalPlayer.hp == 100, "Client warning timers never change authoritative HP.");
            Debug.Log("FIREBALL TIMING CHECKS PASSED: two-second flight, prefab warning, independent incoming casts, server-owned HP.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(root);
            if (warning) UnityEngine.Object.DestroyImmediate(warning);
            PlayerSystem.Instance = previous;
        }
    }
}

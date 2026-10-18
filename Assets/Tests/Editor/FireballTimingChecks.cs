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

        var prefab = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/fireball_0.prefab");
        var explosion = UnityEngine.Object.Instantiate(prefab);
        try
        {
            var ball = explosion.GetComponent<FireballObject>();
            if (!ball) ball = explosion.AddComponent<FireballObject>();
            var particles = explosion.GetComponentInChildren<ParticleSystem>(true);
            Check(particles != null, "Fireball prefab must include explosion particles.");
            ball.Initialize(Vector3.one, null);
            ball.Advance(1);
            Check(!particles.gameObject.activeSelf, "Explosion stays inactive during flight.");
            ball.Advance(1);
            Check(explosion && particles.gameObject.activeSelf && particles.isPlaying,
                "Impact activates the explosion and keeps it alive.");
            Check(!explosion.GetComponentInChildren<SpriteRenderer>(true).enabled,
                "Flying sprite disappears at impact.");
            particles.Stop(true, ParticleSystemStopBehavior.StopEmittingAndClear);
            ball.Advance(0);
            Check(!explosion, "Fireball is removed after its particles finish.");
        }
        finally { if (explosion) UnityEngine.Object.DestroyImmediate(explosion); }

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
            Check(warning.GetComponentInChildren<TMPro.TMP_Text>().text == "Fireball Incoming", "Warning uses Fireball Incoming text.");
            var slider = warning.GetComponentInChildren<UnityEngine.UI.Slider>();
            Check(slider && slider.value == 2 && !slider.interactable, "Incoming countdown starts at two seconds.");
            Check(warning.GetComponent<Canvas>().renderMode == RenderMode.ScreenSpaceOverlay,
                "Warning must be screen UI, independent of AR camera tracking.");
            var banner = warning.transform.Find("Banner") as RectTransform;
            Check(banner && banner.anchorMin.y == 1 && banner.anchorMax.y == 1 && banner.pivot.y == 1,
                "Authored warning banner must be anchored at the top of the screen.");
            Action<float> advance = system.AdvanceFireballWarnings;
            advance(1);
            Check(Mathf.Abs(slider.normalizedValue - 0.5f) < 0.001f, "Incoming countdown is half full after one second.");
            system.ReceiveNetworkMessage("{\"message_id\":1001,\"aruconum\":2,\"data\":\"Fireball\",\"target\":1}");
            Check(slider.value == 1, "A later fireball does not reset the next-impact countdown.");
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

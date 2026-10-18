using System;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public static class DefenseMessageChecks
{
    static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }

    [MenuItem("Tools/Tests/Defense Messages")]
    public static void Run()
    {
        PlayerSystem previous = PlayerSystem.Instance;
        var root = new GameObject("Defense message checks");
        try
        {
            var system = root.AddComponent<PlayerSystem>();
            PlayerSystem.Instance = system;
            system.aruconum = 1;
            var shield = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/defendmessage.prefab");
            var reflect = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/reflectmessage.prefab");
            Check(shield && reflect, "Authored message prefabs must be available.");
            var field = typeof(PlayerSystem).GetField("defendMessage");
            Check(field != null, "Local defenses must instantiate their authored message prefab.");
            field.SetValue(system, shield);
            typeof(PlayerSystem).GetField("reflectMessage").SetValue(system, reflect);
            system.ReceiveNetworkMessage("{\"message_id\":101,\"aruconum\":1,\"revision\":1,\"players\":[{\"aruconum\":1,\"hp\":100,\"signature\":[0,0,0,255,100,0]},{\"aruconum\":2,\"hp\":100,\"signature\":[0,0,0,255,100,0]}]}");
            Func<GameObject> message = () => (GameObject)typeof(PlayerSystem).GetProperty("DefenseMessage").GetValue(system);
            Action<int, string> cast = (number, spell) => system.ReceiveNetworkMessage(
                "{\"message_id\":1001,\"aruconum\":" + number + ",\"data\":\"" + spell + "\"}");
            cast(2, "Shield");
            Check(!message(), "A remote defensive cast must not show a local message.");
            cast(1, "Shield");
            var first = message();
            Check(first && first.name.StartsWith(shield.name), "Local Shield displays defendmessage even without AR tracking.");
            var slider = first.GetComponentInChildren<Slider>(true);
            Check(slider && !slider.interactable && Mathf.Abs(slider.normalizedValue - 1) < 0.001f,
                "Remaining-time slider starts full and cannot be dragged.");
            system.AdvanceDefenseEffects(0.5f);
            Check(Mathf.Abs(slider.normalizedValue - 0.75f) < 0.001f, "Slider shows 75% after half a second.");
            system.AdvanceDefenseEffects(0.5f);
            Check(Mathf.Abs(slider.normalizedValue - 0.5f) < 0.001f, "Slider shows half the two-second window.");
            cast(1, "Shield");
            Check(message() == first && Mathf.Abs(slider.normalizedValue - 1) < 0.001f,
                "Recasting resets the same message to full without stacking UI.");
            cast(2, "Reflect");
            Check(message() == first, "A remote Reflect cast leaves the local Shield message alone.");
            system.AdvanceDefenseEffects(1); system.AdvanceDefenseEffects(1);
            Check(!first && !message(), "Message disappears when its defense expires after two seconds.");
            cast(1, "Shield"); first = message();
            system.AdvanceDefenseEffects(0.5f);
            cast(1, "Reflect");
            var second = message();
            Check(!first && second && second.name.StartsWith(reflect.name), "Reflect replaces the Shield message using reflectmessage.");
            slider = second.GetComponentInChildren<Slider>(true);
            Check(Mathf.Abs(slider.normalizedValue - 1) < 0.001f, "Switching starts a fresh two-second countdown.");
            system.AdvanceDefenseEffects(1);
            Check(Mathf.Abs(slider.normalizedValue - 0.5f) < 0.001f, "Reflect slider also counts down.");
            system.AdvanceDefenseEffects(1);
            Check(!second && !message(), "Reflect message also disappears after two seconds.");
            cast(1, "Shield"); first = message();
            system.ReceiveNetworkMessage("{\"message_id\":104,\"revision\":2,\"aruconum\":1}");
            Check(!first && !message(), "Removing the local player clears the message.");
            Debug.Log("DEFENSE MESSAGE CHECKS PASSED: local-only prefabs, slider countdown, recast, switch, expiry and cleanup.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(root);
            PlayerSystem.Instance = previous;
        }
    }
}

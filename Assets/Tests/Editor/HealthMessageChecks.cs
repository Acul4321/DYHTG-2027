using System;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;

public static class HealthMessageChecks
{
    static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }

    [MenuItem("Tools/Tests/Health Messages")]
    public static void Run()
    {
        var previous = PlayerSystem.Instance;
        var root = new GameObject("Health checks");
        try
        {
            var system = root.AddComponent<PlayerSystem>();
            system.aruconum = 1;
            var label = new GameObject("HP", typeof(RectTransform), typeof(TextMeshProUGUI));
            label.transform.SetParent(root.transform);
            system.hp = label.GetComponent<TMP_Text>();
            var bar = new GameObject("HP slider", typeof(RectTransform), typeof(Slider));
            bar.transform.SetParent(root.transform);
            system.hpslider = bar.GetComponent<Slider>();
            system.ReceiveNetworkMessage("{\"message_id\":101,\"aruconum\":1,\"revision\":1,\"players\":[{\"aruconum\":1,\"hp\":100,\"signature\":[0,0,0,255,100,0]},{\"aruconum\":2,\"hp\":100,\"signature\":[0,0,0,255,100,0]}]}");
            Check(system.hp.text == "100" && system.hpslider.value == 100, "Snapshot initializes local health UI.");
            var player = system.LocalPlayer;
            system.ReceiveNetworkMessage("{\"message_id\":1002,\"aruconum\":1,\"hp\":50,\"revision\":2}");
            Check(player == system.LocalPlayer && player.hp == 50, "Health message updates the existing player object.");
            Check(system.hp.text == "50" && system.hpslider.normalizedValue == 0.5f, "Local health text and slider show half health.");
            system.ReceiveNetworkMessage("{\"message_id\":1002,\"aruconum\":2,\"hp\":25,\"revision\":3}");
            Check(system.GetPlayer(2).hp == 25 && system.hp.text == "50", "Remote health does not change local UI.");
            system.ReceiveNetworkMessage("{\"message_id\":1002,\"aruconum\":1,\"hp\":100,\"revision\":2}");
            Check(player.hp == 50, "Stale health updates are ignored.");
            system.ReceiveNetworkMessage("{\"message_id\":1002,\"aruconum\":1,\"hp\":100,\"deaths\":1,\"revision\":4}");
            Check(system.hp.text == "100" && system.hpslider.value == 100 && player.deaths == 1,
                "Respawn update restores HP and syncs the death count.");
            var display = UnityEngine.Object.Instantiate(AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/PlayerDisplay.prefab"), root.transform);
            var view = display.GetComponent<PlayerDisplayView>();
            if (!view) view = display.AddComponent<PlayerDisplayView>();
            view.SetPlayer(player);
            Check(display.transform.Find("deaths").GetComponent<TMP_Text>().text == "Deaths: 1",
                "Player display shows the synced death count.");
            system.ReceiveNetworkMessage("{\"message_id\":104,\"aruconum\":1,\"revision\":5}");
            Check(system.hp.text == "" && system.hpslider.value == 0, "Leaving clears local health.");
            Debug.Log("HEALTH MESSAGE CHECKS PASSED: snapshot, player mutation, local UI, remote UI isolation, stale updates, zero HP and removal.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(root);
            PlayerSystem.Instance = previous;
        }
    }
}

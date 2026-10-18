using System;
using System.Reflection;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEditor;
using UnityEngine;
using SpellBattle.Tracking;

public static class SpellTargetingChecks
{
    static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }

    [MenuItem("Tools/Tests/Spell Targeting")]
    public static void Run()
    {
        PlayerSystem previous = PlayerSystem.Instance;
        var root = new GameObject("Targeting checks");
        var cameraObject = new GameObject("Target camera", typeof(Camera));
        var displays = new GameObject[4];
        GameObject prefab = null;
        FireballObject projectile = null;
        try
        {
            var system = root.AddComponent<PlayerSystem>();
            PlayerSystem.Instance = system;
            system.aruconum = 1;
            for (int i = 0; i < 4; i++)
            {
                displays[i] = new GameObject("Display " + i, typeof(RectTransform), typeof(Canvas), typeof(PlayerDisplayView));
                displays[i].GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
                displays[i].GetComponent<RectTransform>().sizeDelta = new Vector2(200, 40);
            }
            system.playerDisplays = displays;
            system.targetIndicatorPrefab = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/TargetIndicator.prefab");
            system.ReceiveNetworkMessage("{\"message_id\":101,\"aruconum\":1,\"revision\":1,\"players\":[{\"aruconum\":1,\"hp\":100,\"signature\":[0,0,0,255,100,0]},{\"aruconum\":2,\"hp\":100,\"signature\":[0,0,0,255,100,0]},{\"aruconum\":3,\"hp\":100,\"signature\":[0,0,0,255,100,0]}]}");
            Camera camera = cameraObject.GetComponent<Camera>();
            camera.aspect = 1;
            var presenter = new ArucoPlayerDisplayPresenter(displays, camera, 0, 0.2f, 0.35f, 12);
            presenter.Observe(0, new Pose(new Vector3(0, 0, 2), Quaternion.identity), 0);
            presenter.Observe(1, new Pose(new Vector3(0.1f, 0, 2), Quaternion.identity), 0);
            presenter.Observe(2, new Pose(new Vector3(0.8f, 0, 2), Quaternion.identity), 0);
            presenter.Tick(0, 0.016f);
            Action refresh = () => system.UpdateTarget(camera, presenter);
            Func<int> target = () => system.TargetArucoNumber;
            refresh();
            Check(target() == 2, "Choose centred opponent, excluding the local marker.");
            Check(displays[1].transform.Find("TargetIndicator").gameObject.activeSelf, "Selected display shows !.");
            Check(!displays[2].transform.Find("TargetIndicator").gameObject.activeSelf, "Only one display shows !.");
            presenter.Observe(1, new Pose(new Vector3(0, 0, -2), Quaternion.identity), 0.1f);
            presenter.Tick(0.1f, 1);
            refresh();
            Check(target() == 3, "Never select a marker behind the camera.");
            presenter.Tick(1, 1);
            refresh();
            Check(target() == 3, "Lost tracking retains targeting at the last known position.");
            Check(displays[2].transform.Find("TargetIndicator").gameObject.activeSelf, "Retained target keeps ! visible.");
            presenter.Reset(); refresh();
            Check(target() == 0, "A full tracking reset clears stored targets.");
            Check(!system.TryCastSpell("Fireball"), "Fireball without a target is blocked.");

            presenter.Observe(1, new Pose(new Vector3(0, 0, 2), Quaternion.identity), 2);
            presenter.Tick(2, 1); refresh();
            system.SubmitSignature(new[] { 0, 0, 0, 255, 100, 0 });
            using (var receiver = new UdpClient(new IPEndPoint(IPAddress.Loopback, 0)))
            using (var sender = new UdpClient())
            {
                receiver.Client.ReceiveTimeout = 1000;
                sender.Connect((IPEndPoint)receiver.Client.LocalEndPoint);
                FieldInfo udp = typeof(PlayerSystem).GetField("udp", BindingFlags.NonPublic | BindingFlags.Instance);
                udp.SetValue(system, sender);
                try
                {
                    Check(system.TryCastSpell("Fireball"), "Valid targeted Fireball is sent.");
                    IPEndPoint endpoint = null;
                    var packet = JsonUtility.FromJson<NetworkSendObject>(Encoding.UTF8.GetString(receiver.Receive(ref endpoint)));
                    Check(packet.message_id == 1001 && packet.aruconum == 1 && packet.data == "Fireball"
                        && packet.target == 2, "UDP cast preserves caster and selected target.");
                    foreach (string defense in new[] { "Shield", "Reflect" })
                    {
                        Check(system.TryCastSpell(defense), "Defensive spells can be cast while facing an opponent.");
                        packet = JsonUtility.FromJson<NetworkSendObject>(Encoding.UTF8.GetString(receiver.Receive(ref endpoint)));
                        Check(packet.data == defense && packet.target == 0,
                            "Defensive spells protect the caster and must not depend on the faced opponent.");
                    }
                    presenter.Reset(); refresh();
                    Check(!system.TryCastSpell("Fireball")
                        && !receiver.Client.Poll(50000, SelectMode.SelectRead), "No datagram is sent after losing target.");
                    foreach (string defense in new[] { "Shield", "Reflect" })
                    {
                        Check(system.TryCastSpell(defense), "Defense must work without a tracked opponent.");
                        packet = JsonUtility.FromJson<NetworkSendObject>(Encoding.UTF8.GetString(receiver.Receive(ref endpoint)));
                        Check(packet.data == defense && packet.target == 0, "Untargeted defense still sends to the server.");
                    }
                }
                finally { udp.SetValue(system, null); }
            }
            presenter.Observe(1, new Pose(new Vector3(0, 0, 2), Quaternion.identity), 3);
            presenter.Tick(3, 1); refresh();
            prefab = new GameObject("Test fireball", typeof(FireballObject));
            system.fireballPrefab = prefab;
            projectile = system.SpawnFireball(1, 2);
            Check(projectile != null, "Local cast spawns a projectile.");
            Check(Vector3.Distance(projectile.transform.position, camera.transform.position) < 0.5f, "Local projectile starts near the camera.");
            Vector3 end = displays[1].transform.position;
            float before = Vector3.Distance(projectile.transform.position, end);
            projectile.Advance(0.1f);
            Check(Vector3.Distance(projectile.transform.position, end) < before, "Fireball moves toward the cast target.");
            UnityEngine.Object.DestroyImmediate(projectile.gameObject); projectile = null;
            projectile = system.SpawnFireball(2, 1);
            Check(projectile != null && Vector3.Distance(projectile.transform.position, displays[1].transform.position) < 0.5f, "Remote cast starts near caster display, including when aimed at local player.");
            UnityEngine.Object.DestroyImmediate(projectile.gameObject); projectile = null;
            int count = UnityEngine.Object.FindObjectsByType<FireballObject>(FindObjectsSortMode.None).Length;
            system.ReceiveNetworkMessage("{\"message_id\":1001,\"aruconum\":1,\"data\":\"Fireball\",\"target\":2}");
            var objects = UnityEngine.Object.FindObjectsByType<FireballObject>(FindObjectsSortMode.None);
            foreach (var item in objects) if (item.gameObject != prefab) projectile = item;
            Check(objects.Length == count + 1 && projectile != null, "Server confirmation preserves target and spawns exactly one fireball.");
            system.ReceiveNetworkMessage("{\"message_id\":104,\"revision\":2,\"aruconum\":2}");
            Check(target() == 0, "Disconnected player is immediately untargeted.");
            Debug.Log("SPELL TARGETING CHECKS PASSED: facing, self exclusion, indicator, tracking loss, cast guard and local/remote fireballs.");
        }
        finally
        {
            if (projectile) UnityEngine.Object.DestroyImmediate(projectile.gameObject);
            if (prefab) UnityEngine.Object.DestroyImmediate(prefab);
            foreach (var display in displays) if (display) UnityEngine.Object.DestroyImmediate(display);
            UnityEngine.Object.DestroyImmediate(root);
            UnityEngine.Object.DestroyImmediate(cameraObject);
            PlayerSystem.Instance = previous;
        }
    }
}

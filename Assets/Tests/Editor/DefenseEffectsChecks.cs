using System;
using UnityEditor;
using UnityEngine;
using SpellBattle.Tracking;

public static class DefenseEffectsChecks
{
    static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }

    [MenuItem("Tools/Tests/Defense Effects")]
    public static void Run()
    {
        PlayerSystem previous = PlayerSystem.Instance;
        var root = new GameObject("Defense effect checks");
        var cameraObject = new GameObject("Defense camera", typeof(Camera));
        var displays = new GameObject[2];
        try
        {
            var system = root.AddComponent<PlayerSystem>();
            PlayerSystem.Instance = system;
            system.aruconum = 1;
            var shield = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/shield_0.prefab");
            var reflect = AssetDatabase.LoadAssetAtPath<GameObject>("Assets/Prefabs/reflect_0.prefab");
            Check(shield && reflect, "Existing shield and reflect prefabs must be available.");
            system.shieldPrefab = shield;
            system.reflectPrefab = reflect;
            for (int i = 0; i < displays.Length; i++)
            {
                displays[i] = new GameObject("Defense display " + i, typeof(RectTransform), typeof(Canvas));
                displays[i].GetComponent<Canvas>().renderMode = RenderMode.WorldSpace;
                displays[i].GetComponent<RectTransform>().sizeDelta = new Vector2(200, 40);
            }
            system.playerDisplays = displays;
            system.ReceiveNetworkMessage("{\"message_id\":101,\"aruconum\":1,\"revision\":1,\"players\":[{\"aruconum\":1,\"hp\":100,\"signature\":[0,0,0,255,100,0]},{\"aruconum\":2,\"hp\":100,\"signature\":[0,0,0,255,100,0]}]}");
            Camera camera = cameraObject.GetComponent<Camera>();
            var presenter = new ArucoPlayerDisplayPresenter(displays, camera, 0, 0.2f, 0.35f, 12);
            presenter.Observe(1, new Pose(new Vector3(0, 0, 2), Quaternion.identity), 0);
            presenter.Tick(0, 0.016f);
            system.UpdateTarget(camera, presenter);
            Action<int, string> cast = (number, spell) => system.ReceiveNetworkMessage(
                "{\"message_id\":1001,\"aruconum\":" + number + ",\"data\":\"" + spell + "\"}");
            Func<int, GameObject> effect = system.GetDefenseEffect;
            Action<float> advance = system.AdvanceDefenseEffects;
            cast(1, "Shield"); cast(2, "Reflect");
            var local = effect(1); var remote = effect(2);
            Check(local && remote && local != remote, "Every caster gets their own defense effect.");
            var reflectBounds = remote.GetComponentInChildren<SpriteRenderer>().bounds.size;
            Check(Mathf.Abs(Mathf.Max(reflectBounds.x, reflectBounds.y, reflectBounds.z) - system.reflectSizeMetres) < 0.001f,
                "Reflect uses its own smaller world-space size.");
            Check(local.GetComponentInChildren<SpriteRenderer>().sprite == shield.GetComponentInChildren<SpriteRenderer>().sprite,
                "Local Shield instantiates the authored Shield prefab.");
            Check(remote.GetComponentInChildren<SpriteRenderer>().sprite == reflect.GetComponentInChildren<SpriteRenderer>().sprite,
                "Remote Reflect instantiates the authored Reflect prefab.");
            Check(Vector3.Distance(local.transform.position, camera.transform.position) < 1,
                "Local effect appears in front of the local camera.");
            Check(Vector3.Distance(remote.transform.position, displays[1].transform.position) < 0.5f,
                "Remote effect appears at the remote player display.");
            Vector3 remotePosition = remote.transform.position;
            foreach (var animator in remote.GetComponentsInChildren<Animator>())
            {
                animator.Rebind();
                animator.Update(0.1f);
            }
            reflectBounds = remote.GetComponentInChildren<SpriteRenderer>().bounds.size;
            Check(Mathf.Max(reflectBounds.x, reflectBounds.y, reflectBounds.z) <= system.reflectSizeMetres * 1.3f,
                "Reflect animation must preserve its small world size.");
            Check(remote.transform.position == remotePosition && Vector3.Distance(remotePosition, camera.transform.position) > 1,
                "Remote Reflect animation stays at its caster and never moves to the local camera.");
            Vector3 oldLocal = local.transform.position, oldRemote = remote.transform.position;
            camera.transform.position += Vector3.right;
            displays[1].transform.position += Vector3.right;
            advance(0.5f);
            Check(Vector3.Distance(local.transform.position, oldLocal + Vector3.right) < 0.001f
                && Vector3.Distance(remote.transform.position, oldRemote + Vector3.right) < 0.001f,
                "Effects follow both camera and remote display movement.");
            cast(2, "Shield");
            Check(!remote && effect(2), "Switching defense removes the previous visual.");
            advance(1.5f);
            Check(!effect(1) && effect(2), "Each caster's effect lasts its own two seconds.");
            advance(0.5f);
            Check(!effect(2), "Remote effect disappears at two seconds.");
            cast(1, "Reflect"); advance(1); cast(1, "Reflect"); advance(1.5f);
            Check(effect(1), "Recasting refreshes the effect's two-second timer.");
            advance(0.5f); Check(!effect(1), "Refreshed effect expires.");
            cast(2, "Reflect"); remote = effect(2);
            presenter.Reset(); system.UpdateTarget(camera, presenter); advance(0);
            Check(remote && !remote.activeSelf, "Remote defense is hidden when its marker is lost.");
            presenter.Observe(1, new Pose(new Vector3(0, 0, 3), Quaternion.identity), 1);
            presenter.Tick(1, 0.016f); system.UpdateTarget(camera, presenter); advance(0);
            Check(remote.activeSelf, "An active remote defense reappears when tracking returns.");
            system.ReceiveNetworkMessage("{\"message_id\":104,\"revision\":2,\"aruconum\":2}");
            Check(!effect(2), "Removing a player removes their defense visual.");
            Debug.Log("DEFENSE EFFECT CHECKS PASSED: local/remote prefabs, following, switching, recasting, expiry and tracking loss.");
        }
        finally
        {
            UnityEngine.Object.DestroyImmediate(root);
            foreach (var display in displays) if (display) UnityEngine.Object.DestroyImmediate(display);
            UnityEngine.Object.DestroyImmediate(cameraObject);
            PlayerSystem.Instance = previous;
        }
    }
}

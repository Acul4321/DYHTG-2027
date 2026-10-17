using System;
using System.Net;
using System.Net.Sockets;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

public static class ArucoNetworkChecks
{
    private const BindingFlags PrivateInstance = BindingFlags.Instance | BindingFlags.NonPublic;

    public static void Run()
    {
        foreach (Type type in new[] { typeof(Player), typeof(NetworkSendObject), typeof(SnapshotMessage), typeof(LobbyRequestMessage) })
        {
            Check(type.GetField("aruconum")?.FieldType == typeof(int), $"{type.Name} must use integer aruconum.");
            Check(type.GetField("device_id") == null, $"{type.Name} must not send a machine ID.");
        }

        PlayerSystem previous = PlayerSystem.Instance;
        var obj = new GameObject("Network identity checks");
        var player = obj.AddComponent<PlayerSystem>();
        PlayerSystem.Instance = player;
        using (var receiver = new UdpClient(new IPEndPoint(IPAddress.Loopback, 0)))
        using (var sender = new UdpClient())
        {
            receiver.Client.ReceiveTimeout = 1000;
            sender.Connect((IPEndPoint)receiver.Client.LocalEndPoint);
            Set(player, "udp", sender);
            try
            {
                ((Task)typeof(PlayerSystem).GetMethod("SendJoinMessage", PrivateInstance).Invoke(player, null)).GetAwaiter().GetResult();
                Check(!receiver.Client.Poll(50000, SelectMode.SelectRead), "Must not JOIN before drawing a number.");
                player.SendNetworkMessage(1001, "Fireball");
                Check(!receiver.Client.Poll(50000, SelectMode.SelectRead), "Must not send gameplay with number 0.");
                Select(player, 1);
                Check(!receiver.Client.Poll(50000, SelectMode.SelectRead), "Must wait for signature after number selection.");
                player.SubmitSignature(new[] { 0, 0, 0, 255, 255, 0 });
                string join = Receive(receiver);
                Check(join.Contains("\"aruconum\":1") && !join.Contains("device_id"), "JOIN must immediately send selected integer identity.");
                player.ReceiveNetworkMessage("{\"message_id\":101,\"revision\":1,\"aruconum\":1,\"players\":[{\"aruconum\":1,\"signature\":[0,0,0,255,255,0],\"hp\":100}]}");
                Check(player.LocalPlayer != null, "LocalPlayer must resolve by selected number.");
                player.ReceiveNetworkMessage("{\"message_id\":102,\"revision\":2,\"player\":{\"aruconum\":2,\"signature\":[0,0,0,255,100,0],\"hp\":100}}");
                Check(player.Players.Count == 2, "Addition must use number identity.");
                player.ReceiveNetworkMessage("{\"message_id\":103,\"revision\":3,\"player\":{\"aruconum\":2,\"signature\":[0,0,0,255,150,0],\"hp\":75}}");
                Check(player.Players[1].signature[4] == 150 && player.Players[1].hp == 75, "Update must find player by number.");
                player.ReceiveNetworkMessage("{\"message_id\":104,\"revision\":4,\"aruconum\":2}");
                Check(player.Players.Count == 1, "Removal must find player by number.");
                player.SendNetworkMessage(1001, "Fireball");
                Check(Receive(receiver).Contains("\"aruconum\":1"), "Spell messages must use the same identity.");
                player.ReceiveNetworkMessage("{\"message_id\":199,\"aruconum\":1,\"code\":\"aruconum_in_use\"}");
                Check(player.aruconum == 0 && player.LocalPlayer == null && player.Players.Count == 0,
                    "A duplicate number must reset selection and player state.");
                Select(player, 2);
                Receive(receiver);
                player.ReceiveNetworkMessage("{\"message_id\":199,\"aruconum\":1,\"code\":\"aruconum_in_use\"}");
                Check(player.aruconum == 2, "A delayed error for an old number must not reset the new choice.");
                player.ReceiveNetworkMessage("{\"message_id\":101,\"revision\":5,\"aruconum\":1,\"players\":[{\"aruconum\":1,\"signature\":[0,0,0,255,255,0],\"hp\":100}]}");
                Check(player.Players.Count == 0, "A delayed snapshot for another number must be ignored.");
                player.ReceiveNetworkMessage("{\"message_id\":101,\"revision\":1,\"aruconum\":2,\"players\":[{\"aruconum\":2,\"signature\":[0,0,0,255,255,0],\"hp\":100}]}");
                Check(player.LocalPlayer != null, "Retry with a different number must join normally.");
                player.ReceiveNetworkMessage("{\"message_id\":199,\"aruconum\":2,\"code\":\"unknown_player\"}");
                Check(player.aruconum == 2, "An expired player must retry the same number.");
                Debug.Log("ARUCO NETWORK CHECKS PASSED: delayed join, integer wire identity, player deltas, spells, duplicate recovery and stale replies.");
            }
            finally
            {
                Set(player, "udp", null);
                UnityEngine.Object.DestroyImmediate(obj);
                PlayerSystem.Instance = previous;
            }
        }
    }

    private static void Select(PlayerSystem player, int number) =>
        typeof(PlayerSystem).GetMethod("SelectArucoNumber").Invoke(player, new object[] { number });
    private static void Set(object target, string name, object value) => target.GetType().GetField(name, PrivateInstance).SetValue(target, value);
    private static string Receive(UdpClient receiver)
    {
        IPEndPoint endpoint = null;
        return Encoding.UTF8.GetString(receiver.Receive(ref endpoint));
    }
    private static void Check(bool condition, string message)
    {
        if (!condition) throw new Exception(message);
    }
}

using System;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

public class PlayerSystem : MonoBehaviour
{
    private UdpClient udp;
    public static PlayerSystem Instance;
    private CancellationTokenSource cts;

    [SerializeField] private string serverIP = "127.0.0.1";
    [SerializeField] private int serverPort = 7777;

    async void Start()
    {
        //udp = new UdpClient();
        //udp.Connect(serverIP,7777);
        
        Instance = this;
        cts = new CancellationTokenSource();
        udp = new UdpClient();
        udp.Connect(serverIP, serverPort);

        SendNetworkMessage(1001, "hi");
        await ReceiveLoop(cts.Token);
    }

    async Task ReceiveLoop(CancellationToken cancellationToken)
    {
        while (!cancellationToken.IsCancellationRequested)
        {
            try
            {
                UdpReceiveResult result =
                    await udp.ReceiveAsync();

                string message =
                    Encoding.UTF8.GetString(result.Buffer);

                if (!cancellationToken.IsCancellationRequested)
                    ReceiveNetworkMessage(message);
            }
            catch (ObjectDisposedException)
            {
                break;
            }
            catch (SocketException)
            {
                if (cancellationToken.IsCancellationRequested)
                    break;

                Debug.LogWarning("UDP receive failed");
            }
        }
    }

    public void ReceiveNetworkMessage(string json)
    {
        if (string.IsNullOrWhiteSpace(json))
        {
            Debug.LogWarning("Received an empty network message");
            return;
        }

        NetworkSendObject message;
        try
        {
            message = JsonUtility.FromJson<NetworkSendObject>(json);
        }
        catch (ArgumentException exception)
        {
            Debug.LogWarning($"Invalid network message: {exception.Message}");
            return;
        }

        if (message == null)
        {
            Debug.LogWarning("Received a null network message");
            return;
        }

        switch (message.message_id)
        {
            case 1001:
                HandleCastSpellMessage(message);
                break;
            default:
                Debug.LogWarning($"Unknown network message ID: {message.message_id}");
                break;
        }
    }

    protected virtual void HandleCastSpellMessage(NetworkSendObject message)
    {
        Debug.Log($"Spell message from {message.device_id}: {message.data}");
    }

    void OnDestroy()
    {
        cts?.Cancel();
        udp?.Close();
        cts?.Dispose();
        if (Instance == this)
            Instance = null;
    }

    public string GetUniqueID()
    {
        return SystemInfo.deviceUniqueIdentifier;
    }

    public async void SendNetworkMessage(int message_id, string datas)
    {
        var message = new NetworkSendObject(message_id, GetUniqueID(), datas);
        string json = JsonUtility.ToJson(message, true);
        byte[] bytes = Encoding.UTF8.GetBytes(json);
        await udp.SendAsync(bytes, bytes.Length);
    }
}

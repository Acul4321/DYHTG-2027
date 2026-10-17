using System.Net.Sockets;
using UnityEngine;

public class PlayerSystem : MonoBehaviour
{
    private UdpClient udp;
    public static PlayerSystem Instance;
    private string serverIP;
    void Start()
    {
        //udp = new UdpClient();
        //udp.Connect(serverIP,7777);
        
        Instance = this;
    }
    public string GetUniqueID()
    {
        return SystemInfo.deviceUniqueIdentifier;
    }
    public void SendNetworkMessage(int message_id, string datas)
    {
        var message = new NetworkSendObject(message_id, GetUniqueID(), datas);
        string json = JsonUtility.ToJson(message, true);
        Debug.Log(json);
    }
}

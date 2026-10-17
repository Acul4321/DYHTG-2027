using System.Net.Sockets;
using UnityEngine;

public class PlayerSystem : MonoBehaviour
{
    private UdpClient udp;
    private string serverIP;
    void Start()
    {
        udp = new UdpClient();
        udp.Connect(serverIP,7777);
    }
    public string GetUniqueID()
    {
        return SystemInfo.deviceUniqueIdentifier;
    }
    public void SendNetworkMessage(string message)
    {
        
    }
}

using UnityEngine;
using System;
[Serializable]
public class NetworkSendObject
{
    public int message_id;
    public string device_id;
    public string data;
    public NetworkSendObject(int messageid,string deviceid,string data)
    {
        message_id = messageid;
        device_id = deviceid;
        this.data = data;
    }
}

[Serializable]
public class SnapshotMessage
{
    public int message_id;
    public int revision;
    public string device_id;
    public Player[] players;
    public int heartbeat_interval;
}

[Serializable]
public class LobbyServerMessage : SnapshotMessage
{
    public Player player;
    public string code;
    public string data;
}

[Serializable]
public class LobbyRequestMessage
{
    public int message_id;
    public string device_id;
}

[Serializable]
public class JoinMessage : LobbyRequestMessage
{
    public string name;
}

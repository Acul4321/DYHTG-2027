using UnityEngine;
using System;
[Serializable]
public class NetworkSendObject
{
    public int message_id;
    public int aruconum;
    public string data;
    public NetworkSendObject(int messageid,int arucoNumber,string data)
    {
        message_id = messageid;
        this.aruconum = arucoNumber;
        this.data = data;
    }
}

[Serializable]
public class SnapshotMessage
{
    public int message_id;
    public int revision;
    public int aruconum;
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
    public int aruconum;
}

[Serializable]
public class JoinMessage : LobbyRequestMessage
{
    public int[] signature;
}

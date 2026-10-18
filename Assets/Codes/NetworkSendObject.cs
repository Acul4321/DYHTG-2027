using UnityEngine;
using System;
[Serializable]
public class NetworkSendObject
{
    public int message_id;
    public int aruconum;
    public string data;
    public int target;
    public NetworkSendObject(int messageid,int arucoNumber,string data, int target = 0)
    {
        message_id = messageid;
        this.aruconum = arucoNumber;
        this.data = data;
        this.target = target;
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
    public int hp;
    public Player player;
    public string code;
    public string data;
    public int target;
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

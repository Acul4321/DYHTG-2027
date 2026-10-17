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

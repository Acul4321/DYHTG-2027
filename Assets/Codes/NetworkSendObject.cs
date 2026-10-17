using UnityEngine;

public class NetworkSendObject
{
    int message_id;
    string device_id;
    string data;
    public NetworkSendObject(int messageid,string deviceid,string data)
    {
        message_id = messageid;
        device_id = deviceid;
        this.data = data;
    }
}

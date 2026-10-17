public class NetworkHandle
{
    public static void HandleCastSpellMessage(NetworkSendObject message)
    {
        PlayerSystem.Instance.GetPlayer(message.aruconum).RunSpell(message.data);
    }
}

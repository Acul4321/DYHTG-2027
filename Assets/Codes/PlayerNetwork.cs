using UnityEngine;

public class PlayerNetwork : MonoBehaviour
{
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    
    enum message
    {
        SendCastSpell = 1001,
    }
    void SendCastSpell(Spell spell)
    {
        PlayerSystem.Instance.SendNetworkMessage(1001, "hi");
    }
}

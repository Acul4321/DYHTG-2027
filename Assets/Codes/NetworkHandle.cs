using UnityEngine;
public class NetworkHandle
{

    public static void HandleCastSpellMessage(NetworkSendObject message)
    {
        Spell spell = null;

        switch (message.data)
        {
            case "Fireball":
                spell = new Fireball();
                break;

            case "Shield":
                spell = new ShieldSpell();
                break;

            case "Reflect":
                spell = new ReflectSpell();
                break;
        }

        if (spell != null)
        {
            spell.SpellCasted();
        }
    }
}



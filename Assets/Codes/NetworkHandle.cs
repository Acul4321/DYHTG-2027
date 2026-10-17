using UnityEngine;
public class NetworkHandle
{

    public static int CalculateDamage(int baseDamage, float accuracy)
    {
        return Mathf.RoundToInt(baseDamage * accuracy);
    }

    public static int CalculateShieldDamage(int incomingDamage, float shieldAccuracy)
    {
        return Mathf.RoundToInt(
            incomingDamage * (1f - shieldAccuracy)
        );
    }

   public static int CalculateReflectedDamage(int incomingDamage, float reflectAccuracy)
    {
        return Mathf.RoundToInt(
            incomingDamage * reflectAccuracy * 0.5f
        );
    }

    public static int CalculateReflectedDamageTaken(int incomingDamage, float reflectAccuracy)
    {
        int reflectedDamage =
        CalculateReflectedDamage(
            incomingDamage,
            reflectAccuracy);

        return incomingDamage - reflectedDamage;
    }

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



using UnityEngine;

public abstract class Spell
{
    public int Damage { get; set; }
    public string Name { get; set; }

    public abstract void SpellCasted();

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
}

public class Fireball : Spell
{

    public Fireball()
    {
        Damage = 50;
        Name = "Fireball";
    }

    public override void SpellCasted()
    {
        Debug.Log("Fireball casted");
    }
}

public class ShieldSpell : Spell
{
    public ShieldSpell()
    {
        Name = "Shield";
    }

    public override void SpellCasted()
    {
        Debug.Log("Shield casted");
    }
}

public class ReflectSpell : Spell
{

    public ReflectSpell()
    {
        Name = "Reflect";
    }
    public override void SpellCasted()
    {
        Debug.Log("Reflect casted");
    }
}




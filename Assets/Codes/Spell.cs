using UnityEngine;

public abstract class Spell
{
    public int Damage { get; set; }
    public string Name { get; set; }

    public abstract void SpellCasted();


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


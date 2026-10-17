
public abstract class Spell{
    public int Damage {get; set;}

    public abstract void SpellCasted();
}

public class Fireball : Spell{

    public Fireball(){
        Damage = 50;
    }

    public override void SpellCasted()
    {
        
    }

    public void AddForce()
    {

    }

    public void Acceleration()
    {
        
    }
}

public class ShieldSpell : Spell
{
    public override void SpellCasted()
    {
        
    }
}

public class ReflectSpell : Spell{
    public override void SpellCasted()
    {
        
    }

    public ReflectSpell(int Damage){
        this.Damage = Damage/2;
        
    }
}


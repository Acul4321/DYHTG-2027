
public abstract class Spell{
    public int Damage {get; set;}
    public string Name {get; set;}

    public abstract void SpellCasted();

}

public class Fireball : Spell{

    public Fireball(){
        Damage = 50;
        Name = "Fireball";
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
       public ShieldSpell(){
        Name = "Shield";
    }
    
    public override void SpellCasted()
    {
        
    }
}

public class ReflectSpell : Spell{
    
    public ReflectSpell(int Damage){
        this.Damage = Damage/2;
        Name = "Reflect";
    }
    public override void SpellCasted()
    {
        
    }
}


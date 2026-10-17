namespace MyGame;

public class Spell{
    public int Damage {get; set;}

    public void SpellCasted();
}

public class Fireball : Spell{

    public Fireball(){
        Damage = 50;
    }

    public void SpellCasted{

    }

    public void AddForce{

    }

    public void Acceleration{

    }
}

public class ShieldSpell : Spell{

}

public class ReflectSpell : Spell{

    public ReflectSpell(int Damage){
        this.Damage = Damage/2;
        
    }
}


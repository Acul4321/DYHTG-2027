[System.Serializable]
public class Player
{
    public string device_id;
    public string name;
    public int hp = 100;

    public void CastSpell(Spell spell)
    {
        spell.SpellCasted();
    }
}

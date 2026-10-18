using UnityEngine;
[System.Serializable]
public class Player
{
    public int aruconum;
    public int[] signature;
    public int hp;
    public int deaths;
    private void CastSpell(Spell spell)
    {
        Debug.Log($"Player {aruconum} is Casting spell: {spell.Name}");
        spell.SpellCasted();
    }
    public void RunSpell(string spell)
    {

        Spell spellToCast = null;
        switch (spell.ToLower())
        {
            case "fireball":
                spellToCast = new Fireball();
                break;

            case "shield":
                spellToCast = new ShieldSpell();
                break;

            case "reflect":
                spellToCast = new ReflectSpell(25); // default dmg value for reflect
                break;

            default:
                spellToCast = null;
                break;
        }

        if (spellToCast != null)
        {
            CastSpell(spellToCast);
        }
    }
}

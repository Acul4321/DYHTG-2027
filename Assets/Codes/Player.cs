
namespace MyGame;
public class Player
{
    public int hp;

    public void CastSpell(Spell spell)
    {
        spell.SpellCasted();
    }
}

class Pokemon {
public:
  int level;
  int health;
  int attack;
  int xp;

  void attackPokemon(Pokemon &pokemonToAttack) {
    pokemonToAttack.removeHealth(this->attack);
    // pokemonToAttack.health = pokemonToAttack.health - this->attack;
  }

  void removeHealth(int damage) { health = health - damage; }

  void gainXP(int xpgain) { xp = xp + xpgain; }

  void levelUp() { level = level + 1; }
};

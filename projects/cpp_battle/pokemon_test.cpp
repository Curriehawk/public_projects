#include "pokemon.hpp"
#include <gtest/gtest.h>
// Demonstrate some basic assertions.
TEST(Pokemontest, attack10) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon charmander;
  charmander.attack = 10;
  Pokemon squirtle;
  squirtle.health = 100;

  charmander.attackPokemon(squirtle);
  EXPECT_EQ(90, squirtle.health);
}

TEST(Pokemontest, attack20) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon charmander;
  charmander.attack = 20;
  Pokemon squirtle;
  squirtle.health = 100;

  charmander.attackPokemon(squirtle);
  EXPECT_EQ(80, squirtle.health);
}

TEST(Pokemontest, level_up1) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.level = 1;

  Alex.levelUp();
  EXPECT_EQ(2, Alex.level);
}

TEST(Pokemontest, level_up2) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.level = 5;

  Alex.levelUp();
  EXPECT_EQ(6, Alex.level);
}

TEST(Pokemontest, gain_xp20) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.xp = 5;

  Alex.gainXP(20);
  EXPECT_EQ(25, Alex.xp);
}

TEST(Pokemontest, gain_xp40) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.xp = 5;

  Alex.gainXP(40);
  EXPECT_EQ(45, Alex.xp);
}

TEST(Pokemontest, gain_xp40_level) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.xp = 5;
  Alex.level = 1;

  Alex.gainXP(95);
  EXPECT_EQ(0, Alex.xp);
  EXPECT_EQ(2, Alex.level);
}

TEST(Pokemontest, gain_xp30_level) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.xp = 70;
  Alex.level = 7;

  Alex.gainXP(50);
  EXPECT_EQ(0, Alex.xp);
  EXPECT_EQ(8, Alex.level);
}

TEST(Pokemontest, lose_health30) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.health = 100;

  Alex.removeHealth(30);
  EXPECT_EQ(70, Alex.health);
}

TEST(Pokemontest, lose_health40) {
  //  const Calculator calc;
  // EXPECT_EQ(calc.add(1, 2), 3);
  Pokemon Alex;
  Alex.health = 100;

  Alex.removeHealth(40);
  EXPECT_EQ(60, Alex.health);
}
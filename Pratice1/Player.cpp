#include <iostream>
#include <string>
#include "Player.h"
#include "Pokemon.h"

using namespace std;



string Player::get_Name(Pokemon &_pokemon)
{
    return _pokemon.Name;
}
double Player::get_MaxLife(Pokemon &_pokemon)
{
    return _pokemon.MaxLife;
}
double Player::get_CurrentLife(Pokemon &_pokemon)
{
    return _pokemon.CurrentLife;
}
double Player::get_Attack(Pokemon &_pokemon)
{
    return _pokemon.Attack;
}
double Player::get_Defense(Pokemon &_pokemon)
{
    return _pokemon.Defense;
}



#include<iostream>
#include "Player.h"

int main() {
    Player _player;
    Pokemon _pokemon1("haha",12,12,12,12);
    Pokemon _pokemon2("haha",14,14,14,14);

    std::cout<<(_pokemon1-_pokemon2);


    return 0;
}
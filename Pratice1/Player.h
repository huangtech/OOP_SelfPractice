#ifndef PLAYER
#define PLAYER
#include "Pokemon.h"
using namespace std;

class Pokemon;
class Player
{
    public:
        string get_Name(Pokemon&);
        double get_MaxLife(Pokemon&);
        double get_CurrentLife(Pokemon&);
        double get_Attack(Pokemon&);
        double get_Defense(Pokemon&);

        
};

#endif
#ifndef POKEMON
#define POKEMON

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

class Player;
class Pokemon
{
    friend ostream& operator<<(ostream& ,Pokemon&);
    friend iostream& operator-(iostream&,Pokemon&,Pokemon&);
    friend class Player;
    private:
        string Name;
        double MaxLife;
        double CurrentLife;
        double Attack;
        double Defense;
    public: 
        Pokemon(){
            cout<<"Bye"<<endl;
        };
        Pokemon(string _Name,double _MaxLife,double _CurrentLife, double _Attack, double _Defense)
        {
            Name=_Name;
            MaxLife=_MaxLife;
            CurrentLife=_CurrentLife;
            Attack=_Attack;
            Defense=_Defense;
        };
        void set_Name(string );
        void set_MaxLife(double );
        void set_CurrentLife(double );
        void set_Attack(double );
        void set_Defense(double );


        string get_Name();
        double get_MaxLife();
        double get_CurrentLife();
        double get_Attack();
        double get_Defense();

        double heal(double);
        void printf_Pokemon_data();
};

#endif

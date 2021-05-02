#include <iostream>
#include <string>
#include "Pokemon.h"
using namespace std;


void Pokemon::set_Name(string _Name)
{
    Name=_Name;
}
void Pokemon::set_MaxLife(double _MaxLife )
{
    MaxLife=_MaxLife;
}
void Pokemon::set_CurrentLife(double _CurrentLife)
{
    CurrentLife=_CurrentLife;
}
void Pokemon::set_Attack(double _Attack)
{
    Attack=_Attack;
}
void Pokemon::set_Defense(double _Defense)
{
    Defense=_Defense;
}


string Pokemon::get_Name()
{
    return Name;
}
double Pokemon::get_MaxLife()
{
    return MaxLife;
}
double Pokemon::get_CurrentLife()
{
    return CurrentLife;
}
double Pokemon::get_Attack()
{
    return Attack;
}
double Pokemon::get_Defense()
{
    return Defense;
}



double Pokemon::heal(double HP_num)
{
    CurrentLife += HP_num;
    CurrentLife = (CurrentLife>MaxLife)? MaxLife:CurrentLife;
    return CurrentLife;
}

void Pokemon::printf_Pokemon_data()
{
    cout<< "Name:"<<Name<<endl;
    cout<< "MaxLife:"<<MaxLife<<endl;
    cout<< "Attack:"<<Attack<<endl;
    cout<< "Defense:"<<Defense<<endl;

}


// ostream& operator<<(ostream& ,Pokemon& _pokemon)
// {
//     cout<<"Name: "<<_pokemon.Name<<"\n"
//         <<"MaxLife: "<< _pokemon.MaxLife << "\n"
//         <<"CurrentLife: "<<_pokemon.CurrentLife<<"\n"
//         <<"Attack: "<< _pokemon.Attack<<"\n"
//         <<"Defense: "<< _pokemon.Defense<<endl;
// }


// iostream& operator-(iostream&,Pokemon& _pokemon1, Pokemon& _pokemon2)
// {
//     double tmp =_pokemon1.Attack-_pokemon2.Defense;
//     tmp=(tmp>0)?tmp:0;
//     _pokemon2.CurrentLife -= tmp;
// }
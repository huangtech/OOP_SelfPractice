#include<iostream>

using namespace std;

class Pokemon // abstract class cannot be implement! i.g. 
{
    public:
        void attack();
        void  skill_attack();
};

void Pokemon::attack()
{
    cout<<"attack from Pokemon:"<<endl;
}

void Pokemon::skill_attack(){
   cout<<"skill_attack from Pokemon:"<<endl; 
}



class Charmander:public Pokemon
{
    public:
        void skill_attack();
};

void Charmander::skill_attack()
{
    cout<<"skill_attack from Charmander:"<<endl; 
}

int main()
{
    Charmander a;
    Pokemon b;
    a.skill_attack();
    b.skill_attack();

    a.skill_attack();
    b.skill_attack();

    return 0;
}

 
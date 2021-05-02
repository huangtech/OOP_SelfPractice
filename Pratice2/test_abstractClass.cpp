#include<iostream>

using namespace std;

class Pokemon // abstract class cannot be implement! i.g. 
{
    public:
        void attack();
        virtual void  skill_attack()=0;
};

void Pokemon::attack()
{
    cout<<"attack from Pokemon:"<<endl;
    
    // Beacause this is a virtual function, so in the run time who call it, then the method will be who.
    skill_attack();
}


//The following method of base class cannot be implemented.
// void Pokemon::skill_attack(){  
//    cout<<"skill_attack from Pokemon:"<<endl; 
// }



class Charmander:public Pokemon
{
    public:
        void skill_attack();
};

void Charmander::skill_attack()
{
    cout<<"skill_attack from Charmander:"<<endl; 
}


class Seadra:public Pokemon
{
    public:
        void skill_attack();
};

void Seadra::skill_attack()
{
    cout<<"skill_attack from Seadra:"<<endl; 
}

int main()
{
    Charmander a;
    a.attack();

    Seadra b;
    b.attack();

    return 0;
}

 
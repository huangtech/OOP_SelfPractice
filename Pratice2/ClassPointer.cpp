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
    Pokemon *p;
    Charmander a;
    Seadra b;
    //p=static_cast<Pokemon> a; error!
    p = &a; // 父類別指向子類別
    p->skill_attack(); //  由父類別來處理子類別方法 , 當然子類別方法為virtual, 才可以綁定在子類別上, 以執行子類別方法。

    p= &b;
    p->skill_attack();
    
    // a.attack();
    // b.attack();

    return 0;
}

 
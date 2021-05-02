#ifndef WORKER_H_INCLUDED
#define WORKER_H_INCLUDED

#include <iostream>
#include "Boss.h"

using namespace std;

class Boss;
// Test(int x):a(x),b(a){};

class Worker{
    friend Boss;
    friend ostream& operator<< (ostream&, Worker);
    private:
        string name;
        string title;
        int salary;
    public:

        // Worker();
        // Worker(string,string,int);
        // Worker(string="Unknown",string="Unknown",int=100);
        Worker(string n="Unknown",string t="Unknown",int s=100):name(n),title(t),salary(s){};
        void set_worker(string);
        void set_title(string);
        void set_salary(int);
        string get_worker();
        string get_title();
        int get_salary();
        void print_worker();
        int& return_salary();
};

#endif // WORKER_H_INCLUDED

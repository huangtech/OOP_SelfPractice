#ifndef BOSS_H_INCLUDED
#define BOSS_H_INCLUDED

#include <iostream>
#include "Worker.h"

using namespace std;

class Worker;

class Boss{
    public:
        string get_worker_name(Worker);
        string get_worker_title(Worker);
        int get_worker_salary(Worker);
};

#endif // BOSS_H_INCLUDED

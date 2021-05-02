#include "Worker.h"

/*
Worker::Worker(){
    name = "Unknown";
    title = "Unknown";
    salary = 0;
}
*/

/*
Worker::Worker(string n,string t,int s){
    name = n;
    title = t;
    salary = s;
}
*/
int& Worker::return_salary(){
    return salary;
}

void Worker::set_worker(string n){
    name = n;
}

void Worker::set_title(string t){
    title = t;
}

void Worker::set_salary(int s){
    salary = s;
}

void Worker::print_worker(){
    cout << "Name:" << name << endl;
    cout << "Title:" << title << endl;
    cout << "Salary:" << salary << endl;
}

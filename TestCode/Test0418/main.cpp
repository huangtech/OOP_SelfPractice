#include <iostream>
#include "Worker.h"

using namespace std;

class Test{
    public:
        int a;
        int b;
        Test(int x):a(x),b(a){};
};
    // Test(int x):a(x),b(a){};

ostream& operator<< (ostream&os, Worker w){
    os << "Name:" << w.name << endl;
    os << "Title" << w.title << endl;
    os << "Salary:" << w.salary << endl;
    return os;
}

int main () {
    Worker w("Mick","Lecturer",100);
    int& tmp = w.return_salary();
    cout << w;

    tmp = 999;
    cout << w;

    // w.print_worker();
    /*
    Test t(3);
    cout << t.a << endl;
    cout << t.b << endl;
    */

    return 0;
}

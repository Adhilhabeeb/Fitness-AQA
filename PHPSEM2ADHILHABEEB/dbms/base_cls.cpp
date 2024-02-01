#include <iostream>
using namespace std;

class base {
public:
    int n1;
    void show() {
        cout << "\nn1=" << n1;
    }
};

class derived : public base {
public:
    int n2;
    void show() {
        cout << "\nn1=" << n1;
        cout << "\nn2=" << n2;
    }
};

int main() {
    base b;
    base* bptr;
    cout << "pointer of base class points to it";
    bptr = &b;
    bptr->n1 = 23;
    bptr->show();

    derived d;
    cout << "\n";
    bptr = &d;
    bptr->n1 = 63;
    bptr->show();

    return 0;
}
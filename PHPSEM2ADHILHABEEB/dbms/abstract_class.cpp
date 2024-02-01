#include <iostream>
using namespace std;

class shape {
protected:
    float d1, d2;
public:
    virtual void getdata() {
        cin >> d1 >> d2;
    }
    virtual float area() = 0;
};

class triangle : public shape {
public:
    void getdata() override {
        cout << "Enter dimensions of triangle: ";
        shape::getdata();
    }
    float area() override {
        return 0.5 * d1 * d2;
    }
};

class rectangle : public shape {
public:
    void getdata() override {
        cout << "Enter dimensions of rectangle: ";
        shape::getdata();
    }
    float area() override {
        return d1 * d2;
    }
};

int main() {
    triangle t;
    t.getdata();
    cout << "Area = " << t.area() << endl;

    rectangle r;
    r.getdata();
    cout << "Area = " << r.area() << endl;

    return 0;
}
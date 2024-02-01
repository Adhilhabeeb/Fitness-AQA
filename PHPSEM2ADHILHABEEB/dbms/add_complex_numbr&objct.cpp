#include<iostream>
using namespace std;

class complex {
    private:
        float real;
        float img;
    
    public:
        complex() {

        }

        complex(float r, float i) {
            real = r;
            img = i;
        }

        friend complex addComplex(complex c1, complex c2);

        void display() {
            cout << real << "," << img << endl;
        }
};

complex addComplex(complex c1, complex c2) {
    complex t;
    t.real = c1.real + c2.real;
    t.img = c1.img + c2.img;
    return t;
}

int main() {
    complex c1(9.7, 6.8), c2(4.9, 5.1), c3;
    c3 = addComplex(c1, c2);
    c1.display();
    c2.display();
    cout << "sum is:" << endl;
    c3.display();
    return 0;
}
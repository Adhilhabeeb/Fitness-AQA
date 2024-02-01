#include<iostream>
using namespace std;

class test {
    int c;
    public:
    test() {
        cout << "sum is: ";
    }

    test(int a, int b) {
        c = a + b;
    }

    void display() {
        cout << c;
    }
};

int main() {
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;
    test t;
    test tt(a, b);
    tt.display();
    return 0;
}
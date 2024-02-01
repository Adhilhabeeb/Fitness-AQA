#include <iostream>
using namespace std;

class math {
protected:
    int a, b, c;

public:
    math() {
        a = 0;
        b = 0;
        c = 0;
    }

    math(int x, int y) {
        a = x;
        b = y;
        c = 0;
    }

    math(const math& x) {
        a = x.a;
        b = x.b;
        c = x.c;
    }

    void add() {
        c = a + b;
        cout << "Total: " << c << endl;
    }
};

int main() {
    math def;
    math para(10, 20);
    math copy(para);

    def.add();
    para.add();
    copy.add();

    return 0;
}
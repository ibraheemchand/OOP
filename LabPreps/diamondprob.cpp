#include <iostream>
using namespace std;

class A {
public:
    int x;

    A() {
        x = 10;
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;

    obj.x = 50;     // only one copy of x exists
    obj.show();

    return 0;
}
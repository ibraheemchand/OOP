#include <iostream>
using namespace std;

class B;

class A {
private:
    int x;
public:
    A(int a) {
        x = a;
    }
    friend void show(A, B);
};

class B {
private:
    int y;
public:
    B(int b) {
        y = b;
    }
    friend void show(A, B);
};

void show(A obj1, B obj2) {
    cout << "x = " << obj1.x << endl;
    cout << "y = " << obj2.y << endl;
}

int main() {
    A obj1(10);
    B obj2(20);
    show(obj1, obj2);
    return 0;
}
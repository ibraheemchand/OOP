#include <iostream>
using namespace std;

int x = 10;

class Test {
private:
    int* ptr;
public:
    Test() {
        ptr = new int;
        *(ptr) = 20;
    }

    Test(const Test& obj) {
        ptr = new int(*obj.ptr);
    }

    void print() {
        cout << "Value: " << *ptr << endl;
    }

    ~Test() {
        delete ptr;
    }
};

void local() {
    int x = 20;
    cout << "Local x is "<<x<< endl;
}

int main() {
    Test t1;
    Test t2 = t1;

    local();

    cout << "Global x " << ::x << endl;

    t1.print();
    t2.print();

    return 0;
}
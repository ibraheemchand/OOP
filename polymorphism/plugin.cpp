#include <iostream>
using namespace std;

class A
{
public:
    int* ptr;

    virtual void show() = 0;
};

class B : public A
{
public:
    B()
    {
        ptr = new int(100);
    }

    void show()
    {
        cout << *ptr << endl;
    }

    ~B()
    {
        delete ptr;
    }
};

int main()
{
    B obj;
    obj.show();
}
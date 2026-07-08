#include <iostream>
using namespace std;

class Triangle
{
private:
    int base;
    int height;

public:
    Triangle(int b = 0, int h = 0)
    {
        base = b;
        height = h;
    }

    friend ostream& operator<<(ostream& out,const Triangle& t);
};

ostream& operator<<(ostream& out,const Triangle& t)
{
    out << "Base = " << t.base
        << ", Height = " << t.height;

    return out;
}

int main()
{
    Triangle t(3,4);

    cout << t;
}
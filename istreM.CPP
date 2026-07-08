#include <iostream>
using namespace std;

class Triangle
{
private:
    int base;
    int height;

public:
    friend istream& operator>>(istream& in, Triangle& t);
};

istream& operator>>(istream& in,Triangle& t)
{
    cout << "Enter base: ";
    in >> t.base;

    cout << "Enter height: ";
    in >> t.height;

    return in;
}

int main()
{
    Triangle t;

    cin >> t;
}
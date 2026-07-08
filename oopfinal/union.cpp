#include <iostream>
using namespace std;

union color
{
    char c1;
    float c2;
};

int main(){

color a;
a.c2=23.43;

cout << "a1  " << a.c1 << endl;
cout << "a1  " << (int)a.c1 << endl;




    return 0;
}
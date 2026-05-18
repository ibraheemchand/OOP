#include <iostream>
using namespace std;

template <class T>
T Find_max(T a , T b){
    if (a < b)
    {
        return b;
    }
    else
    {
        return a;
    }
    
}
int main() {

   
int x , y ,z ;
x =32;
y = 324;

cout << Find_max<float>(x ,y);
    return 0 ;
}
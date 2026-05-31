#include <iostream>
using namespace std;

class c1
{
private:
  int Area;
public:
    friend void showArea(c1);

    c1(){
        Area=33;
    }
};


void showArea(c1 ab){
    cout<< ab.Area << endl;
}

int main(){
    c1 a ;
    showArea(a);

    return 0;
}
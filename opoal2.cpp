#include <iostream>
using namespace std;
class triangle{
    public:
    int base;
    int height;

public:
triangle(int b, int h){
this->base=b;
this->height=h;
}

triangle(){}

triangle operator+ (triangle b){
    triangle a;
    a.base = this->base + b.base;
    a.height = this->height + b.height;
    return a;

}

void operator++ (int){
    this->base=this->base+1;
    this->height=this->height+1;
}
};

int main(){

    triangle a1(3,2);
    triangle a2(4,5);

    triangle a3=a1+a2;

    cout << a3.base << endl;
    cout << a3.height << endl;

    a3++;



     cout << a3.base << endl;
    cout << a3.height << endl;
}
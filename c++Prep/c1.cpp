#include <iostream>
using namespace std;
class c1
{

public:
int* a;

    c1(int ab ){
         a = new int ;
        *a = ab;
    };
    
};


class c2 : public c1
{

public:
int* b;
    c2(int aa , int bb): c1(aa){
         b = new int ;
        *b = bb;
    };
  void print(){
    cout<<*a << *b <<endl;
  }
};

int main(){
    c2 a1(2,3);
    c2 a2= a1;
    *a1.a=6;
    *a1.b=7;

    cout << *a2.a <<endl;
    cout << *a2.b <<endl;
    
return 0;
}
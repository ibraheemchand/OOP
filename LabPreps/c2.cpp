

#include <iostream>
using namespace std;

class A
{
private:
  int Area;
public:
    A(){
        this->Area =45;
    }
friend class B;

};

class B
{
private:
   int length;
public:

 B(){
    this->length=32;
 }

 void printAreaxLen(A obj){
    cout << "THe area x length " << length *(obj.Area) << endl; 
 }
};


int main(){
   A a;
   B b;
  b.printAreaxLen(a);
    return 0;
}
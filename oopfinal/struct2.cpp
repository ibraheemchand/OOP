#include <iostream>
using namespace std;

struct personalDetails
{
    string name ;
    int age;
    float height;
};


void add_value(personalDetails p1[11], int x){
    p1[1].age=x;
};


int main(){

personalDetails p[10];

add_value(p,23);


cout << p[1].age << endl;
  
    return 0;
}
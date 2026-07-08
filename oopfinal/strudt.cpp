#include <iostream>
using namespace std;

struct personalDetails
{
    string name ;
    int age;
    float height;
}hammad;


struct studentID
{
    personalDetails p1;
    double CGPA;

};

void show(personalDetails px){ // pass by value
    cout << px.name << endl;
    cout << px.height << endl;
    cout << px.age << endl;
    cout <<"This is call byvalue"<< endl;
}
void show(const personalDetails &px){  //pass by reference
    cout << px.name << endl;
    cout << px.height << endl;
    cout << px.age << endl;

    cout <<"This is call by reference"<< endl;
}
int main(){



    studentID s1;
    s1.p1.age=12;
    s1.CGPA=3.4;
    s1.p1={"Ali", 56,3464.3};


    personalDetails a2;
    a2={"chand", 32,34.3};
    a2.age=43;

    cout << a2.name << endl;
    cout << a2.height << endl;
    cout << a2.age << endl;


    cout << hammad.name << endl;
    cout << hammad.height << endl;
    cout << hammad.age << endl;
   
 




    return 0;
}
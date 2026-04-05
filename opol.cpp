#include <iostream>
#include <string>
using namespace std;

class person
{
private:
string name;    
int age;
public:
    person(){
        name = "";
        age = 0;
    };
    ~person(){
    };


    friend ostream &operator << (ostream &output ,const person &p);
    friend istream &operator >> (istream &input , person &p);
};


ostream &operator << (ostream &output , const person &p){
    output << "My name is " << p.name << "And My age is " << p.age << endl;
    return output;
}


istream &operator >> (istream &input , person &p){
    cout << "Enter Your name " << endl;
    input >> p.name;
    input.ignore();
    cout << "Enter Your age " << endl;
    input >> p.age;

    return input;


}
int main(){


    person p;

    cin >> p ;

    cout << p;
    return 0 ;
}
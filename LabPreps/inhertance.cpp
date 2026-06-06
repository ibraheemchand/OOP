

#include <iostream>
using namespace std;

class person
{
protected :
   string name ;
   int height ;

public:
    person(string n , int h ){
        this->name=n;
        this->height=h;
    };
    

};

class student : public person
{
private:
   int RollNo;
public:
    student(int rn , int h , string n )
    : person(n,h)
    {
        
        RollNo=rn;
    };
    
    
    void showDetails(){
        cout << "Roll no " << RollNo << endl;
        cout << "Name is " << name << endl;
        cout << "height is " << height << endl;
    

    }

};



int main(){
 student s1(32,100,"chand" );
 s1.showDetails();
    return 0;
}
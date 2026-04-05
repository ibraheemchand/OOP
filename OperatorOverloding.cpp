#include <iostream>
using namespace std;

class student
{
private:
    
public:
int marks ;
    void set_marks(int a){
        this->marks=a;
    }

    void getmarks(){
        cout << "The marks are : " << marks << endl;
    }


  



    student operator+(student b){
    student c;
   c.marks= marks +b.marks;
    return c;
    }


    void operator++(int){
        marks = marks +1;
    }
    void operator++(){
        marks = marks +1;
    }
    friend OperatorOverloding;
};

class OperatorOverloding
{


    
};




int main(){
    student aa , bb ,ff ;
    aa.marks=34;
    bb.marks=66;

    ff = aa + bb;
    ff.getmarks();
    ff++;
    ff.getmarks();
    ++ff;
    ff.getmarks();
    return 0;
}
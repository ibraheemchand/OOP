#include <iostream>
using namespace std;
int x =2314;
class students
{
private:
    int rollNo;
    float cgpa;
    string name; 
public:
    void change() const {
        cout << "this is cgpa " << cgpa << endl;
        x=2;
    }
    students();
    ~students();
};

students::students(/* args */)
{
}

students::~students()
{
}



int main(){

 students e1;
 e1.change(); 
    cout << "Value of x is " << x << endl;
    return 0;
}
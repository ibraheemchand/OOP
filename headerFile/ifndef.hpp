#include <string>
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
    void change(float a)  {
        this-> cgpa = a;
        }
    void show(){
        cout << "this is cgpa " << cgpa << endl;
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




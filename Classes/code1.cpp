#include <iostream>
using namespace std;

class student
{
    private:
    double salary;

    public:
    string name;
    float gpa;



    //member functions
    void printLoop(int a){
        cout<<"salary is "<<a<<endl;
    }

    void setSalary(int a){
        salary=a;

    }


    int getSalary(){
        cout<<"salary is ";
        return salary;
    }
};


int main(){
    
    student s1;
    s1.gpa = 3.2;
    s1.name ="Ibraheem Chand";

  s1.setSalary(3216900);

  cout<<s1.getSalary();

    return 0 ;
}
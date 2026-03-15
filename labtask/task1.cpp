#include <iostream>
using namespace std;
class Student {
    private:
 string name;
 int RegistrationNumber;
 string fatherName;
 string degree ;
 string department;
 

    public:

   
    Student(string name, int RegistrationNumber, string fatherName, string degree, string department){
        this->name=name;
        this->RegistrationNumber=RegistrationNumber;
        this->fatherName=fatherName;            
        this->degree=degree;
        this->department=department;
        
    }
    void display() const {
        cout<<"Name: "<<name<<endl;
        cout<<"Registration Number: "<<RegistrationNumber<<endl;
        cout<<"Father Name: "<<fatherName<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"Department: "<<department<<endl;
    }
};

int main() {
    const Student student1("Ali", 12345, "Ahmed", "BS Computer Science", "Computer Science");
    student1.display();
    return 0;
}
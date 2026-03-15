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
 static int count;
   
    Student(string name, int RegistrationNumber, string fatherName, string degree, string department){
        this->name=name;
        this->RegistrationNumber=RegistrationNumber;
        this->fatherName=fatherName;            
        this->degree=degree;
        this->department=department;
        count++;
    }
    void display() const {
        cout<<"Name: "<<name<<endl;
        cout<<"Registration Number: "<<RegistrationNumber<<endl;
        cout<<"Father Name: "<<fatherName<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"Department: "<<department<<endl;
    }
};int  Student::count = 0; 

int main() {
  
    const Student student1("Ali", 12345, "Ahmed", "BS Computer Science", "Computer Science");
    const Student student2("Sara", 67890, "Hassan", "BS Information Technology", "Information Technology");
    student1.display();
    student2.display();

    cout << "Total number of students: " << Student::count << endl;
    return 0;
}
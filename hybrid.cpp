#include <iostream>
using namespace std;

class Person {
protected:
    string fullName;
public:
    Person(string name) {
        this->fullName = name;
    }
};

class Student : virtual public Person {
protected:
    int rollNumber;
public:
    Student(string name, int roll) : Person(name) {
        rollNumber = roll;
    }
};

class Teacher : virtual public Person {
protected:
    string subjectName;
public:
    Teacher(string name, string subject) : Person(name) {
        subjectName = subject;
    }
};

class TA : public Student, public Teacher {
public:
    TA(string name, int roll, string subject): Person(name), Student(name, roll), Teacher(name, subject) {} 
        

    void displayDetails() {
        cout << "Full Name: " << fullName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Subject: " << subjectName << endl;
    }
};

int main() {
   TA ta("Ibraheem Chand", 69 , "OOP");
    ta.displayDetails();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class Student {
public:   
 static int count;
 string name;
 const int id;
 float gpa;

    Student(string name, float gpa , int idd ){
        this->name=name;
        this->gpa=gpa;
     Student::int id=idd;
        count++;
    }
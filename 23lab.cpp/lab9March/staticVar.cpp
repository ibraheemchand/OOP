#include <iostream>
using namespace std;

class Student {
public:
    static int count;   

    Student() {
        count++;
    }
};

 int Student::count;   

int main() {
    Student s1;
    Student s2;
    Student s3;

    cout << "Total Students: " << Student::count << endl;
}
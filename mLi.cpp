#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;
public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Class : public Student {
protected:
    string className;
public:
    Class(string n, int r, string c) : Student(n, r) {
        className = c;
    }
    void displayClass() {
        cout << "Class: " << className << endl;
    }
};

class CR : public Class {
private:
    string responsibility;
public:
    CR(string n, int r, string c, string resp) : Class(n, r, c) {
        responsibility = resp;
    }
    void displayCR() {
        displayStudent();
        displayClass();
        cout << "Role: " << responsibility << endl;
    }
};

int main() {
    CR obj("Ali", 101, "BSCS-3A", "Class Representative");
    obj.displayCR();
    return 0;
}
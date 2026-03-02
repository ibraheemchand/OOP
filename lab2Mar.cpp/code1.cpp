#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    Employee& giveRaise(double amount) {
        salary += amount;
        return *this;
    }

    Employee& deductTax(double amount) {
        salary -= amount;
        return *this;
    }

    Employee& bonus(double amount) {
        salary += amount;
        return *this;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("Ali", 50000);
    emp.giveRaise(5000).bonus(2000).deductTax(3000).display();
    return 0;
}
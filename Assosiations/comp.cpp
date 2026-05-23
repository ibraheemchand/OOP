#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine Created\n";
    }

    ~Engine() {
        cout << "Engine Destroyed\n";
    }
};

class Car {
private:
    Engine eng; 

public:
    Car() {
        cout << "Car Created\n";
    }

    ~Car() {
        cout << "Car Destroyed\n";
    }
};

int main() {

    Car c1;

    return 0;
}
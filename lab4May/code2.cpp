#include <iostream>
using namespace std;

class Car {
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

class BMW : public Car {
public:
    void start() {
        cout << "BMW starting" << endl;
    }
    void stop() {
        cout << "BMW stopping" << endl;
    }
};

class Tesla : public Car {
public:
    void start() {
        cout << "Tesla powering on" << endl;
    }
    void stop() {
        cout << "Tesla shutting down" << endl;
    }
};

int main() {
    Car* c1 = new BMW();
    Car* c2 = new Tesla();

    c1->start();
    c2->start();

    c1->stop();
    c2->stop();

    delete c1;
    delete c2;

    return 0;
}
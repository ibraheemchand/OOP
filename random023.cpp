#include <iostream>
using namespace std;

class base {
private:
    int x;
public:
    base() {
        x = 10;
       
    }
    
    friend void show(base, class derived);
};

class derived : public base {
private:
    int y;
public:
    derived() {
        y = 20;
        
    }
  
    friend void show(base, derived);
};

void show(base b, derived d) {
  
    cout << "x = " << b.x << endl;
    cout << "y = " << d.y << endl;
}

int main() {
    derived d;
    show(d, d);
    return 0;
}
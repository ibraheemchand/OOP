#include <iostream>
#include <string>
using namespace std;


class lifo
{
private:
    int n;
public:
    lifo(){
        cout << "The constructor is called " ; 
    };
    ~lifo(){
        cout << "The distructor is called " ; 
    };
};

lifo::lifo(/* args */)
{
}

lifo::~lifo()
{
}


int main
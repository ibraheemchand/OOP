#include <iostream>
#include <string>
using namespace std;


class lifo
{
public:
     int n;
       lifo(int x){
        n=x;
        cout << "The constructor is called " <<n<< endl;; 
    };
    ~lifo(){
        cout << "The distructor is called " << n << endl;; 
    };
};




int main(){
lifo m1(1);

lifo m2(2);
    return 0 ;
}
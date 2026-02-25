#include <iostream>
using namespace std;
class addAmount
{
private:
    int amount;

public:
   
     addAmount(){
        this->amount=50;
     }
    addAmount(int a ){
        this->amount = 50 + a;
     };
    

  void display(){
    cout << "the total account balance is " << amount << endl;
  }
};

int main(){
    
    addAmount B2(32);

   B2.display();
     return 0;
}
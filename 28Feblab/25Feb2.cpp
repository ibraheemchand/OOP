#include <iostream>
using namespace std;
class bankAcc
{
private:
    double bal;
    double* transaction;
    int transactionCount;
public:
    bankAcc(int a){
        this->bal=a;
        transaction= new double;

    };
    
    bankAcc (bankAcc &a){

    }

    ~bankAcc(){
        delete transaction;
    };
};


int main (){

    
    return 0;
}
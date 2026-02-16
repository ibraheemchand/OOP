#include <iostream>
using namespace std;

class product
{
private:

int id;
string name;
int quantity;
int price;

public:

   void Input(int id , string name , int quantity , int price ){
    this->id=id;
    this->name=name;
    this->quantity=quantity;
    this->price=price;
   }
    
   void display(){
    cout << " id " << id << endl ;
    cout << " name " << name << endl ;
    cout << " quantity " << quantity << endl ;
    cout << " price " << price << endl ;
   }

   void updatePrice(double n){
    price=n;
   }

  inline int totalCost(){
    return (price*quantity);

   }

   double discount(double n){
   return  (price-((price*n)/100));

   }
};


int main(){
    product p[5];
    
    for (int i = 0; i < 5; i++)
    { 
        int ido;
        cout << "Enter Id " << endl;
        cin>>ido;
        string no;
        cout<<"Enter name "<< endl;
        cin >> no;
        int pr;
        cout << "Enter price " << endl;
        cin>>pr;

        int Qunt;
        cout << "Enter Quantity" << endl;
        cin>>Qunt;
    
        p[i].Input(ido, no , pr , Qunt);
    }
    
    for (int i = 0; i < 5; i++)
    {
        p[i].display();
        double n;
        cout << "Enter updated Price : (Enter Zero to not update )" <<endl;
        cin>>n;
        if (n!=0)
        {
            p[i].updatePrice(n);
        }
        p[i].discount(5); 

        cout << "After Update & Discount:\n";
        p[i].display();

        cout << "Total Cost: " << p[i].totalCost() << endl;
        






    }
    


    return 0;
}
#ifndef product_h
#define product_h
#include <string>
#include <iostream>
using namespace std;
class product
{
private:
    static int count;
    int id;
    int price;
    int CatId;
    string name;

public:
    product(){
    id=0;
    price=0;
    CatId=0;
    count++;
    };

    product(int id, string name , int price , int catagoryid){
        this->id=id;
        this->name=name;
        this->price=price;
        this->CatId=catagoryid;
        count++;
    };
    ~product(){
        count--;
    };

   product( product &p){
    this->id=p.id;
        this->name=p.name;
        this->price=p.price;
        this->CatId=p.CatId;
        count++;
    };
   
    void display(){
        cout<<"id: "<< id << endl;
        cout<<"name: "<<name<<endl;
        cout<<"price: "<<price<<endl;
        cout<<"catagory id: "<<CatId<<endl;
    } 

    friend product compare(product &a ,product &b){
        if (a.price> b.price)
        {
            return a;
        }
        else if (a.price< b.price)
        {
            return b;
        }
        
    }

};



#endif
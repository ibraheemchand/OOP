#include "product.hpp"
using namespace std;
  
   void product:: set_price(int price){
        this->price=price;
    }
   void product:: set_color(string color){
        this->color=color ;
    }
   void product:: set_model(string model){
        this->model=model;
    }
   void product:: set_specifications(string specification[]){
        for (int i = 0; i < 5; i++)
        {
            this->specification[i]=specification[i];
        }
        
    }

    product::product(){
        set_price(0);
    set_color("N/A");
    set_model("unknown");
    }

      product::product( int p , string color , string model , string specs[]){
        set_price(p);
    set_color(color);
    set_model(model);
    set_specifications(specs);

    }

    product::product(product& other){
        this->color=other.color;
        this->model =other.model;
        this->price =other.price;
        
        for (int i = 0; i < 5; i++)
        {
            this->specification[i]=other.specification[i];
        }
        


    }
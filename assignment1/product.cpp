#include "product.hpp"
#include <iostream>
#include <fstream>
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

    int product::get_price() const{
        return price;
    }
    string product::get_color() const{
        return color;
    }
    string product::get_model() const{
        return model;
    }
    void product::get_specifications() const{
        cout << " Specifications: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout<<specification[i]<<endl;
        }
    }   


    void product::saveToFile(ofstream& file) {
        file << price << endl;
        file << color << endl;
        file << model << endl;
        for (int i = 0; i < 5; i++) {
            file << specification[i] << endl;
        }
    }
    void product::inputBaseData() {
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter color: ";
        cin >> color;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter specifications (5): " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Specification " << (i + 1) << ": ";
            cin >> specification[i];
        }
    }

    void product::displayBaseData() const {
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
        cout << "Model: " << model << endl;
        get_specifications();
    }
    void product::displayDetails() const {
        displayBaseData();
    }

    void product::inputData() {
        inputBaseData();
    }

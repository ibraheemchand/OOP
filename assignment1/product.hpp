#ifndef product_hpp
#define product_hpp
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class product
{
protected:
    int price;
    string color;
    string model;
    string specification[5];
public:
    product(product& other);
    product();
    product::product( int p , string color , string model , string specs[]);
    void set_price(int price);
    void set_color(string color);
    void set_model(string model);
    void set_specifications(string specification[5]);

    int get_price() const;
    string get_color() const;
    string get_model() const;
    void get_specifications() const;

     void inputBaseData();
     void displayBaseData() const;

    static int getProductCount();
    void showAnalysis(product** arr, int size);

    virtual void displayDetails() const ;
    virtual void inputData(); 

    //File handling functions
    void saveToFile(ofstream& file) ;


};


#endif
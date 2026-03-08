#ifndef task.hpp
#define task.hpp
#include <string>
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
};


#endif
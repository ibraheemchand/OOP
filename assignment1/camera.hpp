#ifndef camera_hpp
#define camera_hpp
#include "product.hpp"
#include <string>

class camera : public product
{
private:
    string brand;
   int megapixels;
   int zoom;
   double resolution;

public:
    camera();
    camera(string brand, int megapixels, int zoom, double resolution);


    ~camera();
void setBrand(string brand);
string getBrand();
void setMegapixels(int megapixels);
int getMegapixels();
void setZoom(int zoom);
int getZoom();
void setResolution(double resolution);
double getResolution(); 
    
};





#endif
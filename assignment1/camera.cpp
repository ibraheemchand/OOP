#include "camera.hpp"
#include <iostream>

camera::camera() : product()
{
    brand = "";
    megapixels = 0;
    zoom = 0;
    resolution = 0.0;
}
camera::camera(string brand, int megapixels, int zoom, double resolution)
{
    this->brand = brand;
    this->megapixels = megapixels;
    this->zoom = zoom;
    this->resolution = resolution;
}
camera::~camera()
{
}
void camera::setBrand(string brand)
{
    this->brand = brand;
}
string camera::getBrand()           
{
    return brand;
}   

void camera::setMegapixels(int megapixels)
{
    this->megapixels = megapixels;
}    

int camera::getMegapixels()
{
    return megapixels;
}


void camera::setZoom(int zoom)
{
    this->zoom = zoom;
}

int camera::getZoom()
{
    return zoom;
}

void camera::setResolution(double resolution)
{
    this->resolution = resolution;
}
double camera::getResolution()
{
    return resolution;
}

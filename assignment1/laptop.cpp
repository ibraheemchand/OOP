#include <iostream> 
using namespace std;

#include "laptop.hpp"
laptops::laptops()
{
    ramGB = 0;
    processer = "";
    displayInches = 0.0;
    storageGB = 0;
}
laptops:: laptops(int ram, string processor, double display, int storage)
{
    ramGB = ram;
    processer = processor;
    displayInches = display;
    storageGB = storage;
}
void laptops::setRamGB(int ram){
    ramGB = ram;
}
int laptops::getRamGB() const{
    return ramGB;
}
void laptops::setProcesser(const string processor){
    processer = processor;
}
string laptops::getProcesser() const{
    return processer;
}
void laptops::setDisplayInches(double display){
    displayInches = display;
}
double laptops::getDisplayInches() const{
    return displayInches;
}
void laptops::setStorageGB(int storage){
    storageGB = storage;
}
int laptops::getStorageGB() const{
    return storageGB;
}

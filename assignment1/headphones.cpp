#include "headphones.hpp"
#include "product.hpp"
#include <iostream>
using namespace std;
headphones::headphones():  product()
{
    type = "N/A";
    isNoiseCancelartion = false;
    batteryHours = 0;
    isWireless = false;
}
headphones::headphones(string t, bool noiseCancel, int hours, bool wireless)
{
    setType(t);
    setIsNoiseCancelartion(noiseCancel);
    setBatteryHours(hours);
    setIsWireless(wireless);    
}


void headphones::displayInfo(){
    cout << "Type: " << type << endl;
    cout << "Noise Cancellation: " ;
    
    { if (isNoiseCancelartion)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    }

     
    cout << "Battery Hours: " << batteryHours << endl;
    cout << "Wireless: " << (isWireless ? "Yes" : "No") << endl;
}
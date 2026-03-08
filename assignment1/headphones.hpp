#ifndef headphones_hpp
#define headphones_hpp
#include <string>
using namespace std;
class headphones : public product
{
private:
    string type;
    bool isNoiseCancelartion;
    int batteryHours;
    bool isWireless;

public:
    headphones();
  
    headphones(string t, bool noiseCancel, int hours, bool wireless );
    ~headphones();


    void setType(string t);
    string getType();   

    void setIsNoiseCancelartion(bool noiseCancel);
    bool getIsNoiseCancelartion();

    void setBatteryHours(int hours);
    int getBatteryHours();

    void setIsWireless(bool wireless);
    bool getIsWireless();


    void displayInfo();
    void inputInfo();


};





#endif
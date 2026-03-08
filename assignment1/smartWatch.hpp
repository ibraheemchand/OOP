#ifndef smartWatch_hpp
#define smartWatch_hpp
#include "product.hpp"
#include <string>

class smartWatch : public product
{
private:
        double displaySize;
        int batteryDays;
        bool hasHeartRateMonitor;
        bool hasGPS;
        string operatingSystem;

public:
    smartWatch();
    smartWatch(double displaySize, int batteryDays, bool hasHeartRateMonitor, bool hasGPS, string operatingSystem);
    ~smartWatch();
    void setDisplaySize(double displaySize);
    double getDisplaySize();
    void setBatteryDays(int batteryDays);          
    int getBatteryDays();
    void setHasHeartRateMonitor(bool hasHeartRateMonitor);
    bool getHasHeartRateMonitor();
    void setHasGPS(bool hasGPS);
    bool getHasGPS();
    void setOperatingSystem(string operatingSystem);
    string getOperatingSystem();
};

#endif
#include "smartWatch.hpp"
#include <iostream>
smartWatch::smartWatch() : product()
{
    displaySize = 0.0;
    batteryDays = 0;
    hasHeartRateMonitor = false;
    hasGPS = false;
    operatingSystem = "";
}
smartWatch::smartWatch(double displaySize, int batteryDays, bool hasHeartRateMonitor, bool hasGPS, string operatingSystem)
{    this->displaySize = displaySize;
    this->batteryDays = batteryDays;
    this->hasHeartRateMonitor = hasHeartRateMonitor;
    this->hasGPS = hasGPS;
    this->operatingSystem = operatingSystem;
}
smartWatch::~smartWatch()
{
}
void smartWatch::setDisplaySize(double displaySize)
{    this->displaySize = displaySize;
}
double smartWatch::getDisplaySize()
{    return displaySize;    
}
void smartWatch::setBatteryDays(int batteryDays)            
{    this->batteryDays = batteryDays;
}
int smartWatch::getBatteryDays()
{    return batteryDays;
}
void smartWatch::setHasHeartRateMonitor(bool hasHeartRateMonitor)
{    this->hasHeartRateMonitor = hasHeartRateMonitor;
}
bool smartWatch::getHasHeartRateMonitor()
{    return hasHeartRateMonitor;
}
void smartWatch::setHasGPS(bool hasGPS)
{    this->hasGPS = hasGPS;
}
bool smartWatch::getHasGPS()
{    return hasGPS;
}
void smartWatch::setOperatingSystem(string operatingSystem)
{    this->operatingSystem = operatingSystem;
}
string smartWatch::getOperatingSystem()
{    return operatingSystem;
}       
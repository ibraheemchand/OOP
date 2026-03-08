#include "router.hpp"
#include <iostream>
router::router() : product()
{
    wifiStandard = 0.0;
    speed = 0.0;
    dualBand = false;
    numberOfPorts = 0;
}
router::router(float wifiStandard, double speed, bool dualBand, int numberOfPorts)
{    this->wifiStandard = wifiStandard;
    this->speed = speed;
    this->dualBand = dualBand;
    this->numberOfPorts = numberOfPorts;
}
router::~router()
{
}
void router::setWifiStandard(float wifiStandard)
{
    this->wifiStandard = wifiStandard;
}
float router::getWifiStandard()
{    return wifiStandard;
}       

void router::setSpeed(double speed)
{
    this->speed = speed;
}
double router::getSpeed()
{    return speed;
}

void router::setDualBand(bool dualBand)
{
    this->dualBand = dualBand;
}

bool router::getDualBand()
{
    return dualBand;
}
void router::setNumberOfPorts(int numberOfPorts)
{
    this->numberOfPorts = numberOfPorts;
}
int router::getNumberOfPorts()
{    return numberOfPorts;
}

#ifndef router_hpp
#define router_hpp
#include "product.hpp"
#include <string>

class router : public product
{
private:
    float wifiStandard;
    double speed;
    bool dualBand;
    int numberOfPorts;

public:
    router();
    router(float wifiStandard, double speed, bool dualBand, int numberOfPorts);
    ~router();
    void setWifiStandard(float wifiStandard);
    float getWifiStandard();
    void setSpeed(double speed);
    double getSpeed();  
    void setDualBand(bool dualBand);
    bool getDualBand();
    void setNumberOfPorts(int numberOfPorts);
    int getNumberOfPorts();



};

#endif
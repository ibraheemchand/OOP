#ifndef PRINTER_HPP
#define PRINTER_HPP
#include "product.hpp"
#include <string>
using namespace std;
class Printer : public product{
private:
    int Papersize;
    bool isWireless;
    double ppm;
    string printerType;

public:
    Printer();
    Printer(int size, bool wireless, double speed, string type);
    void setPaperSize(int size);
    int getPaperSize() const;
    void setIsWireless(bool wireless);
    bool getIsWireless() const;
    void setPPM(double speed);
    double getPPM() const;
    void setPrinterType(string type);
    string getPrinterType() const;


    ~Printer();
};

#endif 
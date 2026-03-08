#include "printer.hpp"
using namespace std;
Printer::Printer() {
    Papersize = 0;
    isWireless = false;
    ppm = 0.0;
    printerType = "";
}
Printer::Printer(int size, bool wireless, double speed, string type) {
    Papersize = size;
    isWireless = wireless;
    ppm = speed;
    printerType = type;
}
void Printer::setPaperSize(int size) {
    Papersize = size;
}
int Printer::getPaperSize() const {
    return Papersize;
}
void Printer::setIsWireless(bool wireless) {
    isWireless = wireless;
}
bool Printer::getIsWireless() const {
    return isWireless;
}
void Printer::setPPM(double speed) {
    ppm = speed;
}
double Printer::getPPM() const {
    return ppm;
}
void Printer::setPrinterType(string type) { 
    printerType = type;
}
string Printer::getPrinterType() const {
    return printerType;
}     

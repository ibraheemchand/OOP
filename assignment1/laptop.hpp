#ifndef task.hpp
#define task.hpp
#include <string>
using namespace std;
class laptops
{
private:
    int ramGB;
    string processer;
    double displayInches;
    int storageGB;
public:
    laptops();

    laptops:: laptops(int ram, string processor, double display, int storage);
    
    void setRamGB(int ram);
    int getRamGB() const;
    void setProcesser(const string processor);
    string getProcesser() const;
    void setDisplayInches(double display);
    double getDisplayInches() const;
    void setStorageGB(int storage);
    int getStorageGB() const;


    ~laptops();

};



#endif
#ifndef code1_h
#define code1_h
#include <string>
using namespace std;
class student
{
private:
    int id;
    string name;


public:


    student(){};
    void GetId();
    void setId();

    void getName();
    void setName();

    ~student();
};




#endif
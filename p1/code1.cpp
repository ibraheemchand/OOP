#include "code1.hpp"
#include <iostream>
using namespace std;

void student::GetId(){
    cout << " ID is " << id << endl;
}
void student::setId(){
    cout << "Enter ID: ";
    cin >> id;
}

void student::getName(){
    cout << " Name is " << name << endl;
}
void student::setName(){
    cout << "Enter Name: ";
    cin >> name;
}
student::~student(){};
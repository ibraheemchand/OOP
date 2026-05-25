#include <iostream>
#include <fstream>
using namespace std;

int main(){
    fstream file;
    file.open("sample.txt");

    file << "Hellow world";
    return 0 ;
}
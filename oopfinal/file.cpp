#include <fstream>
#include <iostream>
using namespace std;

int main(){
    string filename = "data.txt"; 
    fstream file;
    file.open(filename.c_str(), ios::app);

    file << "Hello this is chand here \n";
    cout<<"! WRitten successfully";
    file.close();


}
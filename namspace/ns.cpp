#include <iostream>


int var = 4;

namespace lol {
    float var = 23.32;
}



int main(){

    std::cout <<  var << std::endl;
    std::cout <<  lol::var << std::endl;
}
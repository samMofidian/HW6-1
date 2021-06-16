#include <iostream>
#include "Pet.h"

Pet::Pet() : Animal(){}

void Pet::fall() {
    std::cout << " @@@@ Pet fell @@@@" << std::endl;
}

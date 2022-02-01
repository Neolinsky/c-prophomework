#include <iostream>
#include "Car.h"
#include "CountryHouse.h"
#include "Apartment.h"

int main() {

    Property** LofProperties  = new Property*[7];


    LofProperties[0] = new Car(1000);
    LofProperties[1] = new Car(4000);
    LofProperties[2] = new Car(10000);
    LofProperties[3] = new Apartment(10000);
    LofProperties[4] = new Apartment(30000);
    LofProperties[5] = new CountryHouse(1000000);
    LofProperties[6] = new CountryHouse(15000);



   std::cout<< "Fee for your car is:" << LofProperties[0];
   std::cout<< "Fee for your car is:" << LofProperties[1];
   std::cout<< "Fee for your car is:" << LofProperties[2];
   std::cout<< "Fee for your appartmet is:" << LofProperties[3];
   std::cout<< "Fee for your appartmet is:" << LofProperties[4];
   std::cout<< "Fee for your country house is:" << LofProperties[5];
   std::cout<< "Fee for your country house is:" << LofProperties[6];


    return 0;
}

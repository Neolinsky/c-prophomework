//
// Created by andre on 2/1/2022.
//
#include "CountryHouse.h"

#include "CountryHouse.h"

}
CountryHouse::CountryHouse(double worth) : Property(worth){}

double CountryHouse::calculateFee(double worth)  {
    return worth/500;
}

CountryHouse::~CountryHouse() {

}



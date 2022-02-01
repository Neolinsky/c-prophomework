//
// Created by andre on 2/1/2022.
//

#ifndef UNTITLED6_COUNTRYHOUSE_H
#define UNTITLED6_COUNTRYHOUSE_H
#include "Property.h"
class CountryHouse:public Property {


public:
    double calculateFee(double) override;
    CountryHouse(double worth): Property(worth){}
    ~CountryHouse()
    {

    }
};


#endif //UNTITLED6_COUNTRYHOUSE_H

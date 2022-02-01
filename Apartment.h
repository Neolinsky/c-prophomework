//
// Created by andre on 2/1/2022.
//

#ifndef UNTITLED6_APARTMENT_H
#define UNTITLED6_APARTMENT_H
#include "Property.h"

class Apartment:public Property {
public:
    Apartment(double worth) : Property(worth){}
    double calculateFee(double ) override;
    ~Apartment()
    {

    };
};


#endif //UNTITLED6_APARTMENT_H

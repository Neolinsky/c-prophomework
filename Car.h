//
// Created by andre on 2/1/2022.
//

#ifndef UNTITLED6_CAR_H
#define UNTITLED6_CAR_H
#include "Property.h"

class Car:public Property{
public:
    Car(double worth): Property(worth){}

    double calculateFee(double) override ;
    ~Car()
    {

    };
};



#endif //UNTITLED6_CAR_H

//
// Created by andre on 2/1/2022.
//
#include "Car.h"


Car::Car(double worth) : Property(double){}

double Car::calculateFee(double worth) override{
    return worth/200;
}

Car::~Car()
{

}

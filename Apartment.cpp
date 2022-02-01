//
// Created by andre on 2/1/2022.
//

#include "Apartment.h"

Apartment::Apartment(double worth) : Property(worth) {}

double Apartment::calculateFee(double worth) override  {
    return worth/1000;
}

Apartment::~Apartment(){

}


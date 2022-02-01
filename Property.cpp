//
// Created by andre on 2/1/2022.
//

#include "Property.h"

Property::Property(double worth) {
    Worth = worth;
}

double Property::calculateFee(double worth)  {
    std::cout >> "Нельзя расчитать налог не зная тип имущества.";
}

Property::~Property() {}


//
// Created by andre on 2/1/2022.
//

#ifndef UNTITLED6_PROPERTY_H
#define UNTITLED6_PROPERTY_H


class Property {

public:
    Property(double){}

    double Worth{};
   virtual double calculateFee(double) = 0;
   virtual ~Property()
   {

   };
};


#endif //UNTITLED6_PROPERTY_H

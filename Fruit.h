#ifndef FRUIT_H
#define FRUIT_H

#include "FoodPackage.h"

class Fruit: public FoodPackage
{
private:
    bool soldUnit;       // attribute for noting sold units. initialised to false
public:
    Fruit();
    Fruit(string t, int u);  // sets the transport t, number of units, should call the corresponding constructor from the parent class
    void cargoSold(bool b); // set cargo to sold
    bool get_soldUnit();  // return soldUnit attribute
    ~Fruit();
};

#endif

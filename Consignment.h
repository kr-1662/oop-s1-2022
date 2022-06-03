#ifndef CONSIGNMENT_H
#define CONSIGNMENT_H

#include "Cargo.h"
#include "FoodPackage.h"
#include "Fruit.h"

class Consignment
{
private:
    Cargo **csc;
public:
    Consignment();
    Cargo **get_cargo();
    ~Consignment();
};

#endif

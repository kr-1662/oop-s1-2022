#ifndef CARGOS_H
#define CARGOS_H

#include "FoodPackage.h"
#include "Cargo.h"
#include "FoodPackage.h"
#include "Fruit.h"
#include "Consignment.h"

class Cargos
{
public:
    static void sort(FoodPackage **cargo, int n);     // sorts the array of n FoodPackage in ascending 
                                                    // order base on their cargoID
};

#endif
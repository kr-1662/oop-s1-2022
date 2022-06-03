#include "Consignment.h"

Consignment::Consignment()
{
    csc = new Cargo * [5];
    csc[0] = new Fruit("Train",1000);
    csc[1] = new FoodPackage("Automobile",600);
    csc[2] = new FoodPackage("Truck",100);
    csc[3] = new FoodPackage("Train",501);
    csc[4] = new Fruit("Plane", 500);
}

Cargo ** Consignment::get_cargo() {
    return csc;
}

Consignment::~Consignment()
{
    // for (int i = 0; i < 5; i++) {
    //     delete csc[i];
    // }

    // delete csc;
}
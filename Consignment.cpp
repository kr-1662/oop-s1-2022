#include "Consignment.h"

Consignment::Consignment()
{
    csc = new Cargo * [5];
    for (int i = 0; i < 5; i++) {
        if (i == 0 || i == 4) {
            csc[i] = new Fruit("Train", 1000);
        }

        else {
            csc[i] = new FoodPackage("Automobile", 600);
        }
    }
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
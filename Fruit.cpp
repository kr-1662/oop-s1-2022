#include "Fruit.h"

Fruit::Fruit(): FoodPackage()
{
    soldUnit = false;
}

Fruit::Fruit(string t, int u): FoodPackage() {
    transport = t;
    units = u;
    soldUnit = false;
}

void Fruit::cargoSold(bool b) {
    if (units > 500) {
        soldUnit = b;
    }
}

bool Fruit::get_soldUnit() {
    if (units <= 500) {
        soldUnit = false;
        return soldUnit;
    }

    else {
        return soldUnit;
    }
}

Fruit::~Fruit()
{
}
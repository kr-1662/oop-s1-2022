#include <iostream>
#include "Cargo.h"
#include "FoodPackage.h"
#include "Fruit.h"

int main() {
    Fruit f("Airplane", 501);

    f.cargoSold(true);

    cout << f.get_soldUnit() << endl;

    return 0;
}
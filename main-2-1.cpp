#include <iostream>
#include "Cargo.h"
#include "FoodPackage.h"

using namespace std;

int main() {
    FoodPackage fp("Bus", 10);

    cout << fp.get_cargoType() << " " << fp.get_units() << " " << fp.get_transport() << endl;

    return 0;
}
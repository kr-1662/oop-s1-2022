#include <iostream>
#include "Cargo.h"
#include "FoodPackage.h"
#include "Fruit.h"
#include "Consignment.h"

using namespace std;

int main() {
    Consignment c;

    for (int i = 0; i < 5; i++) {
        cout << c.get_cargo()[i]->get_transport() << endl;
    }
    
    return 0;
}
#include <iostream>
#include "House.h"

using namespace std;

int main() {
    House h(5, "James");

    cout << h.get_lot_number() << endl;
    cout << h.get_name() << endl;

    return 0;
}
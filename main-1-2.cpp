#include <iostream>
#include "Orchestra.h"

using namespace std;

int main() {
    Orchestra o(5);
    Musician m("Trumpet", 2);
    Musician m1("Guitar", 3);
    Musician m2("Saxophone", 4);

    o.add_musician(m);
    o.add_musician(m1);
    o.add_musician(m2);

    cout << o.get_current_number_of_members() << endl;
    cout << o.has_instrument("Saxophone");

    return 0;
}
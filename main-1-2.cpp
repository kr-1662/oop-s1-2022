#include <iostream>
#include "Subdivision.h"

using namespace std;

int main() {
    Subdivision s(5, "Wall street");
    House h1(1, "House1"), h2(2, "House2"), h3(3, "House3");

    cout << s.add_house(h1) << endl;
    cout << s.add_house(h2) << endl;
    cout << s.add_house(h3) << endl;


    cout << s.get_name() << endl;
    cout << s.get_current_number_of_houses() << endl;

    return 0;
}
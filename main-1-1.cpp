#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

int main() {
    Musician m;

    cout << m.get_instrument() << endl;
    cout << m.get_experience() << endl;

    return 0;
}
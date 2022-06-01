#include "hunter.h"
#include <iostream>

using namespace std;

int counter = 0;

hunter::hunter(string n, int v): animal(n, v) {
    name = n;
    volume = v;
    kills = 0;
    if (counter == 0) {
        nextID = 1000;
        counter++;
    }
    else {
        nextID++;
    }
}

int hunter:: get_kills() {
    return kills;
}

int hunter::set_kills(int k) {
    kills = k;
}

string hunter:: get_name() {
    cout << "Hunter: ";
    return name;
}

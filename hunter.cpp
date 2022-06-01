#include "hunter.h"
#include <iostream>

using namespace std;

int hunter::nextID = 1000;

hunter::hunter(string n, int v): animal(n, v) {
    name = n;
    volume = v;
    kills = 0;
    animalID = nextID;
    nextID++;
}

int hunter:: get_kills() {
    return kills;
}

void hunter::set_kills(int k) {
    kills = k;
}

string hunter:: get_name() {
    cout << "Hunter: ";
    return name;
}

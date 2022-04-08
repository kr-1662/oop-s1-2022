#include <iostream>
#include "aircraft.h"

using namespace std;

int main() {
    person p1("James1", 234521);
    person p2("James2", 89211);
    person p3("James3", 904101);

    aircraft a("Mayday", p1, p2);

    a.setPilot(p3);
    a.setCoPilot(p1);

    a.printDetails();

    return 0;
}
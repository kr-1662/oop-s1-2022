#include <iostream>
#include "aircraft.h"

using namespace std;

int main() {
    person p1, p2, p3;

    p1.setName("James1");
    p2.setName("James2");
    p3.setName("James3");

    p1.setSalary(442421);
    p2.setSalary(423423);
    p3.setSalary(11451);

    aircraft a("Mayday", p1, p2);

    a.setPilot(p3);
    a.setCoPilot(p1);

    a.printDetails();

    return 0;
}
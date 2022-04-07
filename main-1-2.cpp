#include <iostream>
#include "person.h"
using namespace std;

int main() {    
    person p("Joslyn", 15000);
    person p2("James", 20000);
    person p3("Angela", 25000);
    person p4("Donald", 30000);

    p.setName("fsdfsd");
    p.setSalary(14341);

    p2.setName("opiaom");
    p2.setSalary(31230);

    p3.setName("moavao");
    p3.setSalary(29421);

    p4.setName("opqwri");
    p4.setSalary(89650);

    cout << p.getName() << endl;
    cout << p.getSalary() << endl;

    cout << p2.getName() << endl;
    cout << p2.getSalary() << endl;

    cout << p3.getName() << endl;
    cout << p3.getSalary() << endl;

    cout << p4.getName() << endl;
    cout << p4.getSalary() << endl;
    
    return 0;
}
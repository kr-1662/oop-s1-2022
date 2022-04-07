#include <iostream>
#include "meerkat.h"
using namespace std;

int main() {
    meerkat m, m2, m3, m4;

    m.setName("meerkat1");
    m.setAge(10);

    m2.setName("meerkat2");
    m2.setAge(15);

    m3.setName("meerkat3");
    m3.setAge(20);

    m4.setName("meerkat4");
    m4.setAge(25);
    

    cout << m.getName() << endl;
    cout << m.getAge() << endl;

    cout << m2.getName() << endl;
    cout << m2.getAge() << endl;
    
    cout << m3.getName() << endl;
    cout << m3.getAge() << endl;

    cout << m4.getName() << endl;
    cout << m4.getAge() << endl;

    return 0;
}
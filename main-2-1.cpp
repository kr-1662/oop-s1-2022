#include <iostream>
#include "cart.h"
using namespace std;

int main() {
    cart c;
    meerkat m, m2, m3, m4, m5, m6;

    m.setName("mcat1");
    m.setAge(10);

    m2.setName("mcat2");
    m2.setAge(15);

    m3.setName("mcat3");
    m3.setAge(20);

    m4.setName("mcat4");
    m4.setAge(25);

    m5.setName("mcat5");
    m5.setAge(9);

    m6.setName("mcat6");
    m6.setAge(16);

    c.addMeerkat(m);
    c.addMeerkat(m2);
    c.addMeerkat(m3);
    c.addMeerkat(m4);
    c.addMeerkat(m5);

    c.printMeerkats();

    return 0;
}
#include "cart.h"
#include <iostream>
using namespace std;

cart::cart()
{
    num_of_meerkats = 0;
}

bool flag = true;

bool cart::addMeerkat(meerkat cat) {
    if (num_of_meerkats >= 4) {
        flag = false;
    }
    m_cart[num_of_meerkats] = cat;
    num_of_meerkats++;
    return flag;
}

void cart::emptyCart() {
    num_of_meerkats = 0;
}

void cart::printMeerkats() {
    if (flag == true) {
        for (int i = 0; i < num_of_meerkats; i++) {
            cout << m_cart[i].getName() << " " << m_cart[i].getAge() << endl;
        }
    }
}
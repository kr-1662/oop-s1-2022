#include <string>
#include "meerkat.h"

meerkat::meerkat()
{
}

void meerkat::setName(string meerName) {
    _meerName = meerName;
}

string meerkat::getName() {
    return _meerName;
}

void meerkat::setAge(int meerAge) {
    _meerAge = meerAge;
}

int meerkat::getAge() {
    return _meerAge;
}



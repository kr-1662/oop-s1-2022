#include <iostream>
#include "Library.h"
using namespace std;

int main() {
    Library adl_lib;

    adl_lib.add_book("doc", 145);
    adl_lib.add_book("red", 186);
    adl_lib.add_book("blue", 194);

    adl_lib.borrow_book(145);

    return 0;
}
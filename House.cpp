#include "House.h"

House::House()
{
    _name = "";
    _lot_number = 0;
}

House::House(int newNumber, std::string newName) {
    _lot_number = newNumber;
    _name = newName;
}

std::string House::get_name() {
    return _name;
}

int House::get_lot_number() {
    return _lot_number;
}

House::~House()
{
}
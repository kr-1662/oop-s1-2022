#include "Subdivision.h"

Subdivision::Subdivision()
{
    _name = "";
    _size = 0;
    current_num_of_houses = 0;
}

Subdivision::Subdivision(int max_size, std::string name) {
    _size = max_size;
    current_num_of_houses = 0;
    _name = name;
    arr = new House[_size];
}

bool Subdivision::add_house(House new_house) {
    if (current_num_of_houses < _size) {
        arr[current_num_of_houses] = new_house;
        current_num_of_houses++;
        return true;
    }

    else {
        return false;
    }
}

int Subdivision::get_current_number_of_houses() {
    return current_num_of_houses;
}

std::string Subdivision::get_name() {
    return _name;
}

House * Subdivision::get_houses() {
    return arr;
}

Subdivision::~Subdivision()
{
    delete[] arr;
}

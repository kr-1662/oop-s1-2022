#include "Orchestra.h"

Orchestra::Orchestra()
{
    _size = 0;
    _current_num_members = 0;
    arr = new Musician[_size];
}

Orchestra::Orchestra(int size) {
    _size = size;
    _current_num_members = 0;
    arr = new Musician[_size];
}

bool Orchestra::add_musician(Musician new_musician) {
    if (_current_num_members < _size) {
        arr[_current_num_members] = new_musician;
        _current_num_members++;
        return true;
    }
    else{
        return false;
    }
}

int Orchestra::get_current_number_of_members() {
    return _current_num_members;
}

bool Orchestra::has_instrument(std::string instrument) {
    bool flag;
    for (int j = 0; j < _current_num_members; j++) {
        if (arr[j].get_instrument() == instrument) {
            flag = true;
        }
        else {
            flag = false;
        }
    }
    return flag;
}

Musician * Orchestra::get_members() {
    return arr;
}

Orchestra::~Orchestra()
{
    delete[] arr;
}
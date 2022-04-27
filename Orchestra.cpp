#include "Orchestra.h"

Orchestra::Orchestra()
{
    _size = 0;
}

Orchestra::Orchestra(int size) {
    _size = size;
}

bool Orchestra::has_instrument(std::string instrument) {

}

Musician * Orchestra::get_members() {

}

int i = 0;

bool Orchestra::add_musician(Musician new_musician) {
    _new_musician = new_musician;
    if (i < _size) {
        arr[i] = new_musician;
        i++;
    }
}

int Orchestra::get_current_number_of_members() {
    int num = 0;
    for (int i = 0; i < _size; i++) {
        if ()
    }
}

Orchestra::~Orchestra()
{
    delete[] arr;
}
#include "Cargo.h"

Cargo::Cargo()
{
}

Cargo::Cargo(string t, string m, int u) {
    cargoType = t;
    transport = m;
    if (u > 0) {
        units = u;
    }
}

void Cargo::set_cargotype(string new_t) {
    cargoType = new_t;
}

string Cargo::get_cargotype() {
    return cargoType;
}

string Cargo::get_transport() {
    return transport;
}

int Cargo::get_units() {
    return units;
}

void Cargo::set_transport(string new_m) {
    transport = new_m;
}

void Cargo::set_units(int new_u) {
    if (new_u > 0) {
        units = new_u;
    }
}

Cargo::~Cargo()
{
}
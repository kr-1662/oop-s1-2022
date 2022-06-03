#ifndef CARGO_H
#define CARGO_H

#include <string>

using namespace std;

class Cargo
{
protected:
    string cargoType;                 // the type of Cargo
    string transport;                 // the method to transport the Cargo
    int units;               // units in cargo; takes only non-negative values
public:
    Cargo();
    Cargo(string t, string m, int u);   // creates a Cargo type t, transport mechanism m, and number of units u
    void set_cargoType(string new_t);
    string get_cargoType();
    void set_transport(string new_m);
    string get_transport();
    void set_units(int new_u); 
    int get_units();
    virtual int adjustExpiration() = 0; // adjusts the expiration based on units sold
    ~Cargo();
};

#endif

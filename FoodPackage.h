#ifndef FOODPACKAGE_H
#define FOODPACKAGE_H

#include <string>
#include "Cargo.h"

using namespace std;

class FoodPackage: public Cargo
{
private:
    int cargoID;                 // unique cargo ID
    static int reportID;
public:
    FoodPackage();
    FoodPackage(string t, int u);   // sets transport t, with unit u, also sets cargoType to "FoodPackage"
    void set_cargoID(int i);
    void set_reportID(int r);
    int get_cargoID();
    int get_reportID();
    int adjustExpiration();
    ~FoodPackage();
};

#endif

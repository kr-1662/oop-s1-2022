#include "FoodPackage.h"

int FoodPackage:: reportID = 0;

FoodPackage::FoodPackage(): Cargo() {
}

FoodPackage::FoodPackage(string t, int u): Cargo() {
    cargoType = "FoodPackage";
    transport = t;
    units = u;
    cargoID = reportID;
    reportID++;
}

void FoodPackage::set_cargoID(int i) {
    cargoID = i;
}

int FoodPackage::get_cargoID() {
    return cargoID;
}

void FoodPackage::set_reportID(int r) {
    reportID = r;
}

int FoodPackage::get_reportID() {
    return reportID;
}

int FoodPackage::adjustExpiration() {
    if (transport == "Train") {
        return 0.5 * units;
    }

    else {
        return units;
    }
}

FoodPackage::~FoodPackage() {
}






#include <iostream>
#include "aircraft.h"
#include <string>

using namespace std;

aircraft::aircraft(string callsign,person thePilot,person theCoPilot) {
    _callsign = callsign;
    _Pilot = thePilot;
    _CoPilot = theCoPilot;
}

void aircraft::setPilot(person thePilot) {
    _Pilot = thePilot;
}

person aircraft::getPilot() {
    return _Pilot;
}

void aircraft::setCoPilot(person theCoPilot) {
    _CoPilot = theCoPilot;
}

person aircraft::getCoPilot() {
    return _CoPilot;
}

void aircraft::printDetails() {
    cout << _callsign << endl;
    cout << _Pilot.getName() << endl;
    cout << _CoPilot.getName() << endl;
}
#ifndef VEGIE_H
#define VEGIE_H

#include "animal.h"
#include <string>

using namespace std;

class vegie: public animal
{
private:
    static int nextID;
    string favourite_food;     // the vegie's favourite food, initialise to "grass"
public:
    vegie(string n,int v);      // create a vegie with name n and body volume v
    string get_name();           // returns the vegie's name
    string get_favourite_food();  // returns the vegie's favourite food
    void set_favourite_food(string f);  // sets the vegie's favourite food to f
};

#endif
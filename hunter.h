#ifndef HUNTER_H
#define HUNTER_H

#include "animal.h"
#include <string>

using namespace std;

class hunter: public animal
{
private:
    int kills;               // how many kills have been recorded, initialised to 0
    static int nextID;
public:
    hunter(string n, int v);  // create a hunter with name n and body volume v
    int get_kills();         // returns the number of kills
    void set_kills(int k);    // sets the number of kills to k
    string get_name();       // returns the hunter's name
};

#endif

#ifndef ZOO_H
#define ZOO_H

#include "animal.h"
#include "vegie.h"
#include "hunter.h"
#include <string>

using namespace std;

class zoo
{
private:
    string name;                          // the zoo's name
    int number_of_animals;                // the number of animals in the zoo
public:
    zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions
    string get_name();                      // returns the zoo's name
    void get_number_of_animals();         // returns the zoo's number of animals
    animal **animals;                      // the zoo's animals
    void get_animals();                   // returns the zoo's animals
    ~zoo();
};

#endif



#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;

class animal
{
protected:
    string name;              // the animal's name
    int animalID;      // the animal's unique ID
    int volume;               // the volume of the animal's body
public:
    animal(string n, int v);  // creates an animal with name n and body volume v.Animals are allocated a unique ID on creation
    virtual string get_name() = 0;   // returns the animal's name
    double get_volume();             // returns the animal's body volume
    int get_animalID();           // returns the animal's unique ID
    void set_name(string n);       // sets the animal's name to n
    void set_volume(int v);        // sets the animal's body volume to v
};

#endif
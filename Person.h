#ifndef PERSON_H
#define PERSON_H

#include "Player.h"
#include <string>

class Person: public Player
{
private:
    char *moves[];
public:
    Person();
    void move();
    string getMoves();
    ~Person();
};

#endif

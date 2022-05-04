#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include <string>

class Computer: public Player
{
private:
    
public:
    Computer();
    Computer(string letter);
    void move();
    string getMoves();
    ~Computer();
};

Computer::Computer()
{
}

Computer::~Computer()
{
}

#endif

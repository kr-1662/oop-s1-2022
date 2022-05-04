#ifndef PLAYER_H
#define PLAYER_H

#include <string>

using namespace std;

class Player
{
protected:
    char nextMove;
    int numMoves;
public:
    Player();
    virtual void move();
    string virtual getMoves();
    char getNextMove();
    ~Player();
};

#endif
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person()
{
}

void Person::move() {
    cin >> recentMove;

    if (recentMove == 'r' || recentMove == 'p' || recentMove == 's' || recentMove == 'R' || recentMove == 'P' || recentMove == 'S') {
        numMoves++;
    }
    else {
        cout << "Invalid move. Please enter again." << endl;
        move();
    }
}

string Person::getMoves() {
    
}

Person::~Person()
{
}
#include "vegie.h"
#include <iostream>

using namespace std;

int counter2 = 0;

vegie:: vegie(string n,int v): animal(n,v)
{
    name = n;
    volume = v;
    favourite_food = "grass";
    if (counter2 == 0) {
        nextID = 100;
        counter2++;
    }
    else {
        nextID++;
    }
}

string vegie:: get_name()
{
    cout << "Safe: ";
    return name;
}

void vegie:: get_favorite_food()
{
    cout <<  favourite_food;
}




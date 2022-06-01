#include "vegie.h"
#include <iostream>

using namespace std;

int vegie:: nextID = 100;

vegie:: vegie(string n,int v): animal(n,v)
{
    favourite_food = "grass";
    animalID = nextID;
    nextID++;
}

string vegie:: get_name()
{
    cout << "Safe: ";
    return name;
}

void vegie:: get_favourite_food()
{
    cout <<  favourite_food;
}




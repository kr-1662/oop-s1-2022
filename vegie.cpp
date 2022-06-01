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

string vegie:: get_favourite_food()
{
    return favourite_food;
}

void vegie:: set_favourite_food(string f)
{
    favourite_food = f;
}




#include "animal.h"
#include <iostream>

using namespace std;

animal::animal(string n, int v)
{
    name = n;
    volume = v;
}

string animal::get_name()
{
    return name;
}

double animal::get_volume()
{
    return volume;
}

int animal::get_animalID()
{
    return animalID;
}

void animal::set_name(string n)
{
    name = n;
}

void animal::set_volume(int v)
{
    volume = v;
}

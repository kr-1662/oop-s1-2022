#ifndef SORT_BY_ANIMALID
#define SORT_BY_ANIMALID

#include "animal.h"

class sort_by_animalID
{
private:
    // data members
public:
    static void sort(animal **animals,int n);	// sorts the array of n animals into ascending order using their animalIDs
};

#endif
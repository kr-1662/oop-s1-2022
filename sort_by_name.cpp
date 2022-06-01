#include "sort_by_name.h"

void sort_by_name:: sort(animal **animals, int n)
{
    int i,j;
    animal *temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (animals[j]->get_name() > animals[j+1]->get_name())
            {
                temp = animals[j];
                animals[j] = animals[j+1];
                animals[j+1] = temp;
            }
        }
    }
}
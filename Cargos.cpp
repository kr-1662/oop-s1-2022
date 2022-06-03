#include "Cargos.h"
#include "FoodPackage.h"
#include "Cargo.h"
#include "FoodPackage.h"
#include "Fruit.h"
#include "Consignment.h"

void Cargos::sort(FoodPackage **cargo, int n) {
    int i;
    int j;
    int index;
    int temp;
    int temp2;

    for (i = 0; i < n-1; i++)
    {
        index = i;
        for (j = i+1; j < n; j++)
        {
          if (cargo[j]->get_cargoID() < cargo[index]->get_cargoID())
              index = j;
        }

        swap(cargo[index], cargo[i]);
    }
}
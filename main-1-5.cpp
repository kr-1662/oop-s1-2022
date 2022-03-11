//Both the arrays need to be of similar size else the addition won't work
#include <iostream>
using namespace std;

int main() {
    extern void print_summed_matrices(int array1[3][3],int array2[3][3]);

    int a[3][3] = {{1,1,1},
                   {1,1,1},
                   {1,1,1}};

    int b[3][3] = {{1,1,1},
                   {1,1,1},
                   {1,1,1}};

    print_summed_matrices(a,b);
}
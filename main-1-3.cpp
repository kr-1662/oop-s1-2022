#include <iostream>
using namespace std;

int main() {
    extern void count_numbers(int array[4][4]);

    int a[4][4] = {{2,0,0,0},
                   {0,4,8,8},
                   {0,1,0,0},
                   {0,0,0,9}};

    count_numbers(a);
}
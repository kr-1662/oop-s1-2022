#include <iostream>
using namespace std;

extern void print_sevens(int *nums,int length);

int main() {
    int arr[10] = {1,7,16,5,4,21,63,49,11,12};
    int *ptr = arr;

    print_sevens(ptr, 10);

    return 0;
}
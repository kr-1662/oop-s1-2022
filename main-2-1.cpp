#include <iostream>
using namespace std;

extern void print_sevens(int *nums,int length);

int main() {
    int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    print_sevens(ptr, 5);

    return 0;
}
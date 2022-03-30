#include <iostream>
using namespace std;

extern int* readNumbers();
extern void printNumbers(int *numbers,int length);

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    readNumbers();
    printNumbers(arr, 10);
}
#include <iostream>
using namespace std;

extern void hexDigits(int *numbers, int length);
extern int *readNumbers();

int main() {
    int arr[10] = {10, 11, 1, 2, 3, 4, 5, 6, 7, 8};
    hexDigits(arr, 10);
}
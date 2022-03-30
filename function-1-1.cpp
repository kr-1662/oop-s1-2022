#include <iostream>

int *readNumbers() {
    int *arr = new int[10];

    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }

    delete [] arr;

    return arr;
}

void printNumbers(int *numbers,int length) {
    if (length <= 0) {
        std::cout << 0;
    }

    for (int i = 0; i < length; i++) {
        std::cout << numbers[i];
    }
}
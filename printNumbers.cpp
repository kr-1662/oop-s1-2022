#include <iostream>

void printNumbers(int *numbers,int length) {
    if (length < 0) {
        std::cout << 0;
    }

    for (int i = 0; i < length; i++) {
        std::cout << numbers[i];
    }
}
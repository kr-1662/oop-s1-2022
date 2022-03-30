#include <iostream>
using namespace std;

int *readNumbers() {
    int *arr = new int[10];

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    return arr;
    delete [] arr;
}

void printNumbers(int *numbers,int length) {
    if (length > 0) {
        for (int i = 0; i < length; i++) {
            cout << numbers[i];
    }
  }
}
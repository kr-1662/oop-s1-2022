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

bool equalsArray(int *numbers1,int *numbers2,int length) {
    bool flag = true;

    if (length > 0) {
        if (length < 1) {
            flag = false;
        }
        for (int i = 0; i < length; i++) {
            if (numbers1[i] != numbers2[i]) {
                flag = false;
                break;
            }
            else {
                flag = true;
            }
        }
    }

    return flag;
}

int *reverseArray(int *numbers1,int length) {
    for (int i = 0, j = length-1; i < length; i++, j--) {
        numbers1[i] = numbers1[j];
    }

    return numbers1;
}
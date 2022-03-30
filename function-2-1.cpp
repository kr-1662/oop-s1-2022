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

void hexDigits(int *numbers, int length) {
    if (length <= 0) {
        cout << 0;
    }

    for (int i = 0; i < length; i++) {
        switch (numbers[i])
        {
        case 10:
            cout << i << " " << numbers[i] << " " << 'A' << endl;
            break;

        case 11:
            cout << i << " " << numbers[i] << " " << 'B' << endl;
            break;
        
        case 12:
            cout << i << " " << numbers[i] << " " << 'C' << endl;
            break;

        case 13:
            cout << i << " " << numbers[i] << " "  << 'D' << endl;
            break;

        case 14:
            cout << i << " " << numbers[i] << " "  << 'E' << endl;
            break;

        case 15:
            cout << i << " " << numbers[i] << " "  << 'F' << endl;
            break;

        default:
            cout << i << " " << numbers[i] << " "  << numbers[i] << endl;
            break;
        }
    }
}
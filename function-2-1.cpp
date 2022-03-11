#include <iostream>
using namespace std;

void print_as_binary(string decimal_number) {
    int size = 0;
    int div = stoi(string);
    int num = 0;

    while (div != 0) {
        num = div % 2;
        div /= 2;
        size += 1;
    }

    for (int i = 0; i = size-1; i--) {
        cout << num << " ";
    }

    return;
}
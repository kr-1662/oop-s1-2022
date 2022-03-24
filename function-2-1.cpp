#include <iostream>
using namespace std;

void print_sevens(int *nums,int length) {
    for (int i = 0; i < length; i++) {
        cout << *(nums+i) * 7 << endl;
    }
}
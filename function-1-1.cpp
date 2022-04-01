#include <iostream>
using namespace std;

int* create_ints(int num_vals) {
    int *arr = new int[num_vals];

    for (int i = 0; i < num_vals; i++) {
        arr[i] = i;
    }

    return arr;
    delete [] arr;
}



void display_array(int *vals, int num_vals) {
    for (int i = 0; i < num_vals; i++) {
        cout << vals[i] << " ";
    }
    cout << endl;
    delete [] vals;
}
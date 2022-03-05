#include <iostream>
using namespace std;

int main() {
    extern double average(int array[], int n);
    int array[5] = {10, 11, 16, 13, 7};
    cout << average(array, 5) << endl;

    return 0;
}
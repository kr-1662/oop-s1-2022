#include <iostream>
using namespace std;

int main() {
    extern double average(double array[], double n);
    double array[0] = {};
    cout << average(array, 0) << endl;

    return 0;
}
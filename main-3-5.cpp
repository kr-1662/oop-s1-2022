#include <iostream>
using namespace std;

int main() {
    extern double sumeven(double array[], int n);
    double array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << sumeven(array, 10) << endl;
}
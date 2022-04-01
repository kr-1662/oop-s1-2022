#include <iostream>
using namespace std;

extern void dangerous_values(double vals[],double threshold, int length);

int main() {
    double arr[5] = {20.11, 42.33, 16.74, 51.22, 55};
    dangerous_values(arr, 50.00, 5);
}
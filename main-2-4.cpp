#include <iostream>
using namespace std;

int main() {
    extern bool ascending(int array[], int n);
    int array[0] = {};
    cout << ascending(array, 5) << endl;
}
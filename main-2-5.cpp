#include <iostream>
using namespace std;

int main() {
    extern bool descending(int array[], int n);
    int array[5] = {312, 213, 21, 42, 11};
    cout << descending(array, 5) << endl;
}
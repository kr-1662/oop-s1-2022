#include <iostream>
using namespace std;

int main() {
    extern int count(int array[], int n, int number);
    int array[5] = {1, 2, 3, 4, 5};
    cout << count(array, 5, 3) << endl;

    return 0;
}
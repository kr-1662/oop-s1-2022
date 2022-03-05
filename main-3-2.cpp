#include <iostream>
using namespace std;

int main() {
    extern int median(int array[], int n);
    int array[7] = {121, 16, 44, 600, 1, 21, 22};

    cout << median(array, 7) << endl;
}
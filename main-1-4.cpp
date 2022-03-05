#include <iostream>
using namespace std;

int main() {
    extern int sumtwo(int array[], int secondarray[], int n);
    int array[5] = {1, 2, 3, 4, 5};
    int second_array[5] = {6, 7, 8, 9, 10};
    cout << sumtwo(array, second_array, 5) << endl;

    return 0;
}
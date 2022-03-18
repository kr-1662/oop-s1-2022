#include <iostream>
using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main() {
    int a[5] = {0,1,0,0,1};
    cout << binary_to_number(a, 5) << endl;

    return 0;
}
#include <iostream>
using namespace std;
// code

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main() {
    int a[3] = {1,0,1};
    cout << binary_to_number(a, 3) << endl;
}
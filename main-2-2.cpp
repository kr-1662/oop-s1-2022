#include <iostream>
using namespace std;

int main() {
    extern int binary_to_number(int binary_digits[], int number_of_digits);

    int binary[10] = {1,1,1,1,1,1,1,1,1,1};

    cout << binary_to_number(binary,10) << endl;
}
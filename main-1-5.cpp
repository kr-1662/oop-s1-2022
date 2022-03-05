#include <iostream>
using namespace std;

int main() {
    extern int count_even(int number);
    int number = 10;

    cout << count_even(number) << endl;
}
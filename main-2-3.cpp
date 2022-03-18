#include <iostream>
using namespace std;
// code

extern int sum_if_a_palindrome(int integers[], int length);

int main() {
    int a[5] = {1,2,3,4,5};
    cout << sum_if_a_palindrome(a, 5) << endl;
}
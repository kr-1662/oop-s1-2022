#include <iostream>
using namespace std;
// code

extern int sum_if_a_palindrome(int integers[], int length);

int main() {
    int a[6] = {1,2,3,3,2,4};
    cout << sum_if_a_palindrome(a, 6) << endl;
}
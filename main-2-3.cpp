#include <iostream>
using namespace std;

extern int sum_if_a_palindrome(int integers[], int length);

int main() {
    int a[6] = {1,2,3,3,2,1};

    cout << "The array is a palindrome, hence the sum is: " << sum_if_a_palindrome(a, 6) << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    extern int minimum(int array[], int n);
    int array[0] = {};
    cout << minimum(array, 0) << endl;
     
}
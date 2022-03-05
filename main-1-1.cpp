#include <iostream>
using namespace std;

int main() {
    extern int sum_array(int array[], int n);
    int array[0] = {};
    cout << sum_array(array, 0) << endl;
    
    return 0;
}
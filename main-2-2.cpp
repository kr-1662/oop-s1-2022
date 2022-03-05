#include <iostream>
using namespace std;

int main() {
    extern int maximum(int array[], int n);
    int array[5] = {10, 20, 30, 40, 50};
    cout << maximum(array, 5) << endl;
     
}
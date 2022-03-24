#include <iostream>
using namespace std;

extern void cpyia(int old_array[],int new_array[],int length);

int main() {
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {};

    cpyia(arr, arr2, 5);

    cout << arr[1] << endl;
    cout << arr2[1] << endl;
    return 0;
}
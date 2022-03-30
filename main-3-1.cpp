#include <iostream>
using namespace std;

extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int arr[5] = {4,8,12,1,2};
    int arr2[5] = {4,8,12,1,2};

    cout << equalsArray(arr, arr2, 5);

    return 0;
}
#include <iostream>
using namespace std;

extern int *readNumbers();
extern int *reverseArray(int *numbers1,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main() {
    int arr[5] = {1,2,3,4,5};
    readNumbers();
    reverseArray(arr, 5);
    equalsArray(readNumbers(), arr, 5);
}
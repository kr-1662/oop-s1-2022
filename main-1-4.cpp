#include <iostream>
using namespace std;

extern void cpyda(double *old_array,double *new_array,int length);

int main() {
    double arr[5] = {1.1,2.1,3.1,4.1,5.1};
    double arr2[5] = {};

    double *ptr = arr;
    double *ptr1 = arr2;

    cpyda(ptr, ptr1, 5);

    cout << *(ptr) << endl;
    cout << *(ptr) << endl;

    return 0;
}
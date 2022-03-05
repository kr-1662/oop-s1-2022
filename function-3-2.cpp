#include <iostream>
using namespace std;

int median(int array[], int n) {
    int num = 0;
    int median_num = 0;

    if (n % 2 == 0 || n < 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (array[i] > array[j]) {
                num = array[i];
                array[i] = array[j];
                array[j] = num;
            }
        }
    }

    median_num = array[(n-1)/2];
    return median_num;
}
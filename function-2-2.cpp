#include <cmath>

int binary_to_number(int binary_digits[], int number_of_digits) {
    int conversion = 0;
    for (int i = number_of_digits-1; i >= 0; i--) {
        binary_digits[i] * pow(2, i);
    }
}
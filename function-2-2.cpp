#include <cmath>

int binary_to_number(int binary_digits[], int number_of_digits) {
    int num = 0;
    int multiply = 0;
    int power = 0;

    for (int i = 0; i < number_of_digits; i++) {
        power = (number_of_digits-1)-i;
        multiply = pow(2, power);
        num += binary_digits[i] * multiply;
    }

    return num;
}
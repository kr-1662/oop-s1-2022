// code
bool is_a_palindrome(int integers[], int length) {
    bool statement = false;

    if (length <= 0) {
        statement = false;
    }

    for (int i = 0, j = length-1; i < length; i++,j--) {
        if (integers[i] == integers[j]) {
            statement = true;
        }
        else {
            statement = false;
            break;
        }
    }
    return statement;
}

int sum_elements(int integers[], int length) {
    int sum = 0;

    if (length <= 0) {
        return false;
    }

    for (int i = 0; i < length; i++) {
        sum += integers[i];
    }
    return sum;
}

int sum_if_a_palindrome(int integers[], int length) {
    int sum = 0;
    if (is_a_palindrome(integers, length) == true) {
        sum = sum_elements(integers, length);
    }
}
bool is_a_palindrome(int integers[], int length) {
    bool value = false;
    if (length <= 0) {
        return false;
    }

    for (int i = 0, j = length-1; i < length; i++, j--) {
        if (integers[i] == integers[j]) {
            value = true;
        }
        else {
            value = false;
            break;
        }
    }
    return value;
}

int sum_elements(int integers[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += integers[i];
    }
    return sum;
}

int sum_if_a_palindrome(int integers[], int length) {
    int sum = 0;
    if (is_a_palindrome(integers, length) == 1) {
        sum = sum_elements(integers, length);
    }

    return sum;
}
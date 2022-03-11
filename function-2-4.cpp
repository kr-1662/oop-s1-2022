int max_integer(int integers[], int length) {
    int max_num = integers[0];

    if (length == 0 || length < 0) {
        return -1;
    }

    for (int i = 0; i < length; i++) {
        if (max_num < integers[i]) {
            max_num = integers[i];
        }
    }
    return max_num;
}

int min_integer(int integers[], int length) {
    int min_num = integers[0];

    if (length == 0 || length < 0) {
        return -1;
    }

    for (int i = 0; i < length; i++) {
        if (min_num > integers[i]) {
            min_num = integers[i];
        }
    }
    return min_num;
}

int sum_min_and_max(int integers[], int length) {
    if (length == 0 || length < 0) {
        return -1;
    }

    return max_integer(integers, length) + min_integer(integers, length);
}
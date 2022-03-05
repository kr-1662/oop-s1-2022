int sum_array(int array[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (n >= 1) {
            sum += array[i];
        }
        else {
            sum = 0;
        }
    }
    return sum;
}
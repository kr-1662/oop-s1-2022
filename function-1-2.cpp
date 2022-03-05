double average(int array[], int n) {
    double avg = 0;

    if (n < 1) {
        return 0.0;
    }

    for (int i = 0; i < n; i++) {
        avg += array[i];
    }
    return avg/n;
}
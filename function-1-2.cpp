double average(double array[], double n) {
    double avg = 0;

    for (int i = 0; i < n; i++) {
        if (n >= 1) {
            avg += array[i];
        }
        else {
            avg = 0.0;
        }
    }
    return avg/n;
}
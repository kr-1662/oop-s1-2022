int count(int array[], int n, int number) {
    int elem = 0;

    for (int i = 0; i < n; i++) {
        if (i < number) {
            elem += 1;
        }
    }
    return elem;
}
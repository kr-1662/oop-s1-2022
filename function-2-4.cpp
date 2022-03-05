bool ascending(int array[], int n) {
    bool statement = true;
    if (n <= 0) {
        statement = false;
    }
    for (int i = 1; i < n; i++) {
        if (array[i - 1] > array[i]) {
            statement = false;
        }
    }
    return statement;
}
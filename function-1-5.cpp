int count_even(int number) {
    int count = 0; 

    if (number < 1) {
        return 0;
    }

    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            count += 1;
        }
    }
    return count;
}
int size_of_variable_star_arr_2() {
    int n = 3;
    int *arr = new int[n];
    delete[] arr;
    return sizeof(*arr)*n;
}
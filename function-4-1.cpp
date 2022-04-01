int* min_max(int **vals,int num_rows, int num_cols) {
    int arr[2] = {0,0};
    int max_val = 50;
    int min_val = 50;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (max_val < vals[i][j]) {
                max_val = vals[i][j];
                arr[1] = max_val;
            }
            if (min_val > vals[i][j]) {
                min_val = vals[i][j];
                arr[0] = min_val;
            }
        }
    }
    return arr;
}
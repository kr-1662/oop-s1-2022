#include <iostream>
using namespace std;

int* min_max(int **vals,int num_rows, int num_cols) {
    int val1 = 50;
    int val2 = 50;
    int *max_val = &val1;
    int *min_val = &val2;
    for (int i = 0; i < num_rows; i++) {
        for (int j = 0; j < num_cols; j++) {
            if (*max_val < vals[i][j]) {
                *max_val = vals[i][j];
            }
            if (*min_val > vals[i][j]) {
                *min_val = vals[i][j];
            }
        }
    }
    return min_val, max_val;
}
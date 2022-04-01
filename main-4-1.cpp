#include <iostream>
using namespace std;

extern int* min_max(int **vals,int num_rows, int num_cols);

int main() {
    int arr[2][2] = {{40,50},
                     {1,2}};

    cout << min_max(**arr, 2, 2) << endl;

    return 0;
}
//Both the arrays need to be of similar size else the addition won't work
#include <iostream>
using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j != 2) {
                cout << array1[i][j] + array2[i][j] << " ";
            }
            else if (j == 2) {
                cout << array1[i][j] + array2[i][j];
            }
        }
        cout << endl;
    }
}
#include <iostream>
using namespace std;
// code

void printer(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}
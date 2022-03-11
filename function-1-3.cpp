#include <iostream>
using namespace std;

void count_numbers(int array[4][4]) {
    int num0 = 0, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] == 0) {
                num0 += 1;
            }

            else if (array[i][j] == 1) {
                num1 += 1;
            }

            else if (array[i][j] == 2) {
                num2 += 1;
            }

            else if (array[i][j] == 3) {
                num3 += 1;
            }

            else if (array[i][j] == 4) {
                num4 += 1;
            }

            else if (array[i][j] == 5) {
                num5 += 1;
            }

            else if (array[i][j] == 6) {
                num6 += 1;
            }

            else if (array[i][j] == 7) {
                num7 += 1;
            }

            else if (array[i][j] == 8) {
                num8 += 1;
            }

            else if (array[i][j] == 9) {
                num9 += 1;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            cout << i << ":" << num0 << ";";
        }

        else if (i == 1) {
            cout << i << ":" << num1 << ";";
        }

        else if (i == 2) {
            cout << i << ":" << num2 << ";";
        }

        else if (i == 3) {
            cout << i << ":" << num3 << ";";
        }

        else if (i == 4) {
            cout << i << ":" << num4 << ";";
        }

        else if (i == 5) {
            cout << i << ":" << num5 << ";";
        }

        else if (i == 6) {
            cout << i << ":" << num6 << ";";
        }

        else if (i == 7) {
            cout << i << ":" << num7 << ";";
        }

        else if (i == 8) {
            cout << i << ":" << num8 << ";";
        }

        else if (i == 9) {
            cout << i << ":" << num9 << ";";
        }
    }
}
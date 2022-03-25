#include <iostream>
using namespace std;

int main() {
    int arr[10] = {31,-41,59,26,-53,58,97,-93,-23,84};
    int sum = 0;
    int sum2 = 0;

    for (int i = 0; i < 10; i++) {
        sum += arr[i];
        if (sum < 0) {
            i = arr[0] + i;
            break;
        }
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}
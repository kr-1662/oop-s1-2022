#include <iostream>
using namespace std;

int main() {
    extern int diagonal(int array[4][4]);
    int a[4][4] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9,10,11,12},
                   {13,14,15,16}};

    cout << diagonal(a) << endl;
    return 0;
}
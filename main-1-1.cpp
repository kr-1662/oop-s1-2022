#include <iostream>
using namespace std;

extern int* create_ints(int num_vals);
extern void display_array(int *vals, int num_vals);

int main() {
    display_array(create_ints(5), 5);

    return 0;
}
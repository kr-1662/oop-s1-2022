#include <iostream>
using namespace std;

int main() {
    extern void print_as_binary(string decimal_number);

    print_as_binary("10412");
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

extern void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main() {
    string arr1[3][2] = {{"ddsf","gww"},
                         {"sfsf","dsfsdf"},
                         {"asdfa", "yht"}};

    string arr2[3][2];

    copy_2d_strings(arr1, arr2, 3);

    return 0;
}
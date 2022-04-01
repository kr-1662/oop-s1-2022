#include <iostream>
using namespace std;

extern string lookup_weekday(int day);

int main() {

    cout << lookup_weekday(7) << endl;

    return 0;
}
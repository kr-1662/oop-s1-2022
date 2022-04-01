#include <iostream>
using namespace std;

extern string lookup_weekday(int day);

int main() {

    cout << lookup_weekday(7) << endl;
    cout << lookup_weekday(1) << endl;
    cout << lookup_weekday(3) << endl;
    cout << lookup_weekday(0) << endl;
    cout << lookup_weekday(10) << endl;
    cout << lookup_weekday(6) << endl;
    

    return 0;
}
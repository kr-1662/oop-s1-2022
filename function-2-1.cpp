#include <string>
using namespace std;

string lookup_weekday(int day) {
    string weeks[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    string name;
    int value = 0;
    if (day < 7 || day > 1) {
        if (day == 1) {
            value = 1;
        }
        else if (day == 2) {
            value = 2;
        }

        else if (day == 3) {
            value = 3;
        }

        else if (day == 4) {
            value = 4;
        }

        else if (day == 5) {
            value = 5;
        }

        else if (day == 6) {
            value = 6;
        }

        else if (day == 7) {
            value = 7;
        }
    }
    return weeks[value];
}
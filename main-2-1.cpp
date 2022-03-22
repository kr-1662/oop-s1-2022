#include <iostream>
#include <string>
using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main() {
    float l = 0, r = 0;
    string o;

    cin >> l;
    cin >> r;
    cin >> o;

    cout << add_op(l, r) << endl;
    cout << subtract_op(l, r) << endl;
    cout << arithmetic_ops(l, r, o);


    return 0;
}
#include <string>

float add_op(float left, float right) {
    return left+right;
}

float subtract_op(float left, float right) {
    return left-right;
}

float arithmetic_ops(float left, float right, std::string op) {
    float am = 0;
    if (op == "+") {
        am = add_op(left, right);
    }

    else if (op == "-") {
        am = subtract_op(left, right);
    }
    
    return am;
}
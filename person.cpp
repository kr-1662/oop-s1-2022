#include <string>
#include "person.h"

using namespace std;

person::person() {
    _myName = "";
    _Salary = 0;
}

person::person(string myName,int Salary) {
    _myName = myName;
    _Salary = Salary;
} 

void person::setName(string myName) {
    _myName = myName;
}

string person::getName() {
    return _myName;
}

void person::setSalary(int mySalary) {
    _Salary = mySalary;
}

int person::getSalary() {
    return _Salary;
}
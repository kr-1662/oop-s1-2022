#include <iostream>
#include <string>
using namespace std;

void print_as_binary(string decimal_num) {
    int binary[32];
    int num = stoi(decimal_num);
    int count = 0;
    while(num != 1){
        if(num%2 == 1){
            binary[count] = 1;
        }
        else{
            binary[count] = 0;
        }
        num /= 2;
        count++;
    }
    binary[count] = 1;
    for(int i = count; i >= 0; i = i -1){
        cout << binary[i];
    }
    cout << endl;
}
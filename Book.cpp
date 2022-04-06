#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() {
    name = "";
    isbn = 0;
}

Book::Book(string _name, int _isbn) {
    name = _name;
    isbn = _isbn;
}

Book::~Book() {
    cout << "Book was deleted." << endl;
};
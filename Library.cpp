#include "Library.h"
#include <iostream>
using namespace std;

Library::Library()
{
    cout << "Library created" << endl;
}

void Library::add_book(string _name, int _isbn) {
    books[current_num_books].name = _name;
    books[current_num_books].isbn = _isbn;
    current_num_books++;
}

void Library::remove_book(int _isbn) {
    for (int i = 0; i < 10; i++) {
    if (books[i].isbn == _isbn) {
        books[i].name = "";
        books[i].isbn = 0;
        return;
    }
}
}

void Library::borrow_book(int _isbn) {
    int available_copies = 0;
    for (int i = 0; i < 10; i++) {
        if (books[i].isbn == _isbn && borrow_status[i] == 0) {
            available_copies++;
        }
    }
    cout << available_copies << " available copies" << endl;
    if (available_copies == 0) {
        cout << "Cannot borrow this book. No available copies" << endl;
        return;
    } else {
        for (int i = 0; i < 10; i++) {
            if (books[i].isbn == _isbn) {
                borrow_status[i] = 1;
                cout << "book successfully borrowed" << endl;
                break;
            }
        }
    }

    
}


Library::~Library()
{
}
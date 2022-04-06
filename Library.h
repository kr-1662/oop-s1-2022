#include "Book.h"
#include <string>

using namespace std;

class Library
{
private:
public:
    Library();
    Book books[10];
    int current_num_books = 0;
    bool borrow_status[10] = {0};
    void add_book(string _name, int _isbn);
    void remove_book(int _isbn);
    void borrow_book(int _isbn);
    
    ~Library();
};


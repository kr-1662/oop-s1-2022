#include <string>
using namespace std;

class Book {
public:
    string name;
    int isbn;
    Book(string _name, int _isbn);
    Book();
    ~Book();
};
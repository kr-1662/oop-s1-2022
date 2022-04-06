#include <string>
using namespace std;

class Book
{
private:
    string name;
    int year_of_publication;
    string author;
    string category;
public:
    Book(/* args */);
    ~Book();
    Book(string _name, int _year, string _author, string _category) {
        name = _name;
        year_of_publication = _year;
        author = _author;
        category = _category;
    };
};

Book::Book(/* args */)
{
}

Book::~Book()
{
}

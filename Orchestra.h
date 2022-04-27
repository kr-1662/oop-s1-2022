#include <string>
#include "Musician.h"

class Orchestra
{
private:
    int _size;
    Musician _new_musician;
    Musician *arr = new Musician[_size];
public:
    Orchestra();
    Orchestra(int size);
    int get_current_number_of_members();
    bool has_instrument(std::string instrument);
    Musician *get_members();
    bool add_musician(Musician new_musician);
    ~Orchestra();
};


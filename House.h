#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House
{
private:
    int _lot_number;
    std::string _name;
public:
    House();
    House(int newNumber, std::string newName);
    std::string get_name();
    int get_lot_number();
    ~House();
};

#endif

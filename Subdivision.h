#ifndef SUBDIVISION_H
#define SUBDIVISION_H

#include <string>
#include "House.h"

class Subdivision
{
private:
    std::string _name;
    int _size;
    int current_num_of_houses;
    House *arr;
public:
    Subdivision();
    Subdivision(int max_size, std::string name);
    int get_current_number_of_houses();
    std::string get_name(); 
    House * get_houses();  
    bool add_house(House new_house);
    ~Subdivision();
};


#endif
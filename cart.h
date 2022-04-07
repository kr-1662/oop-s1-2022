#include <string>
#include "meerkat.h"

class cart
{
private:
public:
    meerkat m_cart[4];
    int num_of_meerkats;
    cart();                         // create an empty cart object
    bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
    void emptyCart();               // remove all meerkats from the cart
    void printMeerkats();           // print the name, a space, the age, then a new line
                                    // for each meerkat in the order they were added
};
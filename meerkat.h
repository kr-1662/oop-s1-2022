#include <string>
using namespace std;

class meerkat
{
private:
    string _meerName;
    int _meerAge;
public:
    meerkat();
    void setName(string meerName);
    string getName();
    void setAge(int meerAge);
    int getAge();
};

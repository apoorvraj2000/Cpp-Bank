#include <iostream>
#include <string>
using namespace std;

class Books{
public:
    Books(string x)
    {
        setName(x);
    }
    void setName(string x)
    {
        name=x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
   Books book1("Apoorv");
    cout <<book1.getName() << endl;
    Books book2("Raj");
    cout <<book2.getName() << endl;
    return 0;
}

#include <iostream>

using namespace std;

class myclassone
{
    friend class myclasstwo;
    private:
    int secret=10;
};
class myclasstwo
{
public:
    void showsecret(myclassone mco)
    {
        mco.secret++;
        cout<<mco.secret<<endl;
    }
};


int main()
{
    myclasstwo mct;
    myclassone mco;
    mct.showsecret(mco);
    return 0;
}

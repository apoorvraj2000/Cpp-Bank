#include <iostream>
#include<string>
using namespace std;

class human
{
 private:
     int x;
     int y;
 public:
     void setter(int a,int b)
     {
         x=a;
         y=b;
     }
     void getter()
     {
         cout<<x<<endl<<y<<endl;
     }

    human operator + (human app)
    {
       human sax;
       sax.x=x+app.x;
       sax.y=y+app.y;
       return sax;
    }
};

int main()
{
    human raj,apoorv;
    raj.setter(10,20);
    apoorv.setter(20,10);
    human saxena=raj + apoorv;
    saxena.getter();

}

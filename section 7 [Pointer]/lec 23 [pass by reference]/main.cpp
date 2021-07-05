#include <iostream>

using namespace std;

void passbyvalue(int val)
{
    val=100;
}


void passbyreference(int *val)
{
    *val=200;
}

int main()
{
    int x=20;
    int y=20;
    passbyvalue(x);
    cout<<x<<endl;

    passbyreference(&y);
    cout<<&y<<endl;
   return 0;
}

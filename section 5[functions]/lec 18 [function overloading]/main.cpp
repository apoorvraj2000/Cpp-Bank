#include <iostream>

using namespace std;

void sum(int firstNo , int secondNo)
{
    cout<<"sum of two integer is="<<firstNo+secondNo<<endl;
}

void sum(float firstNo , float secondNo)
{
    cout<<"sum of two float is="<<firstNo+secondNo<<endl;
}
int main()
{
    float a=20.555, b=10.555;
    sum(a,b);
int x=100, y=60;
    sum(x,y);

    return 0;
}

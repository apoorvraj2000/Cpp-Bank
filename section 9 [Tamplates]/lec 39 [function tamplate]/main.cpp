#include <iostream>
#include<string>

using namespace std;

template<class mcbc>
mcbc add(mcbc a , mcbc b)
{
    return a+b;
}
int main()
{
    double x=20.555555;
    double y=30.555555;

    cout << add(x,y) << endl;
    return 0;
}

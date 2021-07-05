#include <iostream>
#include<string>

using namespace std;

template<class first , class second>
first max(first a , second b)
{
    return (a>b?a:b);
}
int main()
{
    int x=56;
    double y=60.555555;

    cout << max(x,y) << endl;
    return 0;
}

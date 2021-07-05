#include <iostream>

using namespace std;

int sum(int a=5 , int b=5)
{
    int result=0;
    result=a+b;
    return result;
}
int main()
{
    cout << sum();
    return 0;
}

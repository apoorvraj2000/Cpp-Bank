#include <iostream>

using namespace std;


void sum(int firstNo , int secondNo)
{
    cout<<"the sum of given no is"<<(firstNo+secondNo)<<endl;
}


int main()
{
    int a,b;
    cout<<"please enter two number"<<endl;
    cin>>a;
    cin>>b;

    sum(a,b);
    return 0;
}


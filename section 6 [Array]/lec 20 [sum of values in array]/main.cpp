#include <iostream>

using namespace std;

int main()
{
    int myarray[6]={10,20,30,40,50,60};
    int sum=0;

    for (int i=0; i<6 ;i++)
{
    sum+=myarray[i];
}
cout<<"sum="<<sum<<endl;
}

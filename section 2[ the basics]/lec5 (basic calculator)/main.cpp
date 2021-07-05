#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"please enter the 1st number="<<endl;
    cin>>a;
    cout<<"please enter the 2nd number="<<endl;
    cin>>b;
    int sum=a+b;
    int subtract=a-b;
    int product=a*b;
    float divide=a/b;
    int remainder=a%b;

    cout<<"the sum is="<<sum<<endl;
    cout<<"the subtraction is="<<subtract<<endl;
    cout<<"the product is="<<product<<endl;
    cout<<"the division is="<<divide<<endl;
    cout<<"the remainder is="<<remainder<<endl;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Please enter the age" << endl;
    cin>>age;
    if(age==20 || age>20)
    {
         cout << "the age entered is correct" << endl;
    }
    else{
         cout << "the age entered is wrong" << endl;
    }
    return 0;
}

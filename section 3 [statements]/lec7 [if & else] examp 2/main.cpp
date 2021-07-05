#include <iostream>

using namespace std;

int main()
{
    int age;
    int height;
    cout << "Please enter the age" << endl;
    cin>>age;
    cout << "Please enter the height" << endl;
    cin>>height;
    if(age==20 && height==100)
    {
         cout << "the age & height entered is correct" << endl;
    }
    else{
         cout << "the age & height entered is wrong" << endl;
    }
    return 0;
}

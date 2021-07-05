#include <iostream>

using namespace std;

int main()
{
    char grade;
    cout<<"please enter the grade"<<endl;
    cin>> grade;

    switch(grade)
    {
       case 'A': cout<<"Excellent"<<endl;
       break;
       case 'B': cout<<"Very good"<<endl;
       break;
       case 'C': cout<<"You passed"<<endl;
       break;
       default:
         cout<<"Invalid entry"<<endl;
         break;


    }
}

#include <iostream>

using namespace std;

int main()
{
  try {
     cout<<"enter the age"<<endl;
     int age=0;
     cin>>age;
     if(age>100 || age<0)
     {
         throw 99;
     }
  }
  catch(int a)
  {
   cout<<"exception occur="<<a<<endl;

  }
}

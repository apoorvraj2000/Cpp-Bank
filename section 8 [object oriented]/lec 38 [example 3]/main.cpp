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
  catch(int e)
  {
   cout<<"exception occur="<<e<<endl;

  }
   catch(char e)
  {
   cout<<"exception occur="<<e<<endl;

  }
   catch(...)
  {
   cout<<"exception occur="<<endl;

  }
}

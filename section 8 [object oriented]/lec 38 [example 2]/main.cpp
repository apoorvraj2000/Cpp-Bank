
//by using standard exception library
#include <iostream>
#include<exception>

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
  catch(std::exception e)
  {
   cout<<"exception occur="<<e.what()<<endl;

  }
}

#include <iostream>

using namespace std;

class Books
{
    public:
          Books()
          {
              cout<<"raj"<<endl;
          }
          ~Books()
          {
              cout<<"Apoorv"<<endl;
          }
};

int main()
{
   Books book1;

   cout<<"first check"<<endl;
   cout<<"second check"<<endl;
   cout<<"third check"<<endl;

    return 0;
}

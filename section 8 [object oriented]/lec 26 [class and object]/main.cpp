#include <iostream>

using namespace std;

class Books{
  public:
       int id=2000;
       void printbookid()
       {
           cout<<"the book id is="<<id<<endl;
       }


};

int main()
{
  Books book1;
    book1.printbookid();
    cout<<book1.id<<endl;

    return 0;
}

#include <iostream>
#include<string>
using namespace std;
#include "Books.h"

int main()
{
    Books book1;
    Books *bookPointer=& book1;

    book1.setBookId(2000);
    cout << book1.getBookId() << endl;

    (*bookPointer).setBookId(300);
    cout << (*bookPointer).getBookId() << endl;

    bookPointer->setBookId(1000);
    cout << bookPointer->getBookId() << endl;
    return 0;
}

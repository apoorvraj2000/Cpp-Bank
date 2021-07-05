#include <iostream>
#include <string>

using namespace std;
#include "Books.h"


int main()
{
    Books book1;
    book1.setBookId(2000);

    cout <<book1.getBookId()<< endl;
    return 0;
}

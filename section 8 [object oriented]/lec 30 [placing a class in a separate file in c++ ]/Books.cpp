#include "Books.h"


Books::Books()
/*::binary scope resolution operator*/
{
    //ctor
}
void Books::setBookId(int bookId_)
{
   bookId=bookId_;
}
int Books::getBookId()
{
   return bookId;
}

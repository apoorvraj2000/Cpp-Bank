#include <iostream>
#include<cstring>

using namespace std;

struct books
{
    char name[50];
    char author[50];
    int id;
};

int main()
{
    struct books book1;
    strcpy(book1.name,"something untold");
    strcpy(book1.author,"raj");
    book1.id=2000;

    cout<<"book 1 name = "<<book1.name<<endl;
    cout<<"book 1 author = "<<book1.author<<endl;
    cout<<"book 1 id = "<<book1.id<<endl;



}

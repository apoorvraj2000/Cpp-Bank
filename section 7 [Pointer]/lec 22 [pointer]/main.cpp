#include <iostream>

using namespace std;

int main()
{
    int var=20;
    cout <<&var<< endl;

    int *intp;
    intp=&var;
    cout<<intp<<endl;
    cout<<*intp<<endl;
    return 0;
}

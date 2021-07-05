#include <iostream>

using namespace std;

int sum(int firstNo , int secondNo)
{
    int result;
    result=firstNo+secondNo;
 return result;
}

int main()
{
    int multiply=2;
    int mainresult;
    mainresult=multiply*sum(10,20);

    cout << "the main result is" <<mainresult<< endl;
    return 0;
}

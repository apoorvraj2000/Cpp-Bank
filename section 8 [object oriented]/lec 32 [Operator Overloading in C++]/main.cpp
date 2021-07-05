#include <iostream>
#include <string>

using namespace std;

class vector{
public:
    int x,y;
     vector () {};
     vector(int a,int b)
     {
         x=a;
         y=b;
     }
    vector operator+(const vector&);
};
vector vector::operator+(const vector& parameter)
{
      vector temp;
      temp.x=x+parameter.x;
       temp.y=y+parameter.y;
       return temp;
     }

int main()
{
    vector vec1(4,2);
    vector vec2(2,2);
    vector result;
    result=vec1+vec2;
    cout<<"the result is("<<result.x<<","<<result.y<<")"<<endl;

    return 0;
}

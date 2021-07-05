#include <iostream>
#include<string>

using namespace std;

template<class T>
class maths {
  T a,b;
  public:
      maths(T x,T y)
      {
          a=x;
          b=y;
      }
      T maxvalue();

};
template<class T>
T maths<T>::maxvalue()
{
    return(a>b?a:b);
}
int main()
{
    maths<int> mat(50,66);
    cout << mat.maxvalue() << endl;
    return 0;
}

#include <iostream>

using namespace std;

template<class T>
class charfinder{
  public:
      charfinder(T a)
      {
          cout<<a<<" is not a valid char"<<endl;
      }
};

template<>
class charfinder<char>{
  public:
      charfinder(char a)
      {
          cout<<a<<" is a valid char"<<endl;
      }
};
int main()
{
    charfinder<char> cha1('a');
     charfinder<int> cha2(22);
      charfinder<float> cha3(55.66);
    return 0;
}

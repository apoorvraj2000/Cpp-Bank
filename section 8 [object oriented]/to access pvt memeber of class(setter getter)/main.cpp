#include <iostream>
#include<string>
using namespace std;

class human{
   private:
       int age;
       int weight;
       string name;
   public:
    void setter(int x,int y,string z)
    {
        age=x;
        weight=y;
        name=z;

    }
   void getter()
    {
        cout<<age<<endl<<weight<<endl<<name;

    }

};
int main(){
   human raj;
   raj.setter(20,60,"apoorv");
   raj.getter();

}

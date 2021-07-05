#include <iostream>

using namespace std;

 class shape
 {
 public:
    void setvalues(int a, int b){
      width =a;
      height= b;
    }
 protected:
    int height;
    int width;
 };

 class rectangle: public shape
 {
 public:
    int area(){
      return(height * width);
    }
 };
  class triangle: public shape
 {
 public:
    int area(){
      return(height * width / 2);
    }
 };
int main()
{
    rectangle rec;
    triangle tri;
    rec.setvalues(15,10);
    tri.setvalues(15,10);
   std:: cout<<"rectangle area="<<rec.area()<<std::endl;
   std::cout<<"triangle area="<<tri.area()<<std::endl;
    return 0;
}

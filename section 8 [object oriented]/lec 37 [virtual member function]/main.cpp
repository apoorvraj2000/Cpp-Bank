#include <iostream>
#include<string>
using namespace std;

 class shape
 {
 public:
    void setvalues(int a, int b){
      width =a;
      height= b;
    }
    virtual int area()
    {
        return 0;
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
    shape poly;
    shape *poly1=&rec;
    shape *poly2=&tri;
    shape *poly3=&poly;
    poly1->setvalues(10,20);
    poly2->setvalues(10,20);
    poly3->setvalues(10,20);
   std:: cout<<"rectangle area="<<rec.area()<<std::endl;
   std::cout<<"triangle area="<<tri.area()<<std::endl;
   std::cout<<"shape area="<<poly.area()<<std::endl;
    return 0;
}

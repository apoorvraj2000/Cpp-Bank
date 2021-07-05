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
 class description
 {
  public:
      void print(string description_)
      {
          cout<<"we are using "<<description_<<" class"<<endl;
      }

 };

 class rectangle: public shape , public description
 {
 public:
    int area(){
      return(height * width);
    }
 };

int main()
{
    rectangle rec;

    rec.setvalues(15,10);
   std:: cout<<"rectangle area="<<rec.area()<<std::endl;
    rec.print("Rectangle");

    return 0;
}

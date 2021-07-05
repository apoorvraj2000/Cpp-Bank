#include <iostream>
using namespace std;

class human
{
private:
    string name;
    int age;
    public:
    human(string iname, int iage)
    {
        name=iname;
        age=iage;
    }
    void tellme()
    {
        cout<<"name"<<endl<<"age"<<endl;
    }
   friend void display(human man);
};

void display(human man)
{
    cout<<man.name<<endl<<man.age;
}

int main()
{
    human anil ("anil",24);
    display(anil);
    return 0;
}

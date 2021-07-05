#include <iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
    vector<int>my_vec;   // decleration of vector
   my_vec.push_back(10); //to insert value in vector
   my_vec.push_back(20);
   my_vec.push_back(30);
   my_vec.push_back(40);
   my_vec.push_back(50);

    cout<<"size->"<<my_vec.size()<<endl; //to print the size of victor

    for(int i=0;i<my_vec.size();i++) //to print all the value
    {
        cout<<"value at "<<i<<"="<<my_vec[i]<<endl;
    }

}

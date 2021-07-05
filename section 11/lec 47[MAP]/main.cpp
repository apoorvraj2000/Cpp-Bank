#include <iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
   map<int ,string>my_map; //decleration of map

   my_map[1]="apoorv";
   my_map[2]="raj";
   my_map[3]="saxena";
   my_map.insert(pair<int,string>(4,"new")); //to insert value in pair

   //my_map.clear(); //used to clear all the data in a map
   //my_map.erase(4); to erase a particular position
   cout<<"size of map="<<my_map.size()<<endl; //to print size of map container
   cout<<"map value->"<<my_map[4]<<endl;; //to print particular value at that point
   cout<<"to check empty="<<my_map.empty();//to check whether container is empty or not

}

#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector <char> v={'a','b','c','e'};
cout<<v.size()<<endl;
cout<<v.at(2)<<endl;
for(char value :v)//for each loop
{
  cout<<value<<endl;
}
}
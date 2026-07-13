#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector <int> v;
  v.push_back(12);
  v.push_back(13);
  v.push_back(14);
  v.push_back(15);
  v.push_back(11);
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
}
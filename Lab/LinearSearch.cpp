#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector <int> &v ,int target)
{
  for(int i=0;i<v.size();i++)
  {
    if(v[i]==target)
    {
      return i;

    }

  }
  return -1;
}
int main()
{
  vector <int> v;
  int n;
  int target;
  cout<<"Enter the size of the vector"<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    int value;
    cout<<"Enter the "<<i+1<<" element of the vector"<<endl;
    cin>>value;
    v.push_back(value);
  }
cout<<"Enter the target element to search"<<endl;
cin>>target;
int index=linearSearch(v,target);
if(index==-1)
{
  cout<<"The target element is not found"<<endl;}
  else{
    cout<<"The target element is found at index "<<index<<endl;
  }


  


}

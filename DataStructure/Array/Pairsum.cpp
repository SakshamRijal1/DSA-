//brute force method
#include<iostream>
#include<vector>
using namespace std;
vector <int> pairSum(vector <int> &v,int target)
{
 for (int i=0;i<v.size();i++)
 {
  for(int j=0;j<v.size();j++)
  {
    if((v[i]+v[j])==target)
    {
      return {i,j};
    }
  }
 }
}
int main()
{
  vector <int> arr={1,3,2,6};
 int target=9;
 vector <int> v=pairSum(arr,target);
 for(int val :v)
 {
  cout<<val<<endl;
 }



}
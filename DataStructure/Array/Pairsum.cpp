//brute force method
// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int> pairSum(vector <int> &v,int target)
// {
//  for (int i=0;i<v.size();i++)
//  {
//   for(int j=0;j<v.size();j++)
//   {
//     if((v[i]+v[j])==target)
//     {
//       return {i,j};
//     }
//   }
//  }
// }
// int main()
// {
//   vector <int> arr={1,3,2,6};
//  int target=9;
//  vector <int> v=pairSum(arr,target);
//  for(int val :v)
//  {
//   cout<<val<<endl;
//  }



// }

//optimal aaproach

#include<iostream>
#include<vector>
using namespace std;
vector <int> pairSum(vector <int> &v, int target)
{
  vector <int> index;
   int pairSum=0;
   int start=0;
   int end=v.size()-1;
   for(int i=0;i<v.size();i++)
   { 
   pairSum+=(v[start]+v[end]);
  if(pairSum>target)
  {
end--;
pairSum=0;
  }
  else if(pairSum<target)
  {
start++;
pairSum=0;
  }
  else{
return {start,end};
  }
   }
}
int main()
{
  vector <int> vec={2,7,8,9};
  int target=10;
  vector <int> v=pairSum(vec,target);
  for(int val :v)
  {
    cout<<val<<endl;
  }

}
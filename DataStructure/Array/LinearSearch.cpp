#include<bits/stdc++.h>
using namespace std;
int main()
{
  bool found=false;
  int target;
  cout<<"Enter your target element"<<endl;
  cin>>target;
  int arr[]={4,2,7,8,1,2,5};//target=8
  for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
  {
    if(arr[i]==target)
    {
      cout<<"The searched element is found which is "<<arr[i]<<" and the index is "<<i<<endl;
      found=true;
    return 0;  
   }

  }
  if(!found)
  {
    cout<<"The searched number is not found"<<endl;
  }
  return 0;
}




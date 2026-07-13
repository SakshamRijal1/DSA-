#include<bits/stdc++.h>
using namespace std;
void findCommon(int arr1[],int arr2[],int size1,int size2)
{
  cout<<sizeof(arr1)<<endl;

  for(int i=0;i<size1;i++){
    int count=0;
    for(int j=0;j<size2;j++)

    {
      if(arr1[i]==arr2[j])
      {
          count++;
          break;
      }
    }
    if(count==1)
    {
      cout<<arr1[i]<<endl;
    }
  }

}
int main()
{
  int arr1[]={1,2,3,4};
  int arr2[]={3,4,5,6};
    int size1=sizeof(arr1)/sizeof(int);
  int size2=sizeof(arr2)/sizeof(int);
  findCommon(arr1,arr2,size1,size2);

}
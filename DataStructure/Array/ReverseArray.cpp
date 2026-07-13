//reverse an array using two poninter approach
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[],int size)
{
int start=0;
int last=size-1;
while (start<last)
{
swap(arr[start],arr[last]);
  start++;
  last--;

}


}
int main()
{

  int arr[]={1,3,5,18,9};
  int size=sizeof(arr)/sizeof(int);
reverseArray(arr,size);
for(int i=0;i<size;i++)
{
  cout<<arr[i]<<endl;
  
}


}


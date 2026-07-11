
//in array there is implicitly pass by reference when we call the function with array as a argument argument
#include<bits/stdc++.h>
using namespace std;
void changeArray(int arr[],int size)
{
   for(int i=0;i<size;i++)
   {
    arr[i]=(10-arr[i])*arr[i];

   }
}
int main()
{
  int arr[5]={1,3,5,7,9};
  changeArray(arr,sizeof(arr)/sizeof(int));

    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
   {
   cout<<arr[i]<<endl;

   }
   return 0;

}
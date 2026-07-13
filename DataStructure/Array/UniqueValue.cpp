// #include<bits/stdc++.h>
// using namespace std;
// void findUnique(int arr[],int size)
// {
//    for(int i=0;i<size;i++)
//    {
//     int count=0;
//     for(int j=0;j<size;j++)
//     {
//       if(arr[i]==arr[j])
//       {
//         count++;
//       }

//     }
//           if(count==1)
//       {
// cout<<arr[i]<<endl;
//       }
//    }
// }
// int main()
// {
//  int arr []={1,3,1,3,4,1,4};
//  int size=sizeof(arr)/sizeof(int);

//  findUnique(arr,size);
// }

#include<bits/stdc++.h>
using namespace std;
void findUnique(int arr[],int size)
{



  for(int i=0;i<size;i++)
  {
      int count=0;
    for(int j=0;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
      }
    }
    if(count==1)
    {
      cout<<arr[i]<<endl;
    }
  }



}
int main()
{
   int arr[]={1,2,5,2,6,1};
   int size=sizeof(arr)/sizeof(int);
   findUnique(arr,size);


}
//kadane's algorithm

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={-2,-1,-3};
  int size=sizeof(arr)/sizeof(int);
  int max_sum=INT_MIN;
  int curr=0;
  for(int i=0;i<size;i++)
  {
   curr+=arr[i];
   max_sum=max(max_sum,curr);
   if(curr<0)
   {
    curr=0;
   }

  }
cout<<max_sum<<endl;

    
    return 0;
}

//brute force method
// #include<iostream>
// #include<climits>
// #include<algorithm>
// using namespace std;
//  int main()
//  {
//   int arr[]={1,2,3,4,5};
//   int size=sizeof(arr)/sizeof(int);
//   int maxSum=INT_MIN;
//   for(int start=0;start<size;start++)
//   {
//     int currSum=0;
//     for(int end=start;end<size;end++){
//       currSum+=arr[end];
//       maxSum=max(maxSum,currSum);

//     }
//   }
//   cout<<maxSum<<endl;
//  }

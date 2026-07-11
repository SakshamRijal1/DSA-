// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//   vector <int> arr{4,-10,7,8,10};

// int largest=arr[0];
// int smallest=arr[0];


//   for(int i=1;i<arr.size();i++)
//   {
// if(arr[i]>largest)
// {
//   largest=arr[i];
// }
// if(arr[i]<smallest)
// {
//   smallest=arr[i];
// }
//   }
//   cout<<"The smallest value in the array is "<<smallest<<" and the largest value in the array is "<<largest<<endl;
//   return 0;
// }


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  vector <int> arr{1,3,-10,100,-99,899};

  int largest=INT_MIN;
  int smallest =INT_MAX;
  for(int i=0; i<arr.size();i++)
  {
    largest=max(arr[i],largest);
    smallest=min(arr[i],smallest);
  }
  cout<<"The smallest element in the array is "<<smallest <<" and the largest in the array is "<<largest<<endl;
  return 0;


}
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int> &v , int target)
{
int start=0;
int end=v.size()-1;
while (start<=end)
{
  int middle=start +(end-start)/2;
  if(v[middle]==target)
  {
    return middle;
  }
  else if(v[middle]>target)
  {
    end=middle-1;

  }
  else{
    start=middle+1;
  }


}
return -1;
}

int main()
{
  vector <int> v={1,2,3,4,5};
int index=binarySearch(v,3);
if(index==-1)
{
  cout<<"The target element is not found"<<endl;

}
else{
  cout<<"The target element is found at index"<<index<<endl;
}
  
    
    return 0;
}
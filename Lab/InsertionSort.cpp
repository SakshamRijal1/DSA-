#include<iostream>
#include<vector>

using namespace std;// 5 4 3 1 2
vector <int> insertionSort(vector <int> &v)
{
for(int i=1;i<v.size();i++)
{
  int value=v[i];
  int j=i-1;
  while (j>=0 && v[j]>value)
  {
   v[j+1]=v[j];
   j--;

  }
  v[j+1]=value;
  


}
}

int main(){
  vector <int> v={5,4,3,1,2};
  vector <int> sortedArray=insertionSort(v);
  cout<<"Ther sorted array is give by: ";
  for(int value :sortedArray)
{
  cout<<value<<" ";
}
    
    return 0;
}
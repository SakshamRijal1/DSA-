#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector <int> &v)
{
 int target=5;
 for(int i=0;i<v.size();i++)
 {
  if(v[i]==target)
  {
    return i;
  }
 }

}
int main()
{
vector <int> v={1,2,3,4,5};
int index=linearSearch(v);
cout<<"Found at index "<<index<<endl;


}
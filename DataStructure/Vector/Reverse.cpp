#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseArray(vector <int> &v)
{
  int first=0;
  int last=v.size()-1;

while (first<last)
{
  swap(v[first],v[last]);
  first++;
  last--;
}

}
int main(){
    vector <int> v={1,2,3,4,5,6};
        
    reverseArray(v);
        for(int val:v)
    {
      cout<<val<<endl;
    }
    
    
    return 0;
}
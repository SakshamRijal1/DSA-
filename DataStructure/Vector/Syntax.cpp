#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector <int> v={1,2,3};
    cout<<v.size()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.back()<<endl;
    cout<<v.front()<<endl;
 v.push_back(5);
 v.push_back(4);
 v.push_back(7);
    cout<<v.back()<<endl;

for(int value :v)
{
  cout<<"This is inside foreach loop"<<value<<endl;
}



    return 0;
}
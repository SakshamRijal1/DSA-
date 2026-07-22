#include<iostream>
#include<vector>
using namespace std;
int findMajor(vector <int> nums)
{
 int criteria=nums.size()/2;
      
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            int num=nums[i];
       for(int j=0;j<nums.size();j++)
       {
        if(num==nums[j])
        {
            count++;
        }
        

       }
       if(count>criteria)
       {
        return num;
       }
        }
        return -1;
    }

int main()
{
  vector <int> v={1,2,2};
  cout<<"Majority number is "<<findMajor(v)<<endl;

}
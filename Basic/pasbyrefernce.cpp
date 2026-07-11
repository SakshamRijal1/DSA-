#include<bits/stdc++.h>
using namespace std;
void doSomething(int &num)
{
  num+=5;
  cout<<"Num becomes "<<num<<" at doSomething  function."<<endl;
  num+=10; 
   cout<<"Num becomes "<<num<<" at doSomething function."<<endl;
     num+=15; 

}
int main()
{
 int n=10;
 doSomething(n);
   cout<<"Num becomes "<<n<<" at main function."<<endl;

}
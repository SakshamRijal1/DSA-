#include<iostream>
using namespace std;

int main(){
    int num=5;
    cout<<"Bitwise AND "<<(num & 0)<<endl;//0
    cout<<"Bitwise OR "<<(num | 0)<<endl;//5
    cout<<"Bitwise NOT "<<(~num)<<endl;//2
    cout<<"Bitwise XOR "<<(num^num)<<endl;//0
    cout<<"Bitwise XOR "<<(num^0)<<endl;//5
    cout<<"Bitwise LEFT SHIFT "<<(num <<1)<<endl;//10
    cout<<"Bitwise  RIGHT SHIFT "<<(num >>1)<<endl;//2
    return 0;
}
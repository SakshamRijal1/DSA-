

#include<iostream>
#include <stack>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

bool isOperator(char ch)
{
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}


bool isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') ||
           (ch >= 'A' && ch <= 'Z') ||
           (ch >= '0' && ch <= '9');
}
string infixtoPostfix(string infix)
{
  stack <char> s;
  string postfix;
 for(char ch :infix)
 {
  if(isOperand(ch))
  {
    postfix+=ch;
  }
  else if(ch=='(')
  {
    s.push(ch);
  }
  else if(ch==')')
  {
    while (s.top() !='(' )
    {
     postfix+=s.top();
     s.pop();
    }
    if(!s.empty())
    {
      s.pop();
    }
    
  }
  else if(isOperator(ch))
  {
    while (!s.empty() && s.top()!='(' && (
      precedence(ch)<=precedence(s.top())
    ) )
    {
     postfix+=s.top();
     s.pop();
    }
    s.push(ch);
    
  }
 }
 while (!s.empty())
 {
 postfix+=s.top();
 s.pop();

 }
 
 return postfix;

}



int main(){
    string infix;
    cout<<"Enter the infix expression"<<endl;
    cin>>infix;
    cout<<"Infix to postfix is given by "<<infixtoPostfix(infix)<<endl;
    return 0;
}
#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;
void reverse(string s)
{
  stack<string> st;
  for(int i=0;i<s.length();i++)
  {
   string word="";
   while(s[i]!=' ' and i<s.length())
   {
     word+=s[i];
     i++;
   }
   st.push(word);
  }
  while(!st.empty())
  {
  cout<<st.top()<<" ";
  st.pop();
  }cout<<endl;
}
int main()
{
 string s="hii my name is zack";
 reverse(s);
 return 0;
}
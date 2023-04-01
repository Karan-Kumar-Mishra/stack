#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;
// reverse a array using stack
int main()
{
    stack<int> s1;
    int arr[5],temp;
    clog<<"Enter the number =>"<<endl;
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {
        s1.push(arr[i]);
    }
    while(!s1.empty())
    {
        cerr<<s1.top()<<" ";
        s1.pop();
    }

    return 0;
}
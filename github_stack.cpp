#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class stack
{

    int top;
    int capacity;
    int *a;

public:
    ~stack()
    {
        delete []a;
    }
    void creat(int c)
    {
        
        top=-1;
        capacity=c;
        a= new int[capacity];
    }
    void push(int data)
    {
        top++;
        a[top]=data;
    }
    void pop()
    {
        top--;
    }
    void display()
    {
        for(int i=0; i<=top; i++)
            cout<<" "<<a[i];
        getch();
    }
};
int main()
{
    stack s1;
    int data,cmd,c;
    while(1)
    {
        clrscr();
        cout<<"+----------------------------------+"<<endl;
        cout<<"|            [~STACK~]             |"<<endl;
        cout<<"+----------------------------------+"<<endl;
        cout<<"note : plese creat stack firstly"<<endl;
        cout<<"1.creat stack"<<endl;
        cout<<"2.push data "<<endl;
        cout<<"3.pop data"<<endl;
        cout<<"4.display"<<endl;
        cout<<"5.exit"<<endl;
        cout<<"enter the option=>>"<<endl;
        cin>>cmd;
        switch(cmd)
        {
        case 1:
            cout<<"enter the capacity of stack=>"<<endl;
            cin>>c;
            s1.creat(c);
            break;
        case 2:
            cout<<"enter the data=>"<<endl;
            cin>>data;
            s1.push(data);
            break;
        case 3:
            s1.pop();
            break;
        case 4:
            s1.display();
            break;
        case 5:
            return 0;
            break;
        default:
            cout<<"command is not found ?"<<endl;
            break;
        }
        getch();
    }
    return 0;
}
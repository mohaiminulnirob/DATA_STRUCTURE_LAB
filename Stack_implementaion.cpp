#include<bits/stdc++.h>
using namespace std;
#define MAX 5
int stk[MAX];
int top=-1;

void push(int data)
{
    if(top==MAX-1)
    {
        cout<<"stack overflow"<<endl;
        return;
    }
    top++;
    stk[top]=data;
}
void pop()
{
    int value;
    if(top==-1)
    {
        cout<<"stack underflow\n";
    }
    else{
    value=stk[top];
    cout<<value<<endl;
    top--;
    }
}
void print()
{
    int i;
    if(top==-1)
    {
        cout<<"stack underflow";
        return;
    }
    for(i=top;i>=0;i--)
        cout<<stk[i]<<" ";
    cout<<endl;
}

int main()
{
   cout<<"1.push\n2.pop\n3.print\n4.end\n";
   int c=1;
   while(c)
   {
   cout<<"enter:";
   int x;
   cin>>x;
   switch(x)
   {
   case 1:{
       int data;
       cout<<"data:";
       cin>>data;
       push(data);
       break;
   }
   case 2:{
       pop();
       break;
   }
   case 3:{
       print();
       break;
   }
   case 4:{
       c=0;
       break;
   }
   }
   }
   return 0;
}

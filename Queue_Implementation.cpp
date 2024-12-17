#include<bits/stdc++.h>
using namespace std;
#define N 5
int q[N];
int f=-1;
int r=-1;
void enqueue(int x)
{
    if(f==-1 && r==-1)
    {
        f=0;
        r=0;
        q[r]=x;
    }
    else if((r+1)%N==f)
        cout<<"queue is full\n";
    else{
        r=(r+1)%N;
        q[r]=x;
    }
}
void dequeue()
{
     if(f==-1 && r==-1)
        cout<<"queue is empty\n";
     else if(f==r)
     {
         cout<<q[f]<<endl;
         f=-1;
         r=-1;
     }
     else {
        cout<<q[f]<<endl;;
        f=(f+1)%N;
     }
}
void display()
{
    if(f==-1 && r==-1)
        cout<<"queue is empty\n";
    else{
    for(int i=f;i<=r;i=(i+1)%N)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
    }
}
int main()
{
   cout<<"1.Enqueue\n2.dequeue\n3.display\n4.end\n";
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
       enqueue(data);
       break;
   }
   case 2:{
       dequeue();
       break;
   }
   case 3:{
       display();
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

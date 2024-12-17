#include<bits/stdc++.h>
using namespace std;
struct node *head=nullptr;
struct node{
    int data;
    struct node* next;
};
void create_linkedlist()
{
    struct node* temp=nullptr,*newnode;
    temp=head;
    temp->next=nullptr;
    for(int i=1;i<5;i++)
    {

       newnode=(struct node*) malloc(sizeof(struct node*));
       cout<<"enter data of "<<i+1<<"th node: ";
       cin>>newnode->data;
       newnode->next=nullptr;
       temp->next=newnode;
       temp=newnode;
    }

}
void print_linkedlist()
{
    struct node* temp=nullptr;
    temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
/*void inserting_linkedlist(struct node *newnode)
{
    struct node *temp=head,*prev,*nextnode;
    while(temp!=nullptr)
    {
        if(temp->data==2)
        {
            prev=temp;
            nextnode=temp->next;
            newnode->next=nextnode;
            prev->next=newnode;
        }
        temp=temp->next;
    }

}*/
int main()
{
    head=(struct node*) malloc(sizeof(struct node*));
    cout<<"enter data of 1th node: ";
    cin>>head->data;
    head->next=nullptr;
    create_linkedlist();
    print_linkedlist();
    //struct node *newnode=nullptr;
    //newnode=(struct node*) malloc(sizeof(struct node*));
    //newnode->data=5;
    //newnode->next=nullptr;
    //int value=2;
    //inserting_linkedlist(newnode);
    print_linkedlist();
    return 0;
}

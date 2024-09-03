#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    listnode *next;
    listnode *prev;
}*nodeptr;
nodeptr head=NULL,tail=NULL;
void AddData(int value)
{
    nodeptr newnode=new listnode;
    newnode->data=value;
    newnode->prev=NULL;
    newnode->next=tail;
    head=newnode;
    tail=head;
}
void first(int item)
{
    nodeptr newnode=new listnode;
    newnode->data=item;
    newnode->prev=NULL;
    newnode->next=head;
    head=newnode;
}
void middle(int item)
{
    nodeptr newnode=new listnode;
    newnode->data=item;
    nodeptr ptr=head;
    while(ptr->data!=3&&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==3)
    {
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    else
    {
        cout<<"3 NOT FOUND"<<endl;
    }
}
void last(int item)
{
    nodeptr newnode=new listnode;
    newnode->data=item;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        nodeptr ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }

}
void print()
{
    nodeptr ptr=head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main()
{
    AddData(1);
    print();
    AddData(2);
    print();
    AddData(3);
    print();
    AddData(4);
    print();
    AddData(5);
    print();
    cout<<"FFFFFFFFFFFFFFFFFFFFFFF"<<endl;
    first(65);
    print();
    cout<<"FFFFFFFFFFFFFFFFFFFFFFF"<<endl;
    middle(100);
    print();
    cout<<"FFFFFFFFFFFFFFFFFFFFFFF"<<endl;
    last(200);
    print();
    last(600);
    print();
    last(800);
    print();

}





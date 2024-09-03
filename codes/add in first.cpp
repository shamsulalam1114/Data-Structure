#include<iostream>
using namespace std;
typedef struct listnode
{
    int data;
    listnode *next;
}*nodeptr;
nodeptr head=NULL,curr;

void AddData(int value)
{
    nodeptr newnode=new listnode;
    newnode->data=value;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        curr->next=newnode;
    }
    curr=newnode;
}
void first(int item)
{
    nodeptr newnode= new listnode;
    newnode->data=item;
    newnode->next=head;
    head=newnode;
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

    cout<<endl;

    first(9);
    print();
    first(10);
    print();
    AddData(11);
    print();

}



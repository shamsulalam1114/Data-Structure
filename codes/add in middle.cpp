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
void middle(int item)
{
    nodeptr newnode= new listnode;
    newnode->data=item;
    nodeptr ptr=head;
    while(ptr->data!=2 && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==2)
    {
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    else
    {
        cout<<"2 NOT FOUND";
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

    cout<<endl;

    middle(100);
    print();

}




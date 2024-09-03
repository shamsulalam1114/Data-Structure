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
void del_first()
{
    nodeptr ptr=head;
    head=ptr->next;
    delete(ptr);
}

void print()
{
    nodeptr ptr=head;
    if(ptr!=NULL)
    {
        while(ptr != NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
    else
    {
        cout<<endl;
        cout<<"List is empty";
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

    cout<<endl;

    del_first();
    print();
    del_first();
    print();
    del_first();
    print();
    del_first();
    print();
    del_first();
    print();
    print();
    print();
}


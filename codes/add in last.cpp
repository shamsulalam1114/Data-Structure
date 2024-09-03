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
void last(int item)
{
	nodeptr newnode = new listnode;
	newnode->data = item;
	newnode->next = NULL;

	if(head==NULL)
    {
        head = newnode;
    }
	else
	{
	    curr =head;
		while(curr->next != NULL)
		{
			curr = curr ->next;
        }
		curr->next = newnode;
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

    cout<<endl;

    last(9);
    print();
    last(10);
    print();
}

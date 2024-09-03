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

void middle_node_dlt(int item)
{
	nodeptr ptr = head, dptr;
	while(ptr->next->data != item && ptr->next !=NULL){
		ptr= ptr->next;
		}
	dptr = ptr->next;
	ptr->next = ptr->next->next;
	delete(dptr);
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
    AddData(6);
    print();
    AddData(7);
    print();

    cout<<endl;

    middle_node_dlt(2);
    print();
    middle_node_dlt(3);
    print();
    middle_node_dlt(4);
    print();
    middle_node_dlt(5);
    print();


    print();
    print();
}




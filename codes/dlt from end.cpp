#include<iostream>
using namespace std;

typedef struct listnode
{
    int data;
    listnode *next;
}*nodeptr;

nodeptr head = NULL, curr;

void AddData(int value)
{
    nodeptr newnode = new listnode;
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        curr->next = newnode;
    }
    curr = newnode;
}

void Last_node_dlt()
{
    if (head == NULL)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    nodeptr ptr = head;
    nodeptr dptr = NULL;

    // If there is only one node in the list
    if (ptr->next == NULL)
    {
        delete ptr;
        head = NULL;
        return;
    }

    while (ptr->next != NULL)
    {
        dptr = ptr;
        ptr = ptr->next;
    }

    delete ptr;
    dptr->next = NULL;
}

void print()
{
    nodeptr ptr = head;
    if (ptr != NULL)
    {
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
    }
    else
    {
        cout << endl;
        cout << "List is empty";
    }
    cout << endl;
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

    cout << endl;

    Last_node_dlt();
    print();
    Last_node_dlt();
    print();
    Last_node_dlt();
    print();
    Last_node_dlt();
    print();
    Last_node_dlt();
    print();

    return 0;
}

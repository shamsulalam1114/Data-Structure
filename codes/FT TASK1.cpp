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

void first(int item)
{
    nodeptr newnode = new listnode;
    newnode->data = item;
    newnode->next = head;
    head = newnode;
}

void middle(int item)
{
    nodeptr newnode = new listnode;
    newnode->data = item;
    nodeptr ptr = head;
    while (ptr->data != 2 && ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    if (ptr->data == 2)
    {
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    else
    {
        cout << "2 NOT FOUND";
    }
}

void del_first()
{
    if (head == NULL)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    nodeptr ptr = head;
    head = ptr->next;
    delete(ptr);
}

void middle_node_dlt(int item)
{
    if (head == NULL)
    {
        cout << "List is empty. Cannot delete from an empty list." << endl;
        return;
    }

    nodeptr ptr = head, dptr;
    while (ptr->next->data != item && ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    dptr = ptr->next;
    ptr->next = ptr->next->next;
    delete(dptr);
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
        cout << "List is empty";
    }
    cout << endl;
}


void search(int item)
{
    nodeptr ptr = head;
    bool found = false;
    while (ptr != NULL)
    {
        if (ptr->data == item)
        {
            cout << "Item " << item << " found in the list." << endl;
            found = true;
            break;
        }
        ptr = ptr->next;
    }
    if (!found)
    {
        cout << "Item " << item << " not found in the list." << endl;
    }
}

int main()
{
    AddData(1);
    AddData(2);
    AddData(3);
    cout<<"Main List: ";
    print();
    cout << endl;

    first(10);
    cout<<"After adding first: ";
    print();
    cout << endl;

    middle(100);
    cout<<"Adding after 2: ";
    print();
    cout << endl;

    search(3);
    search(10);
    cout << endl;

    del_first();
    cout<<"After deleting first: ";
    print();
    cout << endl;

    middle_node_dlt(2);
    cout<<"deleting after 2 : ";
    print();
    cout << endl;

    Last_node_dlt();
    cout<<"After deleting last: ";
    print();


    return 0;
}

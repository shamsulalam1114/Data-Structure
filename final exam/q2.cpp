#include <iostream>
using namespace std;

typedef struct listnode
{
    int data;
    listnode *next;
} * nodeptr;

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

void InsertAfter(int afterValue, int newValue)
{
    nodeptr ptr = head;
    while (ptr != NULL && ptr->data != afterValue)
    {
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        cout << "Value " << afterValue << " not found in the list." << endl;
        return;
    }

    nodeptr newNode = new listnode;
    newNode->data = newValue;
    newNode->next = ptr->next;
    ptr->next = newNode;
}

void DeleteNode(int value)
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    nodeptr ptr = head, prev = NULL;
    while (ptr != NULL && ptr->data != value)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    if (ptr == NULL)
    {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    if (prev == NULL)
    {
        head = ptr->next;
    }
    else
    {
        prev->next = ptr->next;
    }

    delete ptr;
}

void InsertAtBeginning(int value)
{
    nodeptr newnode = new listnode;
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

void DeleteLastNode()
{
    if (head == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    nodeptr ptr = head;
    nodeptr prev = NULL;
    while (ptr->next != NULL)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    delete ptr;
    prev->next = NULL;
}

void InsertAtEnd(int value)
{
    nodeptr newnode = new listnode;
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        return;
    }

    nodeptr ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = newnode;
}

void Print()
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

int main()
{
    int num=7;

    cout << "Enter the elements: ";
    for (int i = 0; i < 7; ++i)
    {
        int value;
        cin >> value;
        AddData(value);
    }

    cout << "Main List: ";
    Print();
    cout << endl;

    int afterValue, newValue;
    cout << "Enter the value after which you want to insert: ";
    cin >> afterValue;
    cout << "Enter the new value to insert: ";
    cin >> newValue;
    InsertAfter(afterValue, newValue);
    cout << "After inserting: ";
    Print();
    cout << endl;

    int valueToDelete;
    cout << "Enter the value to delete: ";
    cin >> valueToDelete;
    DeleteNode(valueToDelete);
    cout << "After deleting: ";
    Print();
    cout << endl;

    int valueToInsertAtBeginning;
    cout << "Enter the value to insert at the beginning: ";
    cin >> valueToInsertAtBeginning;
    InsertAtBeginning(valueToInsertAtBeginning);
    cout << "After inserting at the beginning: ";
    Print();
    cout << endl;

    cout << "Deleting the last node: ";
    DeleteLastNode();
    Print();
    cout << endl;

    int valueToInsertAtEnd;
    cout << "Enter the value to insert at the end: ";
    cin >> valueToInsertAtEnd;
    InsertAtEnd(valueToInsertAtEnd);
    cout << "After inserting at the end: ";
    Print();
    cout << endl;

    return 0;
}

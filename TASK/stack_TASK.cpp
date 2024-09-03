#include<iostream>
using namespace std;
#define size 7


int stk [size];
int top =-1;


bool isEmpty()
{
    if(top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push (int value)
{

    if(top == size -1)
    {
        cout<<"The stack is Full!"<<endl;
    }
    else
    {
        top++;
        stk[top] = value;
    }

}

void pop()
{
    if(isEmpty())
    {
        cout<<"The stack is empty!"<<endl;
    }
    else
    {
        top--;
    }
}

void display()
{
    cout<<"The stack is displayed as"<<endl;
    if(isEmpty())
    {
        cout<<"The stack is empty!"<<endl;
    }
    else
    {
        for(int i=top; i>=0; i--)
        {
            cout<<stk[i]<<"\n";
        }
    }
}

void Top()
{
    if(isEmpty())
    {
        cout<<"The stack is empty!"<<endl;
    }
    else
    {
        cout<<"The top element is: "<<stk[top]<<endl;
    }
}

void Size()
{
    int stackSize = top + 1;
    cout << "The size of the stack is: " << stackSize << endl;
}


int main()
{
    int inputValue;

    for(int i = top; i < size - 1; i++)
    {
        cout << "Element to push: ";
        cin >> inputValue;
        push(inputValue);
    }
    cout << "Stack elements:" << endl;
    display();
    cout << endl;

    cout << "After Pop:" << endl;
    push(6);

    display();
    cout << endl;
    Top();
    Size();

    return 0;
}

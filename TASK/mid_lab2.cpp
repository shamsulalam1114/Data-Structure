#include<iostream>
using namespace std;
#define size 5

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


bool isFull()
{
    if(top == size -1)
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

    if(isFull())
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


int main()
{
    int inputValue;


    push(4);
    push(2);
    push(9);
    cout << "Stack elements:" << endl;
    display();
    cout << endl;

    cout << "After Pop:" << endl;
    pop();
    pop();

    display();
    cout << endl;
    Top();

    return 0;
}

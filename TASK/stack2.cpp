#include<iostream>
using namespace std;

#define stack_size 5
int top;
int STACK[stack_size];

void stackInitialize()
{
    top=-1;
}
void push(int a)
{
    if(top>=(stack_size-1))
    {
        cout<<"Stack is full.."<<endl;
    }
    else
    {
       top++;
       STACK[top]=a;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        int b=STACK[top];
        top--;
    }
}
void Top()
{
    cout<<"Top element= "<<STACK[top]<<endl;
}
void print()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<STACK[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    stackInitialize();
    push(3);
    push(7);
    push(4);
    push(2);
    push(8);
    print();
    pop();
    print();
    pop();
    print();
    Top();
    push(12);
    push(34);
    print();
    Top();
    push(20);

}

#include <iostream>
using namespace std;
class myStack
{
private:
    int *stk,top,maxSize;
public:
    myStack(int sz=5)
    {
        maxSize=sz;
        stk=new int[maxSize];
        top=0;
    }

    ~myStack()
    {
        delete[]stk;
    }

    bool isEmpty()
    {
        return(top==0);
    }

    bool isFull()
    {
        return(top==maxSize);
    }

    bool push(int element)
    {
        if(isFull())
        {
            resiz();
        }
        stk[top]=element;
        top++;
        return true;
    }

    bool pop()
    {
        if(isEmpty())
        {
            cout<<"The Stack is empty"<<endl;
            return false;
        }
        top--;
        return true;
    }

    int topElement()
    {
        return stk[top-1];
    }

    void show()
    {
        if(isEmpty())
        {
            cout<<"EMPTY!"<<endl;
            return;
        }
        for(int i=0;i<top;i++)
        {
            cout<<stk[i]<<" ";
        }
        cout<<endl;
    }

    void resiz(int sz=5)
    {
        int *S=new int [maxSize+sz];
        for(int i=0;i<maxSize;i++)
        {
            S[i]=stk[i];
        }
        maxSize=maxSize+sz;
        delete[]stk;
        stk=S;
    }
};

int main()
{
    myStack s1,s2;

    s1.push(1);
    s1.push(2);
    s1.push(10);
    s1.pop();
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(9);
    s1.show();

    s2.push(91);
    s2.push(29);
    s2.push(100);
    s2.pop();
    s2.push(129);
    s2.push(123);
    s2.push(143);
    s2.show();
}

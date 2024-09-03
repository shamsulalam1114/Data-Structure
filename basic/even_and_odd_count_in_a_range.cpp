#include <iostream>
using namespace std;
    void oddNum(int start,int end)
    {
        for(int i=start;i<end;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<" ";
            }cout<<endl;
        }
    }

    void evenNum(int start,int end)
    {
        for(int i=start;i<end;i++)
        {
            if(i%2==0)
            {
                cout<<i<<" ";
            }cout<<endl;
        }
    }

    int main()
    {
        int start,end;
        cout<<"enter the start range"<<endl;
        cin>>start;

        cout<<"enter the end range"<<endl;
        cin>>end;

        cout<<"odd numbers"<<endl;
        oddNum(start,end);
        cout<<endl;

        cout<<"even numbers"<<endl;
        evenNum(start,end);
        cout<<endl;

    }



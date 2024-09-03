#include <iostream>
using namespace std;
int main()
{
    int size=10;
    int arr[size]={};

    cout<<"enter 10 numbers "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int oddCount=0,evenCount=0;

    for(int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;

        }
    }

    cout<<oddCount<<" odd number "<<endl;
    cout<<evenCount<<" even number "<<endl;

}

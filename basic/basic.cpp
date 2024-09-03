#include <iostream>
using namespace std;

int main ()
{
    int size=10;
    int arr[size]={};
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }cout<<endl;

    for(int i=size-1;i>=0;i--)
    {
        cout<<arr[i]<<" "<<endl;
    }cout<<endl;

}

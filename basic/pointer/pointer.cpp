#include<iostream>
using namespace std;

int main()
{
    int A[5];
    int *bp0=&A[0];
    int *bp1=&A[1];
    int *bp2=&A[2];
    int *bp3=&A[3];

    cout<<"bp0 is at "<< bp0<<endl;
    cout<<"bp1 is at "<< bp1<<endl;
    cout<<"bp2 is at "<< bp2<<endl;
    cout<<"bp3 is at "<< bp3<<endl;

    bp0 ++;
    bp1 ++;
    bp3 ++;

    cout<<"now bp0 is at "<< bp0<<endl;
    cout<<"now bp1 is at "<< bp1<<endl;
    cout<<"now bp3 is at "<< bp3<<endl;
}

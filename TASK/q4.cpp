#include<iostream>
using namespace std;
int main()
{
int n;
int sum=0;
cout<<"Enter the size of the square matrix: ";
cin>>n;
    int arr[n][n];
     cout << "Enter the elements of the matrix:" << endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {

       cin>>arr[i][j];


         }
     }

     for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {

       cout<<arr[i][j]<<" ";


         }
    cout<<endl;
    }


     for(int i=0;i<n;i++)
       {
        for(int j=0;j<n;j++)
          {
                if(i==j||i+j==n-1)
                {
                    sum+=arr[i][j];
                }
          }


       }
        cout << "Sum of diagonal elements: " << sum << endl;
}

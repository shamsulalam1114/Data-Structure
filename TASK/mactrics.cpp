#include <iostream>
using namespace std;
int main()
{
    int rows=3;
    int cols=4;

    int mat1[rows][cols];

    cout<<"enter the elements of mat1"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>mat1[i][j];
        }

    }

    cout<<"display the elements of mat1"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }





    cout<<"display the transpose of mat 1"<<endl;
    for(int j=0;j<cols;j++)
    {
        for(int i=0;i<rows;i++)
        {
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;


}

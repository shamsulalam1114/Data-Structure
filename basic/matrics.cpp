#include <iostream>
using namespace std;
int main()
{
    int rows=3;
    int cols=3;

    int mat1[rows][cols],mat2[rows][cols],mat3[rows][cols],mat4[rows][cols];

    cout<<"enter the elements of mat1"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>mat1[i][j];
        }

    }

    cout<<"enter the elements of mat2"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>mat2[i][j];
        }

    }

    cout<<"enter the elements of mat3"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>mat3[i][j];
        }

    }

    cout<<"mactrics addition"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            mat4[i][j]=mat1[i][j]+mat2[i][j]+mat3[i][j];
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

    cout<<"display the elements of mat2"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"display the elements of mat3"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"display the addition"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat4[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;


}

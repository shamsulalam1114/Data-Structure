
#include <iostream>
using namespace std;

int main()
{
    int mat1[10][10], mat2[10][10], result[10][10];
    int rows1, cols1, rows2, cols2;


    cout << "Enter the number of rows for the first matrix: ";
    cin >> rows1;
    cout << "Enter the number of columns for the first matrix: ";
    cin >> cols1;

    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols1; ++j)
            cin >> mat1[i][j];


    cout << "Enter the number of rows for the second matrix: ";
    cin >> rows2;
    cout << "Enter the number of columns for the second matrix: ";
    cin >> cols2;

    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i)
        for (int j = 0; j < cols2; ++j)
            cin >> mat2[i][j];


    if (cols1 != rows2)
        {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
        }


    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k)
                result[i][j] += mat1[i][k] * mat2[k][j];
            }


    cout << "Result Matrix:" << endl;
    for (int i = 0; i < rows1; ++i)
    {
        for (int j = 0; j < cols2; ++j)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}

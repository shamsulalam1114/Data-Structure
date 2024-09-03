#include <iostream>
using namespace std;

void selectionSort(int array[], int n)
{
    int select, minIndex, minValue;

    for (select = 0; select < (n - 1); select++)
    {
        minIndex = select;
        minValue = array[select];


        for(int i = select + 1; i < n; i++)
        {
            if (array[i] < minValue)
            {
                minValue = array[i];
                minIndex = i;
            }
        }


        array[minIndex] = array[select];
        array[select] = minValue;
    }
}

int main()
{
    int n = 6;
    int array[n];


    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> array[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    selectionSort(array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

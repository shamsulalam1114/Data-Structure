#include <iostream>
using namespace std;

void insertionSort(int array[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        key = array[i];
        j = i - 1;

        // Move elements of array[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main()
{
    const int n = 6; // Define the size of the array
    int array[n]; // Declare array of size n

    // Input values from the user
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

    insertionSort(array, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

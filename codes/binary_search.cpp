#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int value)
{
    int first = 0;
    int last = size - 1;
    int middle;
    int position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == value)
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }

    return position;
}

int main()
{
    const int size = 6; // Define the size of the array
    int arr[size];      // Declare array of size n

    // Input values from the user
    cout << "Enter " << size << " integers in sorted order:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter integer " << (i + 1) << ": ";
        cin >> arr[i];
    }

    int value;
    cout << "Enter the value to search: ";
    cin >> value;

    int result = binarySearch(arr, size, value);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

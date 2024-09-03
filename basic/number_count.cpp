#include <iostream>
using namespace std;

int main()
{

    int A[10];


    cout << "Enter 10 numbers for the array:" << endl;
    for (int i = 0; i < 10; ++i)
        {
        cin >> A[i];
        }


    int num;
    cout << "Input a number to search: ";
    cin >> num;


    int count = 0;
    for (int i = 0; i < 10; ++i)
    {
        if (A[i] == num)
        {
            count++;
        }
    }


    cout << "The number occurs " << count << " times in the array" << endl;

    return 0;
}

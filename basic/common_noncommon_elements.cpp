#include <iostream>
using namespace std;

int main()
{

    int Array_1[3];
    int Array_2[4];


    cout << "Enter " << 3 << " elements for Array_1:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> Array_1[i];
    }


    cout << "Enter " << 4 << " elements for Array_2:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cin >> Array_2[i];
    }

    bool foundCommon = false;


    cout << "Common elements between Array_1 and Array_2: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <4; j++)
        {
            if (Array_1[i] == Array_2[j])
            {
                cout << Array_1[i] << " ";
                foundCommon = true;
                break;
            }
        }
    }


    if (!foundCommon)
    {
        cout << "No common elements found.";
    }

    cout << endl;

    return 0;
}

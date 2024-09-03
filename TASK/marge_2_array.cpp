#include <iostream>
using namespace std;

int main()
{
    int Arr_1[] = {10, 20, 30, 40, 50};

    int Arr_2[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int New_Size = 13;
    int New_Arr[New_Size];


    int index = 0;
    for (int i = 0; i < 8; ++i)
        {
        New_Arr[index] = Arr_2[i];
        index++;
        }


    for (int i = 0; i < 5; ++i)
        {
        New_Arr[index] = Arr_1[i];
        index++;
        }


    cout << "New Array In Reverse Order: "<<endl;
    for (int i = New_Size - 1; i >= 0; --i)
        {
            {

              cout << New_Arr[i] << " ";

            }
        cout<<endl;
        }

    return 0;
}


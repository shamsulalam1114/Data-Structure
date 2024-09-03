#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1,2,7,8};
    int arr2[] = {5, 3, 4, 34, 9,10};
     int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[min(size1, size2)];

    bool common;
    for (int i = 0; i < size1; i++)
    { for(int j=0;j<size2;j++)
       {
           if (arr1[i] == arr2[j])
        {
            arr3[i] = arr1[i];
            cout << arr3[i] << " ";

             common =true;
        }
       }
    }
    cout<<endl;
    if(!common)
    {
        cout<<"no common";
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void Merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[left + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = A[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;

    while (i <= n1 - 1 && j <= n2 - 1)
    {
        if (L[i] < R[j])
        {
            A[k++] = L[i++];
        }
    else{
            A[k++] = R[j++];
        }
    }

    while (i <= n1 - 1)
    {
        A[k++] = L[i++];
    }

    while (j <= n2 - 1)
    {
        A[k++] = R[j++];
    }
}

int main()
{
    int A[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(A) / sizeof(A[0]);

    int left = 0;
    int mid = arr_size / 2 - 1;
    int right = arr_size - 1;

    Merge(A, left, mid, right);

    cout << "Merged array: ";
    for (int i = 0; i < arr_size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}

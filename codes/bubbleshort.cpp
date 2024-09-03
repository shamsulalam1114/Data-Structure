#include<iostream>
using namespace std;

void print(int* a1, int n) {
    for(int i = 0; i < n; i++) {
        cout << *(a1 + i) << " ";
    }
    cout << endl;
}

void sort(int* a1, int n, int* Count) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(*(a1 + j) > *(a1 + j + 1)) {
                int temp = *(a1 + j);
                *(a1 + j) = *(a1 + j + 1);
                *(a1 + j + 1) = temp;
                (*Count)++;
            }
        }
    }
}

int main() {
    int n, count = 0;
    cout << "Size: ";
    cin >> n;
    int* a1 = new int[n];
    cout << "Enter the values: \n";
    for(int i = 0; i < n; i++) {
        cin >> *(a1 + i);
    }
    cout << "Original a1ay: \n";
    print(a1, n);
    sort(a1, n, &count);
    cout << "Bubble sorted a1ay: \n";
    print(a1, n);
    cout << "Number of swaps: " << count << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Initialize an array
    int array_1[10] = {8, 4, 6, 1, 6, 9, 6, 1, 9, 8};

    // Loop through the array
    for (int i = 0; i < 10; ++i) {
        // Check if the current element is already counted
        bool counted = false;
        for (int j = 0; j < i; ++j) {
            if (array_1[j] == array_1[i]) {
                counted = true;
                break;
            }
        }

        // If the element is already counted, skip to the next iteration
        if (counted) {
            continue;
        }

        // Count the occurrences of the current element
        int count = 1;
        for (int k = i + 1; k < 10; ++k) {
            if (array_1[i] == array_1[k]) {
                count++;
            }
        }

        // Print the result
        cout << array_1[i] << " occurs = " << count << " times" << endl;
    }

    return 0;
}

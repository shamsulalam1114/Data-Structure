#include <iostream>
#include <string>
using namespace std;

string encode(string s, int j) {
    for (int i = j; i < s.length(); ++i)
    {
        s[i] += 2;
    }
    return s;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int j;
    cout << "Enter an integer (j): ";
    cin >> j;

    string encodedString = encode(s, j);

    cout << "Converted String: " << encodedString << endl;

    return 0;
}

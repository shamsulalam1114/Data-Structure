#include <iostream>
#include <stack>

using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    stack<char> charStack;

    // Push each character of input onto the stack
    for (char c : input) {
        charStack.push(c);
    }

    cout << "Reversed String: ";

    // Pop each character from the stack to print the reversed string
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }

    cout << endl;

    return 0;
}


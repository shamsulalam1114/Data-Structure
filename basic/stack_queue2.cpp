#include <iostream>
#include <stack>

using namespace std;

int evaluatePostfix(char postfix[], int len) {
    stack<int> operands;

    for (int i = 0; i < len; i++) {
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            // Convert char to int and push to stack
            operands.push(postfix[i] - '0');
        } else {
            // Operator encountered
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result;

            // Perform operation based on the operator
            switch (postfix[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    if (operand2 != 0) {
                        result = operand1 / operand2;
                    } else {
                        cerr << "Error: Division by zero!" << endl;
                        return -1;
                    }
                    break;
                default:
                    cerr << "Invalid operator found: " << postfix[i] << endl;
                    return -1;
            }

            // Push the result of the operation back to stack
            operands.push(result);
        }
    }

    if (operands.size() == 1) {
        return operands.top();
    } else {
        cerr << "Invalid postfix expression" << endl;
        return -1;
    }
}

int main() {
    char postfix[] = "24*63-3/+";
    int len = 0;
    // Calculate length of postfix array
    while (postfix[len] != '\0') {
        len++;
    }
    int result = evaluatePostfix(postfix, len);

    cout << "Postfix Expression: " << postfix << endl;
    cout << "Result: " << result << endl;

    return 0;
}


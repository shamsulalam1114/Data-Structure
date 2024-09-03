#include <iostream>
#include <stack>
#include <queue>

using namespace std;

// Function to check precedence of operators
int precedence(char op) {
    if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return 0;
}

// Function to convert infix expression to postfix
string infixToPostfix(string infix) {
    stack<char> operators;  // Stack to hold operators temporarily
    queue<char> output;     // Queue to hold the final postfix expression
    string postfix;         // The final postfix expression

    // Loop through each character in the infix expression
    for(char& c : infix) {
        // If the character is a digit, add it to the output queue
        if(isdigit(c)) {
            output.push(c);
        }
        // If it's an opening parenthesis, push it to the operators stack
        else if(c == '(') {
            operators.push(c);
        }
        // If it's a closing parenthesis, pop and add operators to output until '(' is found
        else if(c == ')') {
            while(!operators.empty() && operators.top() != '(') {
                output.push(operators.top());
                operators.pop();
            }
            operators.pop(); // Remove '('
        }
        // If it's an operator, handle precedence and push to output accordingly
        else { // Operator
            while(!operators.empty() && precedence(c) <= precedence(operators.top())) {
                output.push(operators.top());
                operators.pop();
            }
            operators.push(c);
        }
    }

    // Add remaining operators from stack to output
    while(!operators.empty()) {
        output.push(operators.top());
        operators.pop();
    }

    // Convert queue to string (postfix expression)
    while(!output.empty()) {
        postfix += output.front();
        output.pop();
    }

    return postfix;
}

int main() {
    string infix = "2*4+(6-3)/3";
    string postfix = infixToPostfix(infix);
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << postfix << endl;
    return 0;
}


#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

const int MAX_SIZE = 100;

int evaluatePostfix(char postfixExpr[], int evaluationStack[])
{
    stack<int> st;

    for (int i = 0; postfixExpr[i] != '\0'; i++)
    {
        char ch = postfixExpr[i];
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            switch (ch)
            {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
            }
        }
    }

    if (!st.empty())
    {
        return st.top();
    }

    return 0;
}

int main()
{
    char postfixExpr[MAX_SIZE];

    cout << "Enter postfix expression: ";
    cin.getline(postfixExpr, MAX_SIZE);

    int result = evaluatePostfix(postfixExpr, nullptr);
    cout << "Result of evaluation: " << result << endl;

    return 0;
}

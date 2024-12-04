#include <iostream>
#include <stack>
#include <cctype>
#include <string>
#include <stdexcept>
#include <cmath> // For advanced operators like power if needed

// Function to determine precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3; // Exponentiation (right associative)
    return 0;
}

// Function to apply an operator to two operands
int applyOperation(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0) throw std::runtime_error("Division by zero");
            return a / b;
        case '^': return pow(a, b);
        default: throw std::runtime_error("Invalid operator");
    }
}

// Function to evaluate an infix expression
int evaluateInfix(const std::string &expression) {
    std::stack<int> operandStack;
    std::stack<char> operatorStack;

    for (size_t i = 0; i < expression.length(); ++i) {
        char ch = expression[i];

        // Skip whitespace
        if (isspace(ch)) continue;

        // If the character is a digit, parse the entire number
        if (isdigit(ch)) {
            int num = 0;
            while (i < expression.length() && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                ++i;
            }
            --i; // Adjust for the increment in the loop
            operandStack.push(num);
        } 
        // If the character is an opening parenthesis, push it to the operator stack
        else if (ch == '(') {
            operatorStack.push(ch);
        } 
        // If the character is a closing parenthesis, solve the sub-expression
        else if (ch == ')') {
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                char op = operatorStack.top();
                operatorStack.pop();

                int b = operandStack.top();
                operandStack.pop();
                int a = operandStack.top();
                operandStack.pop();

                operandStack.push(applyOperation(a, b, op));
            }
            if (!operatorStack.empty()) operatorStack.pop(); // Pop the '('
        } 
        // If the character is an operator
        else {
       

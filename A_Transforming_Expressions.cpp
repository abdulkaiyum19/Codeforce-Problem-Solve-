#include <iostream>
#include <stack> 
#include <string> 
using namespace std;

int main (){


// Function to check if a character is an operator bool isOperator(char c) { return (c == ‘+’ || c == ‘-’ || c == ‘*’ || c == ‘/’ || c == ‘^’); }

// Function to check the precedence of two operators int precedence(char op1, char op2) { if (op1 == ‘^’) return 3; // highest precedence if (op1 == ‘*’ || op1 == ‘/’) return 2; if (op1 == ‘+’ || op1 == ‘-’) return 1; return 0; // op1 or op2 is not an operator }

// Function to convert an infix expression to a postfix expression string infixToPostfix(string infix) { stack<char> s; // stack to store operators and parentheses string postfix = “”; // result string

for(char c : infix) { // loop through each character in the infix expression
    if (isalpha(c)) { // if the character is an operand, append it to the postfix expression
        postfix += c;
    }
    else if (c == '(') { // if the character is a left parenthesis, push it to the stack
        s.push(c);
    }
    else if (c == ')') { // if the character is a right parenthesis, pop and append all the operators from the stack until a left parenthesis is encountered
        while (!s.empty() && s.top() != '(') {
            postfix += s.top();
            s.pop();
        }
        if (!s.empty() && s.top() == '(') { // pop and discard the left parenthesis
            s.pop();
        }
    }
    else if (isOperator(c)) { // if the character is an operator, pop and append all the operators from the stack that have higher or equal precedence than the current operator, then push the current operator to the stack
        while (!s.empty() && precedence(c, s.top()) <= 0) {
            postfix += s.top();
            s.pop();
        }
        s.push(c);
    }
}

while (!s.empty()) { // pop and append any remaining operators from the stack
    postfix += s.top();
    s.pop();
}

return postfix; // return the postfix expression
}
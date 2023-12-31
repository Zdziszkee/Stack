//
// Created by Kacper Kuchta on 25/10/2023.
//
#include <iostream>
#include "LinkedStack.h"
#include <sstream>
#include <vector>

bool isDigit(const std::string &str) {
    for (char c: str) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

bool isOperator(const std::string &str) {
    return str == "+" || str == "-" || str == "*" || str == "/";
}

int getPrecedence(const std::string &str) {
    if (str == "+" || str == "-") return 1;
    if (str == "*" || str == "/") return 2;
    return 0;
}

int main() {
    std::string expression = "( 11 + ( ( ( ( 1 + 2 ) * ( 4 - 3 ) ) + ( 4 / 2 ) ) * ( 8 - 6 ) ) )";
    std::getline(std::cin, expression);

    std::vector<std::string> elements;
    std::stringstream ss(expression);
    std::string token;

    while (std::getline(ss, token, ' ')) {
        elements.push_back(token);
    }

    std::string result;

    LinkedStack<std::string> stack;
    for (const auto &element: elements) {
        if (isDigit(element)) {
            result += element;
            result += " ";
        } else if (element == "(") {
            stack.push(element);
        } else if (element == ")") {
            while (!stack.empty() && stack.top() != "(") {
                result += stack.pop();
                result += " ";
            }
            stack.pop();
        } else if (isOperator(element)) {
            while (!stack.empty() && getPrecedence(element) <= getPrecedence(stack.top())) {
                result += stack.pop();
                result += " ";
            }
            stack.push(element);
        }

    }
    while (!stack.empty()) {
        result += stack.pop();
        result += " ";
    }
    result.pop_back();
    std::cout << result;
}



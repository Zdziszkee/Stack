#include <iostream>
#include "LinkedStack.h"

int main() {
    LinkedStack<int> stack;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string operation;
        std::cin >> operation;
        if (operation == "A") {
            int x;
            std::cin >> x;
            stack.push(x);
        } else if (operation == "D") {
            if (!stack.empty()) {
                std::cout << stack.top() << std::endl;
                stack.pop();
            } else {
                std::cout << "EMPTY" << std::endl;
            }
        } else if (operation == "S") {
            std::cout << stack.size() << std::endl;
        }
    }
    /*
    for (int i = 0; i < n; ++i) {
        std::string command;
        std::cin >> command;
        switch (command[0]) {
            case 'D': {
                if (stack.empty()) {
                    std::cout << "EMPTY" << std::endl;
                    break;
                }
                double number = stack.pop();
                std::cout << number << std::endl;
            }
            case 'S': {
                std::cout << stack.size() << std::endl;
                break;
            }
            case 'A': {
                std::string number;
                std::cin >> number;
                stack.push(std::stoi(number));
                break;
            }
            default: {
                throw std::runtime_error("Unrecognized operation request!");
            }
        }
    }
     */
    return 0;
}


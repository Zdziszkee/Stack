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
                std::cout << stack.pop() << std::endl;
            } else {
                std::cout << "EMPTY" << std::endl;
            }
        } else if (operation == "S") {
            std::cout << stack.size() << std::endl;
        }
    }
    return 0;
}


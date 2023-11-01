//
// Created by Kacper Kuchta on 22/10/2023.
//

#ifndef ZESTAW01_LINKEDSTACK_H
#define ZESTAW01_LINKEDSTACK_H

#include <stdexcept>

template<class T>
class LinkedStack {
private:
    struct Node {
        T value;
        Node *next;

        explicit Node(T value, Node *next = nullptr) : value(value), next(next) {}
    };

    int number_of_elements = 0;
    Node *last = nullptr;
public:
    template<class U>
    void push(U &&x) {
        last = new Node(x, last);
        ++number_of_elements;
    }

    T pop() {
        if (empty()) {
            throw std::underflow_error("LinkedStack is empty");
        }
        T value = last->value;
        Node *previous = last->next;
        delete last;
        last = previous;
        --number_of_elements;
        return value;
    }

    T &top() {
        if (empty()) {
            throw std::underflow_error("LinkedStack is empty");
        }
        return last->value;
    }

    int size() {
        return this->number_of_elements;
    }

    bool empty() {
        return size() == 0;
    }
};

#endif //ZESTAW01_LINKEDSTACK_H

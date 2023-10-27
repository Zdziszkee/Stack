//
// Created by Kacper Kuchta on 22/10/2023.
//

#ifndef ZESTAW01_ARRAYSTACK_H
#define ZESTAW01_ARRAYSTACK_H

#include <stdexcept>

template<class T, int N>
class ArrayStack {
private:
    T data[N];
    int lastIndex = 0;
public:

    template<class U>
    void push(U &&x) {
        if (lastIndex >= N) {
            throw std::overflow_error("ArrayStack is full");
        }
        data[lastIndex++] = std::forward<U>(x);
    }

    T pop() {
        if (empty()) {
            throw std::underflow_error("ArrayStack is empty");
        }
        return data[--lastIndex];
    }

    T &top() {
        if (empty()) {
            throw std::underflow_error("ArrayStack is empty");
        }
        return data[lastIndex];
    }

    int size(){
        return lastIndex;
    }

    bool empty() {
        return lastIndex == 0;
    }
};

#endif //ZESTAW01_ARRAYSTACK_H

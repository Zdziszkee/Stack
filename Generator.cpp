//
// Created by Kacper Kuchta on 22/10/2023.
//
#include <stdexcept>
#include <iostream>
#include <random>

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<int> operation_generator(1, 4);
std::uniform_int_distribution<int> integer_generator(0, 1000001);

std::string create_random_operation() {
    int operation_type = operation_generator(gen);
    switch (operation_type) {
        case 1: {
            return "D";
        }
        case 2: {
            return "S";

        }
        default: {
            int integer = integer_generator(gen);
            return "A " + std::to_string(integer);
        }
    }
}

int main(int count, char **args) {
    if (count != 2) {
        throw std::runtime_error("Wrong number of program arguments! Expected 1 argument.");
    }
    int n = std::stoi(args[1]);
    std::cout << n << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << create_random_operation() << std::endl;
    }

    return 0;
}



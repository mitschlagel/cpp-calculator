#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    std::cout << "Welcome to the Calculator!" << std::endl;

    while (true) {
        std::cout << "Enter first number (or 'q' to quit): ";
        if (!(std::cin >> num1)) {
            break; // Exit if user inputs 'q'
        }

        std::cout << "Enter an operator (+, -, *, /): ";
        std::cin >> operation;

        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operation) {
            case '+':
                std::cout << "Result: " << calc.add(num1, num2) << std::endl;
                break;
            case '-':
                std::cout << "Result: " << calc.subtract(num1, num2) << std::endl;
                break;
            case '*':
                std::cout << "Result: " << calc.multiply(num1, num2) << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << calc.divide(num1, num2) << std::endl;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: Invalid operator!" << std::endl;
                break;
        }
    }

    std::cout << "Goodbye!" << std::endl;
    return 0;
}
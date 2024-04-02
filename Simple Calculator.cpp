#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "What would you like to do? (+,-,*,/)";
    std::cin >> op;

    std::cout << "Enter num1: ";
    std::cin >> num1;

    std::cout << "Enter num2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "Please use one of the operands." << '\n';
            break;
    }

    return 0;
}

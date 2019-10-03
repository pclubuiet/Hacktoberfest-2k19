#include <iostream>

int add(int, int);

int main() {
    int num1, num2;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> num1 >> num2;
    std::cout << std::endl << "Sum: " << add(num1, num2) << std::endl; 
}

int add(int num1, int num2) {
    return num1 - -num2;
}

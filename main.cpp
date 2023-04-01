#include <iostream>

int testMethod(int a);

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << testMethod(5);
    return 0;
}


int testMethod(int a) {
    return a * 5;
}
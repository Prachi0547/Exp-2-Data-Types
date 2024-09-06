//Demonstration of Storage Classes in C++
#include <iostream>  
int globalVar = 100;

void demoFunction() {
    auto int localVar = 10;
    std::cout << "Local variable (auto): " << localVar << std::endl;
    register int regVar = 20;
    std::cout << "Register variable: " << regVar << std::endl;
    static int staticVar = 30;
    staticVar++;
    std::cout << "Static variable: " << staticVar << std::endl;
    extern int globalVar;  
    std::cout << "Global variable (extern): " << globalVar << std::endl;
}

int main() {
    demoFunction();
    demoFunction();
    demoFunction();

    return 0;  
}


# Exp-2-Data-Types
# Aim
To display the size of each primitive data type and demonstration of Storage Classes in C++.
# Software Used
VS Code and c++ online compiler.
# Theory
In C++, the size of each primitive data type can be determined using the sizeof operator, which returns the number of bytes a data type occupies in memory. 

Storage classes in C++ define the scope, visibility, and lifetime of variables. The main storage classes are, Automatic (auto), Static, Extern and Register.
# Program Code
```
//size of each primitive data type
#include <iostream>
using namespace std;

int main() {
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double: " << sizeof(long double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;

    return 0;
}
```
```
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
```
# Output
### size of primitive data types
![image](https://github.com/user-attachments/assets/d5c5a678-8a63-499c-9c35-2b7cd2f6bbb7)
### Storage Classes
![image](https://github.com/user-attachments/assets/b2425bff-7ffe-4a37-b849-f8d11fdc542d)
# Conclusion
We learnt how to display the size of each primitive data type and demonstrate the different Storage Classes in C++.

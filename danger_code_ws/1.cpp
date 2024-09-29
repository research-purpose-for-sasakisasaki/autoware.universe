#include <iostream>
#include <cstdio>

int main() {
    char buffer[10];

    std::cout << "Enter a string: ";
    gets(buffer); // Dangerous function - allows buffer overflow

    std::cout << "You entered: " << buffer << std::endl;

    return 0;
}


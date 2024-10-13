#include <iostream>
#include <cstdio>

int main() {
    char buffer[10];

    std::cout << "Enter a string: ";
    fgets(buffer, sizeof(buffer), stdin); // Safer alternative to gets

    std::cout << "You entered: " << buffer << std::endl;

    return 0;
}


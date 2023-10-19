#include <iostream>

int main() {
    int edad;
    std::cout << "Ingresa una edad: ";
    std::cin >> edad;

    if (edad <= 12) {
        std::cout << "Eres un niño." << std::endl;
    } else if (edad < 18) {
        std::cout << "Eres un adolescente." << std::endl;
    } else if (edad < 60) {
        std::cout << "Eres un adulto." << std::endl;
    } else {
        std::cout << "Eres un adulto mayor." << std::endl;
    }

    return 0;
}
#include <iostream>

int main() {
    int num1, num2;
    char respuesta;

    do {
        std::cout << "Ingresa el primer número entero: ";
        std::cin >> num1;

        std::cout << "Ingresa el segundo número entero: ";
        std::cin >> num2;

        int suma = num1 + num2;
        std::cout << "La suma de " << num1 << " y " << num2 << " es: " << suma << std::endl;

        std::cout << "¿Deseas realizar otra suma? (s/n): ";
        std::cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
#include <iostream>

int calcularFactorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int numero;
    std::cout << "Ingresa un número entero: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "Error: El número no debe ser negativo." << std::endl;
    } else {
        int factorial = calcularFactorial(numero);
        std::cout << "El factorial de " << numero << " es: " << factorial << std::endl;
    }

    return 0;
}
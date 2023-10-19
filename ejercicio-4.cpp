#include <iostream>

int main() {
    const double saldoInicial = 900.0;
    double saldo = saldoInicial;
    int opcion;
    double monto;

    do {
        std::cout << "********** CAJERO AUTOMÁTICO **********" << std::endl;
        std::cout << "1. Abonar" << std::endl;
        std::cout << "2. Retirar" << std::endl;
        std::cout << "3. Salir" << std::endl;
        std::cout << "Ingrese la opción deseada: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el monto a abonar: ";
                std::cin >> monto;

                if (monto > 500.0) {
                    std::cout << "Ha excedido el límite de abono de 500 bs." << std::endl;
                } else {
                    saldo += monto;
                    std::cout << "Abono realizado exitosamente." << std::endl;
                }
                break;

            case 2:
                std::cout << "Ingrese el monto a retirar: ";
                std::cin >> monto;

                if (monto > saldo) {
                    std::cout << "Saldo insuficiente." << std::endl;
                } else {
                    saldo -= monto;
                    std::cout << "Retiro realizado exitosamente." << std::endl;
                }
                break;

            case 3:
                std::cout << "Gracias por utilizar el cajero automático. ¡Hasta luego!" << std::endl;
                break;

            default:
                std::cout << "Opción inválida. Por favor, ingrese una opción válida." << std::endl;
                break;
        }

        std::cout << "Saldo actual: " << saldo << " bs." << std::endl;
        std::cout << "***************************************" << std::endl;
        std::cout << std::endl;

    } while (opcion != 3);

    return 0;
}
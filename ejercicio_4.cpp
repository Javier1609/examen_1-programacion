#include <iostream>



double multiplicacion(double num1, double num2) {
    if (num1 == 0) {
        throw std::runtime_error("Error: multiplicacion por cero no permitida.");
    }
    return num1 * num2;
}

int main() {
    double num1, num2;
    std::cout << "Ingrese un numero: ";
    std::cin >> num1;
    std::cout << "Ingrese otro numero: ";
    std::cin >> num2;

    try {
        double resultado = multiplicacion(num1, num2);
        std::cout << "El resultado de la multiplicacionn es: " << resultado << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Error detectado: " << e.what() << std::endl;
    }

    return 0;
}




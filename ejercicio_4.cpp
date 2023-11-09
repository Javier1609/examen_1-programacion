#include <iostream>



double multiplicacion(double num1, double num2) {
    if (num1 == 0) {
        throw std::runtime_error("Error: multiplicacion por cero no permitida.");
    }
    return num1 * num2;
}






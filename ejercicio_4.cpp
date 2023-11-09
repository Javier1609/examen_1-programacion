#include <iostream>



double dividir(double numerador, double denominador) {
    if (denominador == 0) {
        throw std::runtime_error("Error: División por cero no permitida.");
    }
    return numerador / denominador;
}




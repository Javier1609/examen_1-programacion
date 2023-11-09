#include <iostream>
#include <string>

class Estudiante {
private:
    std::string nombre;
    int edad;
    std::string grado;

public:

    Estudiante(const std::string& n, int e, const std::string& g) {
        nombre = n;
        edad = e;
        grado = g;
    }

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " años" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

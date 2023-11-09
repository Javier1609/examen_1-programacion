#include <iostream>
#include <string>

class Estudiante {
private:
    std::string nombre;
    int edad;
    std::string grado;

public:

    Estudiante(const std::string& a, int b, const std::string& c) {
        nombre = a;
        edad = b;
        grado = c;
    }

    void mostrar_info() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << " anos" << std::endl;
        std::cout << "Grado: " << grado << std::endl;
    }
};

int main() {
    Estudiante estudiante("Javier", 18, "Ingenieria mecanica");
    estudiante.mostrar_info();
}

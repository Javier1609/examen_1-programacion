#include <iostream>
#include <string>
#include <vector>

class Estudiante {
private:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

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

    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }


    void mostrar_materias() {
        std::cout << "Materias registradas para " << nombre << ":" << std::endl;
        for (const std::string& materia : materias) {
            std::cout << "  - " << materia << std::endl;
        }
    }
};
int main() {

    Estudiante estudiante("Javier gomez", 18, "ingeria mecanica");


    estudiante.registrar_materia("programacion");
    estudiante.registrar_materia("mecanica");
    estudiante.registrar_materia("Historia de la mecanica");

    estudiante.mostrar_info();
    estudiante.mostrar_materias();

    return 0;
}
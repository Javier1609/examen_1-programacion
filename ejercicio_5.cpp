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
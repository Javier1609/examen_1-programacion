#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;

    Estudiante(const std::string& n, int e, const std::string& g) : nombre(n), edad(e), grado(g) {}
};

std::vector<Estudiante> filtrarEstudiantesPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& gradoBuscado) {
    std::vector<Estudiante> estudiantesPorGrado;

    for (const Estudiante& estudiante : estudiantes) {
        if (estudiante.grado == gradoBuscado) {
            estudiantesPorGrado.push_back(estudiante);
        }
    }

    return estudiantesPorGrado;
}



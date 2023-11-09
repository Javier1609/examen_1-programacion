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
int main() {

    std::vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Juan", 20, "Tercer Grado"));
    estudiantes.push_back(Estudiante("jaime", 22, "Segundo Grado"));
    estudiantes.push_back(Estudiante("Pepe", 19, "Tercer Grado"));
    estudiantes.push_back(Estudiante("javier", 21, "Cuarto Grado"));


    std::string gradoBuscado = "Tercer Grado";
    std::vector<Estudiante> estudiantesFiltrados = filtrarEstudiantesPorGrado(estudiantes, gradoBuscado);


    std::cout << "Estudiantes del grado " << gradoBuscado << ":" << std::endl;
    for (const Estudiante& estudiante : estudiantesFiltrados) {
        std::cout << "Nombre: " << estudiante.nombre << ", Edad: " << estudiante.edad << std::endl;
    }

    return 0;
}



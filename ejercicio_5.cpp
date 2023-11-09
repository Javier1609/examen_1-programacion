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

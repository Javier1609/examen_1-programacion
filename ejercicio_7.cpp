#include <iostream>
#include <string>

class Asistencia {
private:
    std::string fecha;
    std::string estado;

public:

    Asistencia(const std::string& fecha, const std::string& estado) {
        this->fecha = fecha;
        this->estado = estado;
    }


    void mostrar_asistencia() {
        std::cout << "Fecha de la clase: " << fecha << std::endl;
        std::cout << "Estado de asistencia: " << estado << std::endl;
    }
};

int main() {

    Asistencia registro("2023-11-09", "Asistio");

    registro.mostrar_asistencia();

    return 0;
}




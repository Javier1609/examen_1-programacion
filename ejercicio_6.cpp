#include <iostream>
#include <vector>


double promedio(const std::vector<int>& calificaciones) {
    int suma = 0;

    for (int calificacion : calificaciones) {
        suma += calificacion;
    }

    if (calificaciones.empty()) {

        return 0.0;
    }

    return static_cast<double>(suma) / calificaciones.size();
}
int main() {
    std::vector<int> calificaciones = {4, 2, 6, 7, 5};

    double promed = promedio(calificaciones);

    std::cout << "El promedio de las calificaciones es: " << promed << std::endl;

    return 0;
}
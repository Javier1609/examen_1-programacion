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


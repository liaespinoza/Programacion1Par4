// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
using namespace std;

struct Tiempo {
    int horas;
    int minutos;
    int segundos;
};

Tiempo sumarTiempo(Tiempo t1, Tiempo t2);

int main() {
    Tiempo t1, t2;

    cout << "Tiempo 1 (h m s): ";
    cin >> t1.horas >> t1.minutos >> t1.segundos;

    cout << "Tiempo 2 (h m s): ";
    cin >> t2.horas >> t2.minutos >> t2.segundos;

    Tiempo resultado = sumarTiempo(t1, t2);

    cout << "Resultado: "
         << resultado.horas << " h "
         << resultado.minutos << " min "
         << resultado.segundos << " s\n";

    return 0;
}

Tiempo sumarTiempo(Tiempo t1, Tiempo t2) {
    Tiempo resultado;

    resultado.horas = t1.horas + t2.horas;
    resultado.minutos = t1.minutos + t2.minutos;
    resultado.segundos = t1.segundos + t2.segundos;

    if (resultado.segundos > 59) {
        resultado.segundos -= 60;
        resultado.minutos++;
    }

    if (resultado.minutos > 59) {
        resultado.minutos -= 60;
        resultado.horas++;
    }

    return resultado;
}
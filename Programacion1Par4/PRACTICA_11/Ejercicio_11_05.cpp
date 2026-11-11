// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Cancion {
    string titulo;
    string artista;
    int duracionSegundos;
};

void calcularDuracion(vector<Cancion> canciones);

int main() {
    int n;

    cout << "Cantidad de canciones: ";
    cin >> n;

    vector<Cancion> canciones;

    for (int i = 0; i < n; i++) {
        Cancion c;

        cout << "Titulo: ";
        cin >> c.titulo;

        cout << "Artista: ";
        cin >> c.artista;

        cout << "Duracion en segundos: ";
        cin >> c.duracionSegundos;

        canciones.push_back(c);
    }

    calcularDuracion(canciones);

    return 0;
}

void calcularDuracion(vector<Cancion> canciones) {
    int total = 0;

    for (int i = 0; i < canciones.size(); i++) {
        total += canciones[i].duracionSegundos;
    }

    int minutos = total / 60;
    int segundos = total % 60;

    cout << "Duracion total: "
         << minutos << " minutos y "
         << segundos << " segundos\n";
}
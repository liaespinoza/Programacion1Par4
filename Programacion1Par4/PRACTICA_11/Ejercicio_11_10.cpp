// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Equipo {
    string nombre;
    int partidosJugados;
    int victorias;
    int puntosTotales;
};

void registrarEquipos(vector<Equipo> &equipos, int n);
void simularPartido(vector<Equipo> &equipos);
void ordenarEquipos(vector<Equipo> &equipos);
void mostrarTabla(vector<Equipo> equipos);

int main() {
    srand(time(0));

    int n;

    cout << "Cantidad de equipos: ";
    cin >> n;

    vector<Equipo> equipos;

    registrarEquipos(equipos, n);

    simularPartido(equipos);

    ordenarEquipos(equipos);

    mostrarTabla(equipos);

    return 0;
}

void registrarEquipos(vector<Equipo> &equipos, int n) {

    for (int i = 0; i < n; i++) {

        Equipo e;

        cout << "Nombre del equipo: ";
        cin >> e.nombre;

        e.partidosJugados = 0;
        e.victorias = 0;
        e.puntosTotales = 0;

        equipos.push_back(e);
    }
}

void simularPartido(vector<Equipo> &equipos) {

    int equipo1 = rand() % equipos.size();
    int equipo2 = rand() % equipos.size();

    while (equipo1 == equipo2) {
        equipo2 = rand() % equipos.size();
    }

    int ganador = rand() % 2;

    cout << "\nPartido: "
         << equipos[equipo1].nombre
         << " vs "
         << equipos[equipo2].nombre << endl;

    if (ganador == 0) {

        cout << "Ganador: "
             << equipos[equipo1].nombre << endl;

        equipos[equipo1].partidosJugados++;
        equipos[equipo1].victorias++;
        equipos[equipo1].puntosTotales += 3;

        equipos[equipo2].partidosJugados++;

    }
    else {

        cout << "Ganador: "
             << equipos[equipo2].nombre << endl;

        equipos[equipo2].partidosJugados++;
        equipos[equipo2].victorias++;
        equipos[equipo2].puntosTotales += 3;

        equipos[equipo1].partidosJugados++;
    }
}

void ordenarEquipos(vector<Equipo> &equipos) {

    for (int i = 0; i < equipos.size() - 1; i++) {

        for (int j = 0;
             j < equipos.size() - 1 - i;
             j++) {

            if (equipos[j].puntosTotales
                < equipos[j + 1].puntosTotales) {

                Equipo aux = equipos[j];

                equipos[j] = equipos[j + 1];

                equipos[j + 1] = aux;
            }
        }
    }
}

void mostrarTabla(vector<Equipo> equipos) {

    cout << "\n--- TABLA DE POSICIONES ---\n";

    cout << "Posicion | Equipo | Jugados | Victorias | Puntos\n";

    for (int i = 0; i < equipos.size(); i++) {

        cout << i + 1 << " | "
             << equipos[i].nombre << " | "
             << equipos[i].partidosJugados << " | "
             << equipos[i].victorias << " | "
             << equipos[i].puntosTotales << endl;
    }
}
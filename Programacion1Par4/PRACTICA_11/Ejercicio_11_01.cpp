// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>

using namespace std;

struct Jugador {

    string nickname;
    int nivel;
    int experiencia;
};

void agregarExperiencia(Jugador &jugador, int puntos);

int main() {
    Jugador jugador;

    cout << "Nickname: ";
    cin >> jugador.nickname;

    cout << "Nivel: ";
    cin >> jugador.nivel;

    cout << "Experiencia: ";
    cin >> jugador.experiencia;

    cout << "\nAntes:\n";
    cout << jugador.nickname << " "
         << jugador.nivel << " "
         << jugador.experiencia << endl;

    int puntos;
    cout << "Puntos de experiencia: ";
    cin >> puntos;

    agregarExperiencia(jugador, puntos);

    cout << "\nDespues:\n";
    cout << jugador.nickname << " "
         << jugador.nivel << " "
         << jugador.experiencia << endl;

    return 0;
}

void agregarExperiencia(Jugador &jugador, int puntos) {
    jugador.experiencia += puntos;

    if (jugador.experiencia > 100) {
        jugador.nivel++;
        jugador.experiencia = 0;
    }
}
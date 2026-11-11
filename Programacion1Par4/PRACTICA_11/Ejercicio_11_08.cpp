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

struct Estudiante {
    string nombres;
    int notaFinal;
};

void mostrarResultados(vector<Estudiante> estudiantes);

int main() {
    srand(time(0));

    int n;

    cout << "Cantidad de estudiantes: ";
    cin >> n;

    vector<Estudiante> estudiantes;

    for (int i = 0; i < n; i++) {
        Estudiante e;

        cout << "Nombre: ";
        cin >> e.nombres;

        e.notaFinal = rand() % 101;

        estudiantes.push_back(e);
    }

    mostrarResultados(estudiantes);

    return 0;
}

void mostrarResultados(vector<Estudiante> estudiantes) {

    cout << "\n--- APROBADOS ---\n";

    for (int i = 0; i < estudiantes.size(); i++) {

        if (estudiantes[i].notaFinal >= 60) {
            cout << estudiantes[i].nombres
                 << " - "
                 << estudiantes[i].notaFinal << endl;
        }
    }

    cout << "\n--- REPROBADOS ---\n";

    for (int i = 0; i < estudiantes.size(); i++) {

        if (estudiantes[i].notaFinal < 60) {
            cout << estudiantes[i].nombres
                 << " - "
                 << estudiantes[i].notaFinal << endl;
        }
    }
}
// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Tarea {
    string descripcion;
    bool completada;
};

void mostrarPendientes(vector<Tarea> tareas);
void completarTarea(vector<Tarea> &tareas, int indice);

int main() {
    int n;

    cout << "Cantidad de tareas: ";
    cin >> n;

    vector<Tarea> tareas;

    for (int i = 0; i < n; i++) {
        Tarea t;

        cout << "Descripcion: ";
        cin >> t.descripcion;

        t.completada = false;

        tareas.push_back(t);
    }

    int opcion;

    do {
        cout << "\n1. Mostrar pendientes\n";
        cout << "2. Completar tarea\n";
        cout << "3. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            mostrarPendientes(tareas);
        }
        else if (opcion == 2) {
            int indice;

            cout << "Indice de tarea: ";
            cin >> indice;

            completarTarea(tareas, indice);
        }

    } while (opcion != 3);

    return 0;
}

void mostrarPendientes(vector<Tarea> tareas) {

    cout << "\n--- TAREAS PENDIENTES ---\n";

    for (int i = 0; i < tareas.size(); i++) {

        if (tareas[i].completada == false) {
            cout << i << ". "
                 << tareas[i].descripcion << endl;
        }
    }
}

void completarTarea(vector<Tarea> &tareas, int indice) {

    if (indice >= 0 && indice < tareas.size()) {
        tareas[indice].completada = true;
    }
}
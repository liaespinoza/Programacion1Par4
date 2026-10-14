// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 14/10/2026

#include <iostream>
using namespace std;


void inicializarSala(int sala[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sala[i][j] = 0;
        }
    }
}

void mostrarSala(int sala[5][5]) {
    cout << "\nSala de cine VIP\n";
    cout << "L = Libre, O = Ocupado\n\n";

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (sala[i][j] == 0) {
                cout << "L\t";
            } else {
                cout << "O\t";
            }
        }
        cout << endl;
    }
}

void comprarEntrada(int sala[5][5]) {
    int fila, asiento;

    cout << "Ingrese la fila (1-5): ";
    cin >> fila;

    cout << "Ingrese el asiento (1-5): ";
    cin >> asiento;

    if (fila >= 1 && fila <= 5 &&
        asiento >= 1 && asiento <= 5) {

        if (sala[fila - 1][asiento - 1] == 0) {
            sala[fila - 1][asiento - 1] = 1;
            cout << "Reserva exitosa." << endl;
        } else {
            cout << "Asiento no disponible." << endl;
        }

    } else {
        cout << "Fila o asiento invalido." << endl;
    }
}

void mostrarEstadisticas(int sala[5][5]) {
    int libres = 0;
    int ocupados = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (sala[i][j] == 0) {
                libres++;
            } else {
                ocupados++;
            }
        }
    }

    cout << "Asientos libres: " << libres << endl;
    cout << "Asientos ocupados: " << ocupados << endl;

    cout << "Porcentaje libre: "
         << libres * 100.0 / 25 << "%" << endl;

    cout << "Porcentaje ocupado: "
         << ocupados * 100.0 / 25 << "%" << endl;
}

int main() {
    int sala[5][5];
    int opcion = 0;

    inicializarSala(sala);

    while (opcion != 4) {
        cout << "\n--- MENU CINE VIP ---\n";
        cout << "1. Mostrar sala\n";
        cout << "2. Comprar entrada\n";
        cout << "3. Estadisticas\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            mostrarSala(sala);
        } else if (opcion == 2) {
            comprarEntrada(sala);
        } else if (opcion == 3) {
            mostrarEstadisticas(sala);
        } else if (opcion == 4) {
            cout << "Fin del programa." << endl;
        } else {
            cout << "Opcion invalida." << endl;
        }
    }
}

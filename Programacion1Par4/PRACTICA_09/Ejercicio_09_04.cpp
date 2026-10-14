// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 14/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void generarMatriz(int matriz[100][100], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = 1 + rand() % 10;
        }
    }
}

void mostrarMatriz(int matriz[100][100], int row, int cols) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

void buscarPuntoSilla(int matriz[100][100], int row, int cols) {
    int encontrado = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {

            int esMenorFila = 1;
            int esMayorColumna = 1;

            // Comprobar si es el menor de su fila
            for (int k = 0; k < cols; k++) {
                if (matriz[i][k] < matriz[i][j]) {
                    esMenorFila = 0;
                }
            }

            // Comprobar si es el mayor de su columna
            for (int k = 0; k < row; k++) {
                if (matriz[k][j] > matriz[i][j]) {
                    esMayorColumna = 0;
                }
            }

            // Comprobar las dos condiciones
            if (esMenorFila == 1 && esMayorColumna == 1) {
                cout << "Punto de silla encontrado: "
                     << matriz[i][j] << endl;

                cout << "Fila: " << i + 1 << endl;
                cout << "Columna: " << j + 1 << endl;

                encontrado = 1;
            }
        }
    }

    if (encontrado == 0) {
        cout << "No se encontro ningun punto de silla." << endl;
    }
}

int main() {
    int matriz[100][100];
    int row, cols;

    srand(time(0));

    cout << "Ingrese el numero de filas: ";
    cin >> row;

    cout << "Ingrese el numero de columnas: ";
    cin >> cols;

    if (row >= 1 && row <= 100 &&
        cols >= 1 && cols <= 100) {

        generarMatriz(matriz, row, cols);

        cout << "\nMatriz generada:\n";
        mostrarMatriz(matriz, row, cols);

        cout << "\nBusqueda de puntos de silla:\n";
        buscarPuntoSilla(matriz, row, cols);

    } else {
        cout << "Las dimensiones deben estar entre 1 y 100."
             << endl;
    }
}

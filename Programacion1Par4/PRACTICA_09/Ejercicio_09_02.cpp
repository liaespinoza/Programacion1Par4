// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 14/10/2026
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void generarMatriz(int matriz[100][100], int row, int cols, int A, int B) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            matriz[i][j] = A + rand() % (B - A + 1);
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

int sumarUltimaColumna(int matriz[100][100], int row, int cols) {
    int suma = 0;

    for (int i = 0; i < row; i++) {
        suma = suma + matriz[i][cols - 1];
    }

    return suma;
}

int productoUltimaFila(int matriz[100][100],
                       int row, int cols) {
    int producto = 1;

    for (int j = 0; j < cols; j++) {
        producto = producto * matriz[row - 1][j];
    }

    return producto;
}

void buscarMayor(int matriz[100][100], int row, int cols) {
    int mayor = matriz[0][0];
    int filaMayor = 0;
    int columnaMayor = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                filaMayor = i;
                columnaMayor = j;
            }
        }
    }

    cout << "Mayor valor: " << mayor << endl;
    cout << "Fila: " << filaMayor + 1 << endl;
    cout << "Columna: " << columnaMayor + 1 << endl;
}

double calcularPromedio(int matriz[100][100],
                        int row, int cols) {
    int suma = 0;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            suma = suma + matriz[i][j];
        }
    }

    return (double)suma / (row * cols);
}

int main() {
    int matriz[100][100];
    int n, A, B;

    srand(time(0));

    cout << "Ingrese el orden de la matriz: ";
    cin >> n;

    if (n >= 1 && n <= 100) {
        cout << "Ingrese A: ";
        cin >> A;

        cout << "Ingrese B: ";
        cin >> B;

        if (A > B) {
            int aux = A;
            A = B;
            B = aux;
        }

        generarMatriz(matriz, n, n, A, B);

        cout << "\nMatriz generada:\n";
        mostrarMatriz(matriz, n, n);

        cout << "\nSuma de la ultima columna: "
             << sumarUltimaColumna(matriz, n, n) << endl;

        cout << "Producto de la ultima fila: "
             << productoUltimaFila(matriz, n, n) << endl;

        buscarMayor(matriz, n, n);

        cout << "Promedio: "
             << calcularPromedio(matriz, n, n) << endl;

    } else {
        cout << "El orden debe estar entre 1 y 100." << endl;
    }
}

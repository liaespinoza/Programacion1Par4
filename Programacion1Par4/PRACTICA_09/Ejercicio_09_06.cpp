// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 14/10/2026

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generarTemperaturas(int temperaturas[4][7]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            temperaturas[i][j] = 5 + rand() % 31;
        }
    }
}

void mostrarTemperaturas(int temperaturas[4][7]) {
    for (int i = 0; i < 4; i++) {
        cout << "Semana " << i + 1 << ": ";

        for (int j = 0; j < 7; j++) {
            cout << temperaturas[i][j] << "\t";
        }

        cout << endl;
    }
}

void buscarTemperaturaMaxima(int temperaturas[4][7]) {
    int mayor = temperaturas[0][0];
    int semanaMayor = 0;
    int diaMayor = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (temperaturas[i][j] > mayor) {
                mayor = temperaturas[i][j];
                semanaMayor = i;
                diaMayor = j;
            }
        }
    }

    cout << "\nTemperatura mas alta: " << mayor << " grados C" << endl;
    cout << "Semana: " << semanaMayor + 1 << endl;
    cout << "Dia: " << diaMayor + 1 << endl;
}

void calcularPromedios(int temperaturas[4][7]) {
    for (int i = 0; i < 4; i++) {
        int suma = 0;

        for (int j = 0; j < 7; j++) {
            suma = suma + temperaturas[i][j];
        }

        cout << "Promedio de la semana " << i + 1 << ": "
             << suma / 7.0 << " grados C" << endl;
    }
}

void contarTemperaturasAltas(int temperaturas[4][7]) {
    int contador = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (temperaturas[i][j] > 30) {
                contador++;
            }
        }
    }

    cout << "Dias con temperatura superior a 30 grados: "
         << contador << endl;
}

int main() {
    int temperaturas[4][7];

    srand(time(0));

    generarTemperaturas(temperaturas);

    cout << "Temperaturas registradas:\n";
    mostrarTemperaturas(temperaturas);

    buscarTemperaturaMaxima(temperaturas);

    cout << "\nPromedios semanales:\n";
    calcularPromedios(temperaturas);

    cout << endl;
    contarTemperaturasAltas(temperaturas);
}

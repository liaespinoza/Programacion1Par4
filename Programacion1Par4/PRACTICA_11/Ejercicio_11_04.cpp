// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Paquete {
    string codigoRastreo;
    char direccion[50];
    double pesoKg;
    char estado[20];
};

void entregarPaquete(Paquete &paquete);

int main() {
    Paquete paquete;

    cout << "Codigo: ";
    cin >> paquete.codigoRastreo;

    cin.ignore();

    cout << "Direccion: ";
    cin.getline(paquete.direccion, 50);

    cout << "Peso: ";
    cin >> paquete.pesoKg;

    strcpy(paquete.estado, "En Transito");

    entregarPaquete(paquete);

    cout << "\nBytes de la estructura: "
         << sizeof(Paquete) << endl;

    return 0;
}

void entregarPaquete(Paquete &paquete) {
    strcpy(paquete.estado, "Entregado");

    cout << "\n--- RECIBO ---\n";
    cout << "Codigo: " << paquete.codigoRastreo << endl;
    cout << "Direccion: " << paquete.direccion << endl;
    cout << "Peso: " << paquete.pesoKg << " kg\n";
    cout << "Estado: " << paquete.estado << endl;
}
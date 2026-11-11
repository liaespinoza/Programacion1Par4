// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Producto {
    string nombre;
    string codigo;
    double precio;
};

void analizarInventario(vector<Producto> productos);

int main() {
    int n;

    cout << "Cantidad de productos: ";
    cin >> n;

    vector<Producto> productos;

    for (int i = 0; i < n; i++) {
        Producto p;

        cout << "Nombre: ";
        cin >> p.nombre;

        cout << "Codigo: ";
        cin >> p.codigo;

        cout << "Precio: ";
        cin >> p.precio;

        productos.push_back(p);
    }

    analizarInventario(productos);

    return 0;
}

void analizarInventario(vector<Producto> productos) {
    int caro = 0;
    int barato = 0;

    for (int i = 1; i < productos.size(); i++) {

        if (productos[i].precio > productos[caro].precio) {
            caro = i;
        }

        if (productos[i].precio < productos[barato].precio) {
            barato = i;
        }
    }

    cout << "Mas caro: "
         << productos[caro].nombre
         << " - "
         << productos[caro].precio << endl;

    cout << "Mas barato: "
         << productos[barato].nombre
         << " - "
         << productos[barato].precio << endl;
}
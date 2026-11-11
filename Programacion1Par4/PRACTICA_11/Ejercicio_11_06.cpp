// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Contacto {
    string nombreCompleto;
    int telefono;
};

void buscarContactos(vector<Contacto> contactos, string buscado);

int main() {
    int n;

    cout << "Cantidad de contactos: ";
    cin >> n;

    vector<Contacto> contactos;

    for (int i = 0; i < n; i++) {
        Contacto c;

        cout << "Nombre: ";
        cin >> c.nombreCompleto;

        cout << "Telefono: ";
        cin >> c.telefono;

        contactos.push_back(c);
    }

    string buscado;

    cout << "Buscar: ";
    cin >> buscado;

    buscarContactos(contactos, buscado);

    return 0;
}

void buscarContactos(vector<Contacto> contactos, string buscado) {
    for (int i = 0; i < contactos.size(); i++) {

        if (contactos[i].nombreCompleto.find(buscado)
            != string::npos) {

            cout << contactos[i].nombreCompleto
                 << " - "
                 << contactos[i].telefono << endl;
        }
    }
}
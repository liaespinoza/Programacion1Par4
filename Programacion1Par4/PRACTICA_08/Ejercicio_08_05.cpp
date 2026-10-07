// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
using namespace std;

void SepararURL(string url);

int main()
{
    string url;

    cout << "Ingrese la URL: ";
    cin >> url;

    SepararURL(url);

    return 0;
}

void SepararURL(string url)
{
    int p1 = url.find("://");

    cout << "Protocolo: ";
    cout << url.substr(0, p1) << endl;

    int p2 = url.find("/", p1 + 3);

    cout << "Dominio: ";
    cout << url.substr(p1 + 3, p2 - p1 - 3) << endl;

    cout << "Ruta: ";
    cout << url.substr(p2) << endl;
}

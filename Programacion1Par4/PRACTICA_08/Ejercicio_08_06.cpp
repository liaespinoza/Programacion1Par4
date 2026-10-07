// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026

#include <iostream>
#include <string>
using namespace std;

string QuitarEspacios(string texto);

int main()
{
    string texto;

    cout << "Ingrese el texto: ";
    getline(cin, texto);

    texto = QuitarEspacios(texto);

    cout << texto << endl;

    return 0;
}

string QuitarEspacios(string texto)
{
    string resultado = "";

    for (int i = 0; i < texto.length(); i++)
    {
        if (texto[i] != ' ')
        {
            resultado = resultado + texto[i];
        }
        else
        {
            if (resultado != "" && resultado[resultado.length() - 1] != ' ')
            {
                resultado = resultado + ' ';
            }
        }
    }

    if (resultado.length() > 0 && resultado[resultado.length() - 1] == ' ')
    {
        resultado = resultado.substr(0, resultado.length() - 1);
    }

    return resultado;
}

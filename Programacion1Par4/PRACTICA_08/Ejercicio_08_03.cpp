// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 07/10/2026
//En los sistemas de facturación, por seguridad, se verifica la validez del número
//completo de la tarjeta de crédito de un cliente. Escribe una función que reciba un string
//con los 16 dígitos de una tarjeta, verifique que la tarjeta sea válida.

#include <iostream>
#include <string>
using namespace std;

bool ValidarTarjeta(string tarjeta);


int main()
{
    string tarjeta;

    cout << "Ingrese los 16 digitos de la tarjeta: ";
    cin >> tarjeta;

    if (ValidarTarjeta(tarjeta))
    {
        cout << "La tarjeta es valida." << endl;
    }
    else
    {
        cout << "La tarjeta no es valida." << endl;
    }

    return 0;
}

bool ValidarTarjeta(string tarjeta)
{
    int suma = 0;
    bool duplicar = false;

    for (int i = tarjeta.length() - 1; i >= 0; i--)
    {
        char caracter = tarjeta[i];

        int digito = caracter - '0';

        if (duplicar == true)
        {
            digito = digito * 2;

            if (digito > 9)
            {
                digito = digito - 9;
            }
        }

        suma = suma + digito;

        duplicar = !duplicar;
    }

    if (suma % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


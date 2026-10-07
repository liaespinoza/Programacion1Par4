#include <iostream>
#include <string>
using namespace std;

string FiltrarMensaje(string mensaje, string prohibidas[], int cantidad);

int main()
{
    string mensaje;
    string prohibidas[2] = {"manco", "tonto"};

    cout << "Ingrese el mensaje: ";
    getline(cin, mensaje);

    mensaje = FiltrarMensaje(mensaje, prohibidas, 2);

    cout << mensaje << endl;

    return 0;
}

string FiltrarMensaje(string mensaje, string prohibidas[], int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        string palabra = prohibidas[i];

        for (int j = 0; j < mensaje.length(); j++)
        {
            bool encontrada = true;

            if (j + palabra.length() <= mensaje.length())
            {
                for (int k = 0; k < palabra.length(); k++)
                {
                    if (mensaje[j + k] != palabra[k])
                    {
                        encontrada = false;
                    }
                }

                if (encontrada == true)
                {
                    for (int k = 0; k < palabra.length(); k++)
                    {
                        mensaje[j + k] = '*';
                    }
                }
            }
        }
    }

    return mensaje;
}
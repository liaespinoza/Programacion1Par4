// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 11/11/2026

#include <iostream>
#include <string>

using namespace std;

struct Cuenta {
    string titular;
    int numeroCuenta;
    double saldo;
};

void depositar(Cuenta &cuenta, double cantidad);
void retirar(Cuenta &cuenta, double cantidad);

int main() {
    Cuenta cuenta;

    cout << "Titular: ";
    cin >> cuenta.titular;

    cout << "Numero de cuenta: ";
    cin >> cuenta.numeroCuenta;

    cout << "Saldo inicial: ";
    cin >> cuenta.saldo;

    double deposito, retiro;

    cout << "Deposito: ";
    cin >> deposito;

    depositar(cuenta, deposito);

    cout << "Retiro: ";
    cin >> retiro;

    retirar(cuenta, retiro);

    cout << "Saldo final: " << cuenta.saldo << endl;

    return 0;
}

void depositar(Cuenta &cuenta, double cantidad) {
    cuenta.saldo += cantidad;
}

void retirar(Cuenta &cuenta, double cantidad) {
    if (cantidad <= cuenta.saldo) {
        cuenta.saldo -= cantidad;
    }
    else {
        cout << "Saldo insuficiente\n";
    }
}
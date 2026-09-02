// Materia: Programación I, Paralelo 4

// Autor:Lia Catalina Espinoza Estrada

// Carrera del estudiante: Ing mecatronica

// Fecha creación: 01/09/2026
#include <iostream>

using namespace std;

double promedioNotas(double nota1, double nota2, double nota3);
bool aprobado(double nota, double notaMinima);
double notaFinal(double promedio, double examenFinal);

int main(){

    int estudiantes = 0;
    int aprobados = 0;
    int reprobados = 0;
    int cantidadFinales = 0;

    double NOTA1 = 0;
    double NOTA2 = 0;
    double NOTA3 = 0;
    double notaExamen = 0;
    double prom = 0;
    double notaF = 0;
    double sumaNotasFinales = 0;
    double porcentajeAprobados = 0;
    double porcentajeReprobados = 0;
    double promedioFinal = 0;

    cout << "Ingrese la cantidad de estudiantes: " << endl;
    cin >> estudiantes;

    for(int i = 1; i <= estudiantes; i++){

        cout << "ESTUDIANTE " << i << endl;
        cout << "Ingrese la nota del primer parcial: " << endl;
         cin >> NOTA1;

        while(NOTA1 < 0 || NOTA1 > 100){

            cout << "Nota invalida, debe ingresar una nota entre 0 y 100: " << endl;
            cin >> NOTA1;

        }

        cout << "Ingrese la nota del segundo parcial: " << endl;
        cin >> NOTA2;

         while(NOTA2 < 0 || NOTA2 > 100){

            cout << "Nota invalida, debe ingresar una nota entre 0 y 100: " << endl;
            cin >> NOTA2;

         }

        cout << "Ingrese la nota del tercer parcial: " << endl;
        cin >> NOTA3;

         while(NOTA3 < 0 || NOTA3 > 100){

            cout << "Nota invalida, debe ingresar una nota entre 0 y 100: " << endl;
            cin >> NOTA3;

         }

        if(aprobado(NOTA1, 60) && aprobado(NOTA2, 60) && aprobado(NOTA3, 60)){

            prom = promedioNotas(NOTA1, NOTA2, NOTA3);

            cout << "Su nota de habilitacion es: " << prom << endl;

            cout << "Ingrese la nota de su examen final: " << endl;
            cin >> notaExamen;

            while(notaExamen < 0 || notaExamen > 100){

                cout << "Nota invalida, debe ingresar una nota entre 0 y 100: " << endl;
                cin >> notaExamen;

            }

            notaF = notaFinal(prom, notaExamen);

            cantidadFinales++;

            cout << "Nota parcial 1: " << NOTA1 << endl;
            cout << "Nota parcial 2: " << NOTA2 << endl;
            cout << "Nota parcial 3: " << NOTA3 << endl;
            cout << "Examen final: " << notaExamen << endl;
            cout << "Nota final: " << notaF << endl;

            if(aprobado(notaF, 51)){

                cout << "APROBADO" << endl;
                aprobados++;

            }
            else{

                cout << "REPROBADO" << endl;
                reprobados++;

            }

            sumaNotasFinales = sumaNotasFinales + notaF;

        }
        else{

            cout << "Nota parcial 1: " << NOTA1 << endl;
            cout << "Nota parcial 2: " << NOTA2 << endl;
            cout << "Nota parcial 3: " << NOTA3 << endl;
            cout << "No puede dar el examen final." << endl;
            cout << "REPROBADO" << endl;

            reprobados++;

        }

    }

    porcentajeAprobados = (aprobados * 100.0) / estudiantes;
    porcentajeReprobados = (reprobados * 100.0) / estudiantes;

    if(cantidadFinales > 0){

        promedioFinal = sumaNotasFinales / cantidadFinales;

    }

    cout << "Calificaciones: " << endl;
    cout << "Porcentaje de aprobados: " << porcentajeAprobados << "%" << endl;
    cout << "Porcentaje de reprobados: " << porcentajeReprobados << "%" << endl;
    cout << "Promedio de notas finales: " << promedioFinal << endl;

    return 0;
}


double promedioNotas(double nota1, double nota2, double nota3){

    double promedio = 0;

    promedio = nota1 + nota2 + nota3;
    promedio = promedio / 3.0;

    return promedio;
}


bool aprobado(double nota, double notaMinima){

    bool ap = false;

    if(nota >= notaMinima){

        ap = true;

    }
    else{

        ap = false;

    }

    return ap;
}


double notaFinal(double promedio, double examenFinal){

    double nota = 0;

    nota = (promedio * 0.5) + (examenFinal * 0.5);

    return nota;
}
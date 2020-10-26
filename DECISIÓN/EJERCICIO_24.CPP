/*
Author: Jara Juan Alberto Esequiel
Actividades: Escriba  un  algoritmo  que  permita  ingresar  valores  numéricos  A,  B,  C,  D,  E 
 y  decir  si  su  pro-medio es mayor que o igual a 10.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
 float promedio = 0, aux = 0;

    cout << "Ingrese el valor de A: " << endl;
    cin >> aux;
    promedio += aux;
    cout << "Ingrese el valor de B: " << endl;
    cin >> aux;
    promedio += aux;
    cout << "Ingrese el valor de C: " << endl;
    cin >> aux;
    promedio += aux;
    cout << "Ingrese el valor de D: " << endl;
    cin >> aux;
    promedio += aux;
    cout << "Ingrese el valor de E: " << endl;
    cin >> aux;
    promedio += aux;
    promedio /= 5;

    cout << "Promedio: " << promedio << endl;
    return 0;
}
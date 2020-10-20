/*
Author: Jara Juan Alberto Esequiel
Actividad: Escribir un algoritmo que intercambie dos valores numéricos ingresados por teclado.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int A = 0, B = 0;

    cout << "Ingrese un numero en A: " << endl;
    cin >> A;
    cout << "Ingrese un numero en B: " << endl;
    cin >> B;

    A = A + B;
    B = A - B;
    A = A - B;

    cout << "A = " << A  << endl << "B = " << B;

    return 0;
}
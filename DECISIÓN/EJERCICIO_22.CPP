/*
Author: Jara Juan Alberto Esequiel
Actividad: Escriba un algoritmo que determine si un número ingresado es positivo, negativo o cero.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    float nro = 0;

    cout << "Ingrese un numero a analizar: " << endl;
    cin >> nro;

    if (nro < 0)
    {
        cout << "El nro es negativo" << endl;
    }

    if (nro == 0)
    {
        cout << "El nro es 0" << endl;
    }

    if (nro > 0)
    {
        cout << "El nro e positivo" << endl;
    }
    return 0;
}
/*
Author: Jara Juan Alberto Esequiel
Actividad: Escribir un algoritmo que permita ingresar tres números distintos entre sí y los muestre en pantalla 
ordenados de mayor a menor y de menor a mayor.
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, c, aux;

    cout << "ingrese los tres numeros enteros :" << endl;
    cout << "el primero :";
    cin >> a;
    cout << "el segundo :";
    cin >> b;
    cout << "el tersero :";
    cin >> c;

    if (a < b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    if (a < c)
    {
        aux = a;
        a = c;
        c = aux;
    }

    if (b < c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    cout << "los numeros ordenados son :";
    cout << a << " , " << b << " , " << c << endl;

    return 0;
}
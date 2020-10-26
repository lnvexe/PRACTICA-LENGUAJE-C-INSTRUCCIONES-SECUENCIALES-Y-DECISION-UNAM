/*
Author: Jara Juan Alberto Esequiel
Actividad: Escriba un algoritmo que permita leer dos valores numéricos A y B. Si A es mayor que B debe realizar la suma de ambos, casocontrario, 
se hace el producto.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int A = 0, B = 0;

    cout << "Igrese dos numeros: " << endl;
    cin >> A;
    cin >> B;

    if (A>B)
    {
        cout << "Suma: " << A + B << endl;
    }

    if (A<B)
    {
        cout << "Multiplicacion: " << A * B << endl;  
    }

    if (A == B)
    {
        cout << "Los numeros son iguales" << endl;
    }
    return 0;
}
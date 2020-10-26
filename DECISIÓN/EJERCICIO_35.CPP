/*
Author: Jara Juan Alberto Esequiel
Actividad: Ingresar un número C y determinar si pertenece al intervalo [A, B] con A y B ingresados por teclado.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int A = 0, B = 0, C = 0;

    cout << "Ingrese el valor maximo del intervalo: " << endl;
    cin >> A;
    cout << "Ingrese el valor minimo del intervalo: " << endl;
    cin >> B;
    cout << "Ingrese el valor a analizar: " << endl;
    cin >> C;

    if (C <= A && C >= B){
        cout << "El valor esta dentro del intervalo" << endl;
    }else{
        cout << "El valor no esta dentro del intervalor" << endl;
    }
    
    return 0;
}
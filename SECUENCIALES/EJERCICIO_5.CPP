/*
Author: Jara Juan Alberto Esequiel
Actividad: Escribir un algoritmo que intercambie dos valores numéricos ingresados por teclado.
*/
//Incluimos librerias.
#include <iostream>
//Implementamos para no tener que tipiar std::
using namespace std;

int main(int argc, const char** argv) {
    //Definimos variables.
    int A = 0, B = 0;
    //Imprimimos texto.
    cout << "Ingrese un numero en A: " << endl;
    //Ingreso de datos a la variable A.
    cin >> A;
    //Imprimimos texto.
    cout << "Ingrese un numero en B: " << endl;
    //Ingreso de datos a la variable B.
    cin >> B;

    //Realizamos el cambio de datos.
    A = A + B;
    B = A - B;
    A = A - B;

    //Imprimimos la respuesta.
    cout << "A = " << A  << endl << "B = " << B;

    return 0;
}
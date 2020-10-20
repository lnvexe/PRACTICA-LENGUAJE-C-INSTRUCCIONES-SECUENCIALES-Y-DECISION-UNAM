/*
Author: Jara Juan Alberto Esequiel
Actividad: Escribir un algoritmo que halle el promedio de tres valores A, B, C. El mismo debe emitir los
tres valores por separado y luego el valor promedio.
*/
//Incluimos las librerias.
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Utilizamos para no tener que tipear std::
using namespace std;

int main(int argc, const char** argv) {
    //Definimos variables.
    float promedio = 0, A = 0, B = 0, C = 0;
    //Instrucción que inicializa el generador de números aleatorios.
    srand(time(NULL));
    //Ingresamos valores "RANDOMS" entre 1 y 10.
    A = rand() % 10 + 1;
    B = rand() % 10 + 1;
    C = rand() % 10 + 1;
    //Calculamos el promedio.
    promedio = (A + B + C) / 3;
    //Imprimimos las notas y el promedio.
    cout << "Nota A: " << A << endl << "Nota B: " << B << endl << "Nota C: " << C << endl << "Promedio: " << promedio << endl;

    return 0;
}
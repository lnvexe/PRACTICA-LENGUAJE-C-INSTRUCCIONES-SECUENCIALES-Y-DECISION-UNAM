/*
Author: Jara Juan Alberto Esequiel.
Actividad: Convertir una temperatura dada en la escala Celsius e imprímase en su equivalente Fahrenheit. (F = (9/5) C + 32).
*/
//Incluimos librerias.
#include <iostream>
//Utilizamos para no tipear std::
using namespace std;

int main(int argc, const char **argv)
{
    //Definimos variables.
    float aux = 0;
    //Imprimimos texto y pedimos el ingreso a la variable.
    cout << "Ingrese la temperatura en Celcius para saber su equivalencia en Fahrenheit: " << endl;
    cin >> aux;
    //Imprimimos texto.
    cout << "Celcius: " << aux << endl;
    //Calculamos.
    aux = (9 / 5) * aux + 32;
    //Imprimimos el resultado.
    cout << "Fahrenheit: " << aux << endl;
    return 0;
}
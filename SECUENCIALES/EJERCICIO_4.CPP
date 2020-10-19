/*
Author: Jara Juan Alberto Esequiel
Actividad: Escribir un algoritmo que permita ingresar el perímetro de un círculo y luego calcule y
muestre el radio del mismo.
Fecha: 19/10/2020 - 17:52
*/

#include <iostream> // Añadimos librerias.
#define PI 3.14  // Definimos variable constante.
using namespace std; // Nos evita tener que agregar std::.

//Validamos los datos de la variable perimetro.
float validar_datos(float perimetro){
    //Mientras que el perimetro sea menor o igual a cero nos pedira que ingresemos un valor.
    while (perimetro <= 0)
    {
        cout << "Ingrese el valor de perimetro: " << endl;
        cin >> perimetro;
    }

    return perimetro; //Cuando "perimetro" tenga un valor aceptable, devolvemos ese valor.
}

int main(int argc, const char** argv) {
    //Definimos variables
    float perimetro = 0, resultado = 0;
    //"perimetro" obtiene el valor retornado de la funcion "validar_datos".
    perimetro = validar_datos(perimetro);
    //"resultado" obtiene el radio segun el perimetro.
    resultado = perimetro/2*PI;
    //Imprimimos el resultado.
    cout << "El resultado es: " << resultado << endl; 

    return 0;
}
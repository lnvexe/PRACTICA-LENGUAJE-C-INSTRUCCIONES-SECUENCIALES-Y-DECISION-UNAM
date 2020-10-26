/*
Author: Jara Juan Alberto Esequiel
Actividad: Una  bomba  de  agua  puede  extraer  800  litros  de  agua  por  hora.
Realizar  un  algoritmo  que calcule  el  tiempo  necesario  para  extraer  todo  el  líquido  de  un  tanque 
 del  que  se  saben  sus medidas: altura y radio (éstas se ingresarán por teclado)
*/

#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

int main(int argc, const char** argv) {
    float altura = 0, radio = 0, volumen = 0;

    cout << "Ingrese la altura del recipiente: " << endl;
    cin >> altura;
    cout << "Ingrese el radio del recipiente" << endl;
    cin >> radio;

    volumen = PI * pow(radio, 2) * altura;
    volumen *= 1000;
    volumen = (volumen / 800) * 1;

    cout << "La bomba tardara: " << volumen << " horas en vaciar" << endl; 
    return 0;
}
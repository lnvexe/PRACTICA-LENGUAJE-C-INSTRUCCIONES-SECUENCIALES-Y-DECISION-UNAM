/*
Author: Jara Juan Alberto Esequiel
Actividad: Leer  los  lados  de  un  rectángulo  y  el  radio  de  un  círculo.  
Determinar  si  las áreas  de  ambas figuras son o no iguales.
*/

#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

int main(int argc, const char **argv)
{
    float base = 0, altura = 0, radio = 0, area_rectangulo = 0, area_circulo = 0;

    cout << "- Datos Rectangulo -" << endl;
    cout << "-> Base: " << endl;
    cin >> base;
    cout << "-> Altura: " << endl;
    cin >> altura;
    cout << "-Datos Circunferencia -" << endl;
    cout << "-> Radio:" << endl;
    cin >> radio;

    area_rectangulo = base * altura;
    area_circulo = PI * pow(radio, 2);

    if (area_rectangulo == area_circulo)
    {
        cout << "Las areas son iguales" << endl;
    }
    else
    {
        cout << "Las areas son diferentes" << endl;
    }
    return 0;
}
/*
Author: Jara Juan Alberto Esequiel
Actividad: Diseñe un algoritmo que lea tres longitudes y determine si forman o no un triángulo.
Si es un triángulo  determine  de  que  tipo  de  triángulo  se  trata  entre:  equilátero  (si  tiene  tres  lados iguales), 
isósceles (si tiene dos lados iguales) o escaleno (si tiene tres lados desiguales). Con-sidere que para formar un triángulo 
se requiere que: "el lado mayor sea menor que la suma de los otros dos lados".
*/

#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    float longitud_1 = 0, longitud_2 = 0, longitud_3 = 0;

    cout << "Ingrese las 3 longitudes del triangulo: " << endl;
    cin >> longitud_1;
    cin >> longitud_2;
    cin >> longitud_3;

    if (longitud_2 > longitud_1 && longitud_2 > longitud_3)
    {
        longitud_2 = longitud_1 + longitud_2;
        longitud_1 = longitud_2 - longitud_1;
        longitud_2 = longitud_2 - longitud_1;
    }

    if (longitud_3 > longitud_1 && longitud_3 > longitud_2)
    {
        longitud_3 = longitud_1 + longitud_3;
        longitud_1 = longitud_3 - longitud_1;
        longitud_3 = longitud_3 - longitud_1;
    }

    if (longitud_1 < (longitud_2 + longitud_3))
    {
        if (longitud_1 == longitud_2 && longitud_1 == longitud_3)
        {
            cout << "El triangulo es equilatero." << endl;
        }

        if ((longitud_1 == longitud_2 && longitud_1 != longitud_3) || (longitud_2 == longitud_3 && longitud_2 != longitud_1))
        {
            cout << "El triangulo es isosceles." << endl;
        }

        if (longitud_1 != longitud_2 && longitud_1 != longitud_3 && longitud_2 != longitud_3)
        {
            cout << "El triangulo es escaleno." << endl;
        }
    }else
        {
        cout << "No se puede armar el triangulo." << endl;
        }

    return 0;
}
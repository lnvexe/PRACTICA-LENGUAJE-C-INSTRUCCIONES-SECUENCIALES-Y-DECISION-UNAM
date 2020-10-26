/*
Author: Jara Juan Alberto Esequiel
Actividad: .El  cuadrante  en  el  cual  se  ubica  una  línea  dibujada  desde  el  origen  estádeterminado  
por  el ángulo que la línea forma con el eje positivo de x en la siguiente forma:
El  programa  debe  ingresar  el ángulo  de  la  línea  como  dato  de  entrada  y  desplegar 
el  cua-drante apropiado, según la tabla dada. Si el ángulo es exactamente 0, 90, 180 o 270 grados, 
la línea resultante no se ubica en ningún cuadrante sino en cada uno de los ejes respectivos.
*/

#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    float grados = 0;

    cout << "Ingrese el angulo: " << endl;
    cin >> grados;

    if (grados == 0)
    {
        cout << "La linea se ubica en el eje X." << endl;
    }
    else if (grados > 0 && grados < 90)
    {
        cout << "Se encuentra en el cuadrante I." << endl;
    }

    if (grados == 90)
    {
        cout << "La linea se ubica en el eje Y." << endl;
    }
    else if (grados > 90 && grados < 180)
    {
        cout << "Se encuentra en el cuadrante II." << endl;
    }

    if (grados == 180)
    {
        cout << "La linea se ubica en el eje X." << endl;
    }
    else if (grados > 180 && grados < 270)
    {
        cout << "Se encuentra en el cuadrante III-" << endl;
    }

    if (grados == 270)
    {
        cout << "La linea se ubica en el eje Y." << endl;
    }
    else if (grados > 270 && grados < 360)
    {
        cout << "Se encuentra en el cuadrante IV" << endl;
    }
    return 0;
}
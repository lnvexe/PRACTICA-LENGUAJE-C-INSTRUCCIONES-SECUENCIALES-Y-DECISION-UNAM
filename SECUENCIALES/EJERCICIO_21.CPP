/*
Author: Jara Juan Alberto Esequiel
Actividad: Una  maratón  tiene  26  millas  y  385  yardas.  Realizar  un  algoritmo  que  permita  convertir  la distancia de 
la maratón a kilómetros,
 sabiendo que 1 milla tiene 1760 yardas.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    float km = 0;

    km = 385.00 / 1760.00;
    cout << km << endl;
    km += 1;
    km *= 1.60934;

    cout << "Resultado: " << km << endl;

    return 0;
}
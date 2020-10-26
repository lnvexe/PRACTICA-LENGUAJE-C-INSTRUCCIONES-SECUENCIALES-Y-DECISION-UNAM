/*
Author: Jara Juan Alberto Esequiel
Actividad: Determinar la velocidad de un automóvil que se desplaza a una velocidad constante si se co-noce 
la distancia recorrida y el tiempo utilizado. Mostrar la velocidad encontrada. Ambos da-tos se ingresan por teclado
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    float distancia = 0, tiempo = 0, velocidad = 0;

    cout << "-> Ingrese la distancia recorrida: " << endl;
    cin >> distancia;
    cout << "-> Ingrese la velocidad: " << endl;
    cin >> tiempo;

    velocidad = distancia / tiempo;
 
    cout << "La velocidad es de: " << velocidad << "KM/h" << endl;
    return 0;
}
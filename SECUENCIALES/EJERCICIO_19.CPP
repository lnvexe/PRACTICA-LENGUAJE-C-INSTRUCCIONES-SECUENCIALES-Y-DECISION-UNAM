/*
Author: Jara Juan Alberto Esequiel
Actividad: Un  motor  de  un    50rpm  y  tiene  una  Rueda  conectada  que  tiene  una  relación  de  1a  2 
 (una vuelta del motor dos vueltas de la rueda). Realizar un algoritmo que calcule la distancia reco-rrida por la goma 
 en una hora teniendo en cuenta de que el radio de la rueda es de 32 centí-metros.
*/

#include <iostream>
#define PI 3.14
using namespace std;

float distancia_recorrida(float valor){
    float aux = 0;

    aux = 2 * PI * valor;
    aux = aux * 50 * 2;
    return aux;

}

int main(int argc, const char** argv) {
    float radio = 32, total = 0;
 
    total = distancia_recorrida(radio) / 1000;

    cout << "Recorrera: " << total << " KM en una hora." << endl;
    return 0;
}
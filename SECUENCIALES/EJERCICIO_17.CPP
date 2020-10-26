/*
Author: Jara Juan Alberto Esequiel
Actividad: Un  pintor  sabe  que  con  una  pintura  determinada  puede  pintar  3,6  metros  cuadrados  con cada medio litro.
Sabiendo la altura y el largo de la pared a pintar, realizar un algoritmo que informe cuantos litros de pintura necesitará
para la pared en cuestión. Los datos de la pared se ingresarán en metros.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    float altura = 0, largo = 0, area = 0;

    cout << "-> Ingrese la altura de la pared: " << endl;
    cin >> altura;
    cout << "-> Ingrese el largo de la pared: " << endl;
    cin >> largo;

    area = altura * largo;
    area = area / 5.2;

    cout << "Se necesitaran: " << area << " Litros de pintura" << endl;
 
    return 0;
}
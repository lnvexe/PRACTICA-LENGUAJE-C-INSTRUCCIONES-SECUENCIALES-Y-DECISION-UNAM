/*
Author: Jara Juan Alberto Esequiel
Actividad: Teniendo como dato la hipotenusa y el ángulo que forma la misma  con la base de un triángu-lo rectángulo 
calcular y mostrar los lados y ángulos restantes.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char** argv) {
    float lado_a = 0, lado_b = 0, lado_c = 0, angulo_a = 0, angulo_b = 0, angulo_c = 0;

    cout << "Ingrese la hipotenusa: " << endl;
    cin >> lado_a;
    cout << "Ingrese el angulo: " << endl;
    cin >> angulo_b;
    angulo_a = 90;

    angulo_c = 180 - (angulo_a + angulo_b);

    lado_b = lado_a * sin(angulo_b);
    lado_c = lado_a * cos(angulo_b);

    cout << "Datos: " << endl << "-Lado A: " << lado_a << endl << "-Lado B: " << lado_b << endl << "-Lado C: " << lado_c << endl;
    cout << "-Angulo A: " << angulo_a << endl << "-Angulo B: " << angulo_b << endl << "-Angulo C: " << angulo_c << endl;
    return 0;

}
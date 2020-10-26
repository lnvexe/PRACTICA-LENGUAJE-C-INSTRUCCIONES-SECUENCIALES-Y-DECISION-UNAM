/*
Author: Jara Juan Alberto Esequiel
Actividad: Dados los catetos de un triángulo rectángulo, calcular e imprimir su hipotenusa. 
donde a y b son los catetos, h es la hipotenusa.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char** argv) {
 float hipotenusa = 0, cateto_a = 0, cateto_b = 0;

 cout << "Ingrese los catetos: " << endl;
    cin >> cateto_a;
    cin >> cateto_b;

    hipotenusa = hypot(cateto_a, cateto_b);

    cout << "Hipotenusa: " << hipotenusa << endl;

    hipotenusa = sqrt(pow(cateto_a, 2) + pow(cateto_b, 2));
    cout << "Hipotenusa: " << hipotenusa << endl;

    return 0;
}
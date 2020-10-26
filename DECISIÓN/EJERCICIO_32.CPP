/*
Author: Jara Juan Alberto Esequiel
Actividad: Diseñe un algoritmo que permita ingresar dos valores X e Y, luego determine quéporcentaje es X de Y.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
 int x = 0, y = 0;

    cout << "Ingrese X y luego Y: " << endl;
    cin >> x;
    cin >> y;

    x = (100 / y) * x;
    
    cout << "X es igual al " << x << "% de Y." << endl;
    return 0;
}
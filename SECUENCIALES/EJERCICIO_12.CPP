/*
Author: Jara Juan Alberto Esequiel
Actividad: El sueldo neto de un vendedor se calcula como la suma de un sueldo básico de $ 250 más el 12% del monto total vendido. 
Diseñe un algoritmo que determine el sueldo neto de un ven-dedor conociendo el monto de las tres ventas que hizo en el mes.
*/

#include <iostream>
using namespace std;

int main(int argc, const char** argv) {
    float sueldo_neto = 0, venta = 0;

    cout << "-> Ingrese el monto de las ventas realizadas: " << endl;
    cin >> venta;
    sueldo_neto += venta;
    cin >> venta;
    sueldo_neto += venta;
    cin >> venta;
    sueldo_neto += venta;

    sueldo_neto *= 0.12;
    sueldo_neto += 250;
    cout << "El sueldo neto es de: $" << sueldo_neto << endl;
    return 0;
}
/*
Author: Jara Juan Alberto Esequiel
Actividad: Una compañía dedicada al alquiler de automóviles cobra $30 hasta un máximo de 300 km de distancia recorrida.
Para más de 300 km y hasta 1000 km, cobra $30 más un monto adicional de $ 0.15 por cada kilómetro en exceso sobre 300.
Para más de 1000 km cobra $30 más un monto adicional de $ 0.10 por cada kilómetro en exceso sobre 1000.
Los precios ya incluyen el 18% del impuesto general a las ventas, IGV.
Diseñe un algoritmo que, ingresando la distancia recorrida, determine el monto a pagar por el alquiler de un vehículo y 
el monto incluido del impuesto.
*/

#include <iostream>
#define IGV 0.18
using namespace std;

int main(int argc, const char** argv) {
    float KM = 0, Cobro = 0;

    cout << "-> Ingrese la distancia recorrida (KM): " << endl;
    cin >> KM;

    Cobro = 30;

    if (KM > 300 && KM <= 1000)
    {
        Cobro += (KM - 300) * 0.15;
    }

    if (KM > 1000)
    {
        Cobro += (1000 - 300) * 0.15;
        Cobro += (KM - 1300) * 0.10;
    }

    cout << "El monto a pagar es de: $" << Cobro << " sin impuestos y de $" << Cobro + Cobro * IGV << " Con impuestos." << endl;
    return 0;
}
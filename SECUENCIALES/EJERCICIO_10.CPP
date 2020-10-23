/*
Author: Jara Juan Alberto Esequiel
Actividad: Una institución benéfica europea ha recibido tres donaciones en soles, dólares y marcos. La donación será repartida en tres 
rubros: 60% para la implementación de un centro de salud, 30%  para  un  comedor  de  niños  y  el  resto  para  
gastos  administrativos.  Diseñe  un  algoritmo que determine el monto en euros que le corresponde a cada rubro. 
Considere que: 1 dólar = 3.52 soles, 1 dólar = 2.08 marcos, 1 dólar = 1.07 euros.
*/
// Incluimos librerias.
#include <iostream>
// Utilizamos para no tipear std::
using namespace std;
// Validamos que las donaciones no sean menores a 0.
float val_datos(float donacion){

    cin >> donacion;

    while (donacion <= 0)
    {
        cout << "¡ERROR! - Debe ingresar un monto valido: " << endl;
        cin >> donacion;
    }

    return donacion;
}

int main(int argc, const char** argv) {
    //definimos variables
    float donacion = 0, total_euros = 0;
    //Pedimos las donaciones y hacemos su conversion a dolares.
    cout << "Ingrese la donacion en soles: " << endl;
    donacion = val_datos(donacion);
 
    total_euros += donacion / 3.52;
    donacion = 0;

    cout << "Ingrese la donacion en marcos: " << endl;
    donacion = val_datos(donacion);
 
    total_euros += donacion / 2.08;
    donacion = 0;

    cout << "Ingrese la donacion en dolares: " << endl;
    donacion = val_datos(donacion);

    total_euros += donacion;
    donacion = 0;
    //Realizamos la conversion a euros.
    total_euros /= 1.07;
    //imprimimos el monto y cuanto le corresponde a cada sector.
    cout << "Las donaciones suman un total de: EURS " << total_euros << endl;
    cout << "-> Centro de salud: " << total_euros * 0.6 << endl;
    cout << "-> Comedor infantil: " << total_euros * 0.3 << endl;
    cout << "-> Gastos administrativos: " << total_euros * 0.1 << endl;

    return 0;
}
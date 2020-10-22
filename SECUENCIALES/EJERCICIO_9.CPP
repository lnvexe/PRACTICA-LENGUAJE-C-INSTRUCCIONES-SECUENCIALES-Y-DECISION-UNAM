/*
Author: Jara Juan Alberto Esequiel
Actividad: Diseñe un algoritmo para convertir una longitud dada en centímetros a pies. Considere que 1 pie = 30.48 centímetros.
*/
//Incluimos las librerias.
#include <iostream>
//Defino la variable constante.
#define med_pie 30.48
//Utilizamos para no tipear std::
using namespace std;
//Validamos que la medida sea validad.
float val_datos(float val)
{

    cin >> val;

    while (val <= 0)
    {
        cout << "¡ERROR! - Ingrese un dato valido: " << endl;
        cin >> val;
    }

    return val;
}

int main(int argc, const char **argv)
{
    //Definimos variables
    float medida = 0;

    cout << "-> Ingrese la medida a convertir (CM a PIES): " << endl;
    //hacemos la comversion de medidas.
    medida = val_datos(medida) * med_pie;
    //Imprimimos el resultado.
    cout << "Resultado: " << medida << endl;

    return 0;
}
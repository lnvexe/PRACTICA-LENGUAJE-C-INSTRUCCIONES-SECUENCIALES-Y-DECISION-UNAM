/*
Author: Jara Juan Alberto Esequiel
Actividad: En una competencia atlética de velocidad el tiempo se mide en minutos, segundos y centési-mas  de  segundo 
y  el  espacio  recorrido  se  mide  en  metros.  Diseñe  un  algoritmo  para  deter-minar  la  velocidad  promedio 
de  un  atleta  en  km/h  Considere  que:  1  hora  =  60  minutos,  1 minuto = 60 segundos, 1 segundo = 100 centésimas de segundo, 
1 kilómetro = 1000 metros.
*/
#include <iostream>
using namespace std;

float val_datos(float valor)
{

    cin >> valor;

    while (valor < 0)
    {
        cout << " Error - Ingrese un dato valido: ";
        cin >> valor;
    }

    return valor;
}

int main()
{
    float tiempo = 0, distancia = 0;
    float total = 0, aux = 0;

    cout << "Ingrese la distancia de la carrera: ";
    distancia = val_datos(distancia);

    distancia /= 1000;

    cout << "Ingrese el tiempo de la carrera: ";
    cout << "-> Minutos: ";
    tiempo = val_datos(tiempo);

    aux += tiempo / 60;
    tiempo = 0;

    cout << "Ingrese el tiempo de la carrera: ";
    cout << "-> Segundos: ";
    tiempo = val_datos(tiempo);

    aux += (tiempo / 60) / 60;
    tiempo = 0;

    cout << "Ingrese el tiempo de la carrera: ";
    cout << "-> Centesimas: ";
    tiempo = val_datos(tiempo);

    aux += ((tiempo / 100) / 60) / 60;
    tiempo = 0;

    total = aux / distancia;

    cout << "La velocidad es de: " << total << "K/h";

    return 0;
}
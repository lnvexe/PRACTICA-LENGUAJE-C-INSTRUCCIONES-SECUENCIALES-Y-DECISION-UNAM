/*
Author: Jara Juan Alberto Esequiel
Actividad: Basándose  en  el  año  de  fabricación  y  el  peso  del  automóvil  
en  una  fábrica  se  determina  la tarifa de registro según la siguiente tabla:
El programa debe ingresar el año y el peso del auto eimprimir la categoría y la tarifa
*/

#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    int ano = 0;
    float peso = 0;

    cout << "-> Ingrese el año del atomovil: " << endl;
    cin >> ano;
    cout << "-> Ingrese el peso del automovil: " << endl;
    cin >> peso;

    if (ano <= 1970)
    {
        if (peso < 2700)
        {
            cout << "Categoria de peso: 1" << endl;
            cout << "Tarifa de registro: $11600" << endl;
        }

        if (peso >= 2700 && peso <= 3800)
        {
            cout << "Categoria de peso: 2" << endl;
            cout << "Tarifa de registro: $23200" << endl;
        }

        if (peso > 3800)
        {
            cout << "Categoria de peso: 3" << endl;
            cout << "Tarifa de registro: $34800" << endl;
        }
    }

    if (ano >= 1971 && ano <= 1979)
    {
        if (peso < 2700)
        {
            cout << "Categoria de peso: 4" << endl;
            cout << "Tarifa de registro: $13000" << endl;
        }

        if (peso >= 2700 && peso <= 3800)
        {
            cout << "Categoria de peso: 5" << endl;
            cout << "Tarifa de registro: $26000" << endl;
        }

        if (peso > 3800)
        {
            cout << "Categoria de peso: 6" << endl;
            cout << "Tarifa de registro: $39000" << endl;
        }
    }

    if (ano >= 1980)
    {
        if (peso < 3500)
        {
            cout << "Categoria de peso: 7" << endl;
            cout << "Tarifa de registro: $12000" << endl;
        }

        if (peso >= 3500)
        {
            cout << "Categoria de peso: 8" << endl;
            cout << "Tarifa de registro: $46000" << endl;
        }
    }

    return 0;
}
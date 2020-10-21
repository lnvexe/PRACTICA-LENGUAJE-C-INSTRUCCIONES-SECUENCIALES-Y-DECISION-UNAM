/*
Author: Jara Juan Alberto Esequiel.
Actividad: Convertir una cantidad expresada en dólares a pesos y mostrar el resultado. El algoritmo
debe permitir ingresar la cantidad y el valor de la cotización del dólar.
*/
//Importamos librerias.
#include <iostream>
//Utilizamos para no tener que tipear std::
using namespace std;
//Verificacion de datos.
float val_datos(float valor)
{
    //Mientras la variable sea 0 o menor, seguira pidiendo un nuevo valor.
    while (valor <= 0)
    {
        cout << "Ingrese el valor: " << endl;
        cin >> valor;
    }

    return valor;
}

int main(int argc, const char **argv)
{
    //Definimos variables.
    float cot_dolar = 0, Dinero = 0, Dolares = 0;
    //Pedimos los datos necesarios y los analizamos llamando a la funcion "val_datos".
    cout << "- Cotizacion dolar -" << endl;
    cot_dolar = val_datos(cot_dolar);
    cout << "- Cant de pesos a cambiar -" << endl;
    Dinero = val_datos(Dinero);
    Dolares = Dinero / cot_dolar;
    //Imprimimos el resultado.
    cout << "$" << Dinero << " Equivales a "
         << "U$D " << Dolares << " con una cotizacion de " << cot_dolar << endl;

    return 0;
}
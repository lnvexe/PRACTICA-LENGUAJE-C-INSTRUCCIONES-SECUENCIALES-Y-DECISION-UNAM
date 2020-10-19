/*Author: Jara Juan Alberto Esequiel.
  Actividad: Muestre el cubo de un numero.
  Fecha: 19/10/2020 - 17:32.  
*/

//Incluimos las librerias
#include <iostream>
#include <cmath>

using namespace std; // Utilizamos esta linea para no tener que escribir std:: para instruccion de entrada/salida.

int comprobacion(int nro) // Creamos una funcion para comprobar que los datos no sean 0.
{
    while (nro == 0) // Mientras nro sea igual a 0.
    {
        cout << "Ingrese un nro" << endl; // Imprimimos texto.
        cin >> nro;                       // Pedimos el ingreso de datos a la variable nro.
    }

    return nro; // Retornamos el valor de nro.
}

int main(int argc, const char **argv)
{
    // Definimos variables.
    int nro = 0, resultado = 0;

    nro = comprobacion(nro); // "nro" va a ser igual al retorno de la funcion "compobacion".
    resultado = pow(nro, 3); // Resultado es igual al cubo de nro.

    cout << "Resultado: " << resultado << endl; // Imprimimos el resultado.
    return 0;
}
/*Author: Jara Juan Alberto Esequiel.
  Actividad: Muestre la suma de dos numeros.
  Fecha: 19/10/2020 - 17:32.  
*/
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int resultado = 0, var1 = 0, var2 = 0; //-> Declaramos las variables

  cout << "-> Calculadora suma <-" << '\n'; // -> Imprimimos texto.
  cout << "- Ingrese un numero: " << '\n'; // -> Imprimimos texto.
  cin >> var1;  // -> Pedimos el ingreso de un dato en Var1.
  cout << "- Ingrese otro numero: " << '\n'; // -> Imprimimos texto.
  cin >> var2; // -> Pedimos el igrese de un dato en Var2.

  resultado = var1 + var2; // -> Guardamos la suma de var1 y var2 en resultado.

  cout << "Resultado:" << resultado << '\n'; // -> Imprimimos el resultado.

  return 0;
}

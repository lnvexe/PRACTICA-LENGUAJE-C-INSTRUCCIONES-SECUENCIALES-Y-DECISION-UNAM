#include <iostream>

using namespace std;

int suma(int var1, int var2){
  return var1 + var2;
}

int main(int argc, char const *argv[]) {
  int resultado = 0, var1 = 0, var2 = 0;

  cout << "-> Calculadora suma <-" << '\n';
  cout << "- Ingrese un numero: " << '\n';
  cin >> var1;
  cout << "- Ingrese otro numero: " << '\n';
  cin >> var2;

  resultado = suma(var1, var2);

  cout << "Resultado:" << resultado << '\n';

  return 0;
}

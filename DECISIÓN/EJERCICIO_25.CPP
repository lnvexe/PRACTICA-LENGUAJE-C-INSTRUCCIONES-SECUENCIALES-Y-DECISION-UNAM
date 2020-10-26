/*
Author: Jara Juan Alberto Esequiel
Actividad: Hacer  un  programa  que  permita  ingresa  dos  números  y  el  símbolo  de  la  operación  (+,-,*,/). 
obteniéndose el correspondiente resultado. Si el símbolo no es correcto deberáimprimir un mensaje que indique “Error en símbolo”.
*/

#include <iostream>

using namespace std;

float resultado(char simb, float nro_a, float nro_b){

    switch (simb)
    {
        case '+':
            return nro_a + nro_b;
            break;
        case '-':
            return nro_a - nro_b;
            break;
        case '*':
            return nro_a * nro_b;
            break;
        case '/':
            return nro_a / nro_b;
            break;
        default:
            cout << "Error En simbolo" << endl;
            break;
    }

}

int main(int argc, const char** argv) {
    float nro_a = 0, nro_b = 0, total;
    char simb;
    
    cout << " - CALCULADORA -" << endl;
    cout << "-> Ingrese el simbolo de la operacion a realizar: ( + - * /)" << endl;
    cin >> simb;
    cout << "-> Ingrese el primer numero: " << endl;
    cin >> nro_a;
    cout << "-> Ingrese el segundo numero: " << endl;
    cin >> nro_b;

    total = resultado(simb , nro_a, nro_b);

    cout << "EL resultado es: " << total << endl;
    return 0;
}
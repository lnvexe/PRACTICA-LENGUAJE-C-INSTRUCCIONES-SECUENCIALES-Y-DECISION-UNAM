/*
Author: Jara Juan Alberto Esequiel
Actividad: Escriba un algoritmo capaz de encontrar el máximo de dos valores (M y N).
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
 int M = 0, N = 0;

    cout << "Ingrese los dos numeros: " << endl;
    cin >> M;
    cin >> N;

    if (M > N)
    {
        cout << M << " es mayor" << endl;
    }else if (N > M)
    {
        cout << N << " es mayor" << endl;
    }else
    {
        cout << "ambos numeros son iguales" << endl;
    }
    return 0;
}
/*
Author: Jara Juan Alberto Esequiel
Actividad: Escriba un algoritmo capaz de encontrar el máximo de tres valores (R, S y T).
*/

#include <iostream>

using namespace std;

int main(int argc, const char **argv)
{
    int R = 0, S = 0, T = 0;

    cout << "Ingrese los numeros: " << endl;
    cin >> R;
    cin >> T;
    cin >> S;

    if (R > S & R > T)
    {
        cout << R << " Es el mayor: " << endl;
    }

    if (S > R & S > T)
    {
        cout << S << " Es el mayor" << endl;
    }

    if (T > R & T > S)
    {
        cout << T << " Es el mayor" << endl;
    }

    if (T == S & T == R)
    {
        cout << "Los numeros son iguales." << endl;
    }

    return 0;
}
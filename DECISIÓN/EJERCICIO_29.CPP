/*
Author: Jara Juan Alberto Esequiel
Actividad: Desarrollar  un  algoritmo  que  permita  realizar  la  suma  de  dos  horas  distintas  (HH,  MM,  SS).
Tener en cuenta que si la hora supera 24 se debe contar un día.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int H_1 = 0, M_1 = 0, S_1 = 0, H_aux = 0, M_aux = 0, S_aux = 0, Dias = 0;

    cout << "Ingrese la primera hora ->" << endl;
    cout << "Horas: " << endl;
    cin >> H_1;
    cout << "Minutos: " << endl;
    cin >> M_1;
    cout << "Segundos: " << endl;
    cin >> S_1;
    cout << "Ingrese la segunda hora ->" << endl;
    cout << "Horas: " << endl;
    cin >> H_aux;
    cout << "Minutos: " << endl;
    cin >> M_aux;
    cout << "Segundos: " << endl;
    cin >> S_aux;

    H_aux += H_1;
    M_aux += M_1;
    S_aux += S_1;

    if (H_aux >= 24)
    {
        H_aux -= 24;
        Dias++;
    }

    cout << "La suma es de: "<< Dias << " Dias, " << H_aux << " Horas, " << M_aux << " Minutos, " << S_aux << " Segundos." << endl;

    return 0;
}
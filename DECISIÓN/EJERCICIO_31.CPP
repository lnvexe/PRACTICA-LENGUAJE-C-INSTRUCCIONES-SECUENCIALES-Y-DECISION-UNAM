/*
Author: Jara Juan Alberto Esequiel
Actividad: Diseñe un algoritmo que permita ingresar la hora actual del día en tres variables, HH, MM y SS
y determine cuantas horas, minutos y segundos restan para las 23:59:00.
*/

#include <iostream>

#define H_F 23
#define M_F 59
#define S_F 00

using namespace std;

int main(int argc, const char** argv) {
    int HH = 0, MM = 0, SS = 0;

    cout << "- INGRESAR HORA -" << endl;
    cout << "-> Hora: " << endl;
    cin >> HH;
    cout << "-> Minutos: " << endl;
    cin >> MM;
    cout << "-> Segundos" << endl;
    cin >> SS;

    HH = H_F - HH;
    MM = M_F - MM;
    SS = S_F - SS;

    cout << "Faltan: " << HH << ":" << MM << ":" << SS << " Para las 23:59:00" << endl;

    return 0;
}
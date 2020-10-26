/*
Author: Jara Juan Alberto Esequiel
Actividad: Diseñe  unalgoritmo  que  exprese  la  capacidad  de  un  disco  duro  en 
megabytes,  kilobytes  y bytes, conociendo la capacidad del disco en  gigabytes. Considere que:
1 kilobyte = 1024 by-tes 
1 megabyte = 1024 kilobyte
1 gigabyte = 1024 megabytes.
*/

#include <iostream>

using namespace std;

float val_datos(float valor){
    cin >> valor;

    while (valor < 0)
    {
        cout << "ERROR - Ingrese nuevamente: " << endl;
        cin >> valor;
    }

    return valor;
}

int main(int argc, const char** argv) {
    float espacio = 0;

    cout << "Ingrese la capacidad de su disco duro en gigabytes(GB): " << endl;
    espacio = val_datos(espacio);
    espacio *= 1024;

    cout << "-> Megabytes (MB): " << espacio << endl;
    espacio *= 1024;
    cout << "-> Kilobytes (KB): " << espacio << endl;
    espacio *= 1024;
    cout << "-> Bytes: " <<  espacio << endl;

    return 0;
}
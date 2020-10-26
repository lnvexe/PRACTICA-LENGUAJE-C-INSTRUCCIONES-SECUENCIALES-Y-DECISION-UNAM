/*
Author: Jara Juan Alberto Esequiel
Actividad: Hacer un  algoritmo que calcule la cantidad de horas, minutos y segundos entre dos eventos, 
de los cuales se ingresarán la hora (expresada en horas, minutos y segundos) y la fecha (ex-presada en día, mes y año) 
en que ocurrieron.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    int dia_a = 0, dia_b = 0, mes_a = 0, mes_b = 0, ano_a = 0, ano_b = 0, hora_a = 0, hora_b = 0, min_a = 0, min_b = 0, seg_a = 0, seg_b = 0;
    float hora_entre = 0, min_entre = 0, seg_entre = 0;

    cout << "- Fecha I -" << endl;
    cout << "-> Ingrese el año: " << endl;
    cin >> ano_a;
    cout << "-> Ingrese el mes: " << endl;
    cin >> mes_a;
    cout << "-> Ingrese el dia: " << endl;
    cin >> dia_a;
    cout << "-> Ingrese la hora: " << endl;
    cin >> hora_a;
    cout << "-> Ingrese el minuto: " << endl;
    cin >> min_a;
    cout << "-> Ingrese el segundo: " << endl;
    cin >> seg_a;

    cout << "- Fecha II -" << endl;
    cout << "-> Ingrese el año: " << endl;
    cin >> ano_b;
    cout << "-> Ingrese el mes: " << endl;
    cin >> mes_b;
    cout << "-> Ingrese el dia: " << endl;
    cin >> dia_b;
    cout << "-> Ingrese la hora: " << endl;
    cin >> hora_b;
    cout << "-> Ingrese el minuto: " << endl;
    cin >> min_b;
    cout << "-> Ingrese el segundo: " << endl;
    cin >> seg_b;

    hora_entre = ((ano_b - ano_a) * 8760) + ((mes_b - mes_a) * 730) + ((dia_b - dia_a) * 24) + (hora_b - hora_a);
    min_entre = min_b - min_a;
    seg_entre = seg_b - seg_a;

    cout << "Faltan : " << hora_entre << " horas, " << min_entre << " minutos, " << seg_entre << " segundos." << endl;

    return 0;
}
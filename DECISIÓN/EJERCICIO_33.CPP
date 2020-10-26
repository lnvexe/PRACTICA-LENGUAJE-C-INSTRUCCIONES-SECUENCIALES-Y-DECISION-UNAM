/*
Author: Jara Juan Alberto Esequiel
Actividad: El promedio de prácticas de un curso se calcula en base a cuatro notas de las cuales se elimi-na la nota menor 
y se promedian las tres notas más altas. Diseñe un algoritmo que determine la nota eliminada y el promedio de un estudiante.
*/

#include <iostream>

using namespace std;

int main(int argc, const char** argv) {
    float nota_a = 0, nota_b = 0, nota_c = 0, aux = 0;

    cout << "- Ingreso de notas -" << endl;
    cout << "-> 1er Nota:" << endl;
    cin >> nota_a;
    cout << "-> 2da Nota:" << endl;
    cin >> nota_b;
    cout << "-> 3er Nota:" << endl;
    cin >> nota_c;
    cout << "-> 4ta Nota:" << endl;
    cin >> aux;

    if (nota_a < nota_b && nota_a < nota_c && nota_a < aux)
    {
        aux = nota_a + aux;
        nota_a = aux - nota_a;
        aux = aux - nota_a;
    }

    if (nota_b < nota_a && nota_b < nota_c && nota_b < aux)
    {
        aux = nota_b + aux;
        nota_a = aux - nota_b;
        aux = aux - nota_b;
    }

    if (nota_c < nota_b && nota_c < nota_a && nota_c < aux)
    {
        aux = nota_c + aux;
        nota_c = aux - nota_c;
        aux = aux - nota_c;
    }

    cout << "-> 1er Nota: " << nota_a << endl;
    cout << "-> 2da Nota: " << nota_b << endl;
    cout << "-> 3er Nota: " << nota_c << endl;
    cout << "-> 4ta Nota: " << aux << endl;

    aux = 0;
    aux = (nota_a + nota_b + nota_c) / 3;

    cout << "El promedio es: " << aux << endl;
    return 0;
}
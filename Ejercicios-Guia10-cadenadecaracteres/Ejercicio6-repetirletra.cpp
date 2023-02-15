#include <iostream>
#include "Funciones-Guia10.h"
using namespace std;


//Programa que utiliza la funcion creada para validar si la cadena esta formada por una sola palabra.
int main() {
    cout << "\n===================================" << endl;

    //Variables
    char cadena[30];
    bool una_Palabra;

    cout << "\nIngrese una cadena: ";
    cin.getline(cadena,30,'\n');

    una_Palabra=es_Palabra(cadena);

    cout << una_Palabra << endl;

}
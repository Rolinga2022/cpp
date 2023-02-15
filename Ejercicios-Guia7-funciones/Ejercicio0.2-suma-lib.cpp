#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que utiliza la funcion "sumar" para realizar dicha operacion
//la diferencia con los anteriores es que este utiliza la funcion "sumar" de una libreria

int main () {

    cout << "\n===============================================" << endl;

    //Variables
    int a, b, s;

    cout << "\nIngrese un valor entero: ";
    cin >> a;

    cout << "\nIngrese otro valor entero: ";
    cin >> b;

    s = sumar(a, b);

    cout << "\n --> La suma de ambos valores es igual a " << s << endl; 

    cout << "\n===============================================" << endl;

}
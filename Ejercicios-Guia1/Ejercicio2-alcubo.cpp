#include <iostream>
using namespace std;

//Programa para ingresar un valor y devolver su valor elevado al cubo

int main() {

    //Variables
    int a;
    int a_al_cubo;

    //Egreso: solicitacion de ingreso de numero
    cout << "\nIngrese un número: " << endl;

    //Ingreso: asignacion del valor ingresado a la variable en cuestion
    cin >> a;

    //Proceso
    a_al_cubo = a*a*a;

    //Egreso: muestro el resultado en cuestion
    cout << "\nEl número ingresado al cubo es igual a " << a_al_cubo << endl;

    return 0;

}
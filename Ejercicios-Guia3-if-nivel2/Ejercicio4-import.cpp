#include <iostream>
using namespace std;

//Programa que devuelve el importe en funcion de la cantidad de litros
int main() {

    cout << "\n=======================================" << endl;

    //Variables
    float impTotal;
    float desc1 = 0.25;
    float desc2 = 0.15;
    float desc3 = 0.10;
    int lt; 

    //Egreso
    cout << "\nIngrese el importe total: ";
    //Ingreso
    cin >> impTotal;

    //Egreso
    cout << "\nIngrese el volumen vendido (en litros): ";
    //Ingreso
    cin >> lt;

    cout << "\n=======================================" << endl;

    //Condicion
    if (lt > 500) {
        impTotal *= (1-desc1);//Proceso: aplico descuento del 25%.
    } else if (lt > 300) {
        impTotal *= (1-desc2);//Proceso: aplico descuento del 15%.
    } else if (lt > 100) {
        impTotal *= (1-desc3);//Proceso: aplico descuento del 10%.
    }

    //Egreso
    cout << "\nEl importe final a pagar es de: " << impTotal << " AR$." << endl;

    cout << "\n=======================================" << endl;
}
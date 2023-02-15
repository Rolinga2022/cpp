#include <iostream>
using namespace std;

//Cobro con descuento de aplicacion de delivery
int main () {

    //Variables
    const double desc = 0.15;
    double montoTotal;
    double precioFinal;

    cout << "\n===========================================" << endl;
    //Egreso
    cout << "\nIngrese el monto total de la compra en AR$: ";
    //Ingreso
    cin >> montoTotal;

    cout << "\n===========================================" << endl;

    //Proceso
    precioFinal = (montoTotal)*(1-desc);

    //Egreso
    cout << "\nEl total a pagar es de: " << precioFinal << " AR$." << endl;
    cout << "\n===========================================" << endl;

}
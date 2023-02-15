#include <iostream>
using namespace std;

//Programa que devuelve un importe con los descuentos respectivos
int main() {

    cout << "\n========================================" << endl;

    //Variables
    float impVenta, impFinal;
    float desc1 = 0.1;
    float desc2 = 0.18;

    //Egreso
    cout << "\nIngrese el importe de venta: ";
    //Ingreso
    cin >> impVenta;

    cout << "\n========================================" << endl;

    //Condicion
    if (impVenta >= 5000) {
        impFinal = (impVenta) * (1-desc2);
    } else if (impVenta >= 1000) {
        impFinal = (impVenta) * (1-desc1);
    } else {
        impFinal = impVenta;
    }

    //Egreso
    cout << "\nEl importe final a pagar es de: " << impFinal << " AR$." << endl;
    cout << "\n========================================" << endl;
}
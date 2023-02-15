#include <iostream>
using namespace std;

//Programa que devuelve el precio en funcion de los litros vendidos.
//Ademas, devuelve el precio en funcion del tipo de pago.
//RESUELTO CON "IF" 
int main () {

    cout << "\n===============================================" << endl;

    //Variables
    int p1 = 25;//Menor o igual a 50lt.
    int p2 = 20;//Entre 50 y 200lt(inclusive).
    int p3 = 15;//Entre 200 y 500lt(inclusive).
    int p4 = 10;//Mas de 500lt.
    float descEf = 0.1;
    int lt;
    float impTotal;
    bool tipoPago;

    //Egreso
    cout << "\nPor favor, ingrese el tipo de pago --> (1)EFECTIVO o (0)OTRO MÉTODO: ";
    //Ingreso
    cin >> tipoPago;

    //Egreso
    cout << "\nIngrese el volumen de detergente a vender (litros): ";
    //Ingreso 
    cin >> lt;

    cout << "\n===============================================" << endl;

    //Condicion1 (importe segun litros)
    if (lt>500) {
        impTotal = lt * p4;
    } else if (lt>200) {
        impTotal = lt * p3;
    } else if (lt>50) {
        impTotal = lt * p2;
    } else {
        impTotal = lt * p1;
    }

    //Condicion2 (importe segun tipo de pago)
    if (tipoPago) {
        impTotal*=(1-descEf);
    }

    //Egreso
    cout << "\nEl importe total a pagar es de: " << impTotal << " AR$." << endl;

    cout << "\n===============================================" << endl;

}
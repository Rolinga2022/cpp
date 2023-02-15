#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que pide el ingreso de 10 ventas y sus montos totales
//luego devuelve el monto promedio de los pagos
int main (){

    cout << "\n===============================================" << endl;

    //Variables
    int montoT;//monto total
    int cantidad_De_Pagos;
    float montoPromedio;

    for (int i=0; i<10; i++){

        cout << "\nIngrese el monto total: ";
        cin >> montoT;
        cout << "\nIngrese la cantidad total de pagos: ";
        cin >> cantidad_De_Pagos;

        montoPromedio=pagos(montoT, cantidad_De_Pagos);

        cout << "\n===============================================" << endl;
        cout << "\nCantidad de pagos: " << cantidad_De_Pagos << endl;
        cout << "\nValor promedio de cada pago: " << montoPromedio << " AR$." << endl;
        cout << "\n===============================================" << endl;

    }

}
#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que pide el precio y la cantidad de un producto y devuelve el monto total
int main(){

    cout << "\n===============================================" << endl;

    //Variables
    float precio;
    int cantidad;
    float total;

    //Egreso e Ingreso
    cout << "\nIngrese el precio del producto: ";
    cin >> precio;

    cout << "\nIngrese la cantidad a comprar: ";
    cin >> cantidad;

    total = producto(precio, cantidad); //utilizo la funcion "producto" definida en la libreria de funciones

    cout << "\n===============================================" << endl;
    cout << "\nEl precio total a pagar es de " << total << " AR$." << endl;
    cout << "\n===============================================" << endl;
    
}

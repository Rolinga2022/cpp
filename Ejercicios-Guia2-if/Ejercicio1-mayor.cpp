#include <iostream>
using namespace std;

//Programa que procesa si un numero es mayor o menor que 10
int main() {

    cout << "\n========================================" << endl;

    //Variable
    int n;

    //Egreso
    cout << "\nIngrese un numero entero: ";
    //Ingreso
    cin >> n;

    //Condicion
    if (n>10) {
        //Egreso
        cout << "\nEl numero ingresado es mayor que 10.";
    } else {
        cout << "\nEl numero ingresado es menor o igual a 10.";
    }

    cout << "\n========================================" << endl;

    return 0;
}
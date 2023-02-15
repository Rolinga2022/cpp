#include <iostream>
using namespace std;

//Programa que solicita dos valores y realiza division 
int main () {

    cout << "\n========================================" << endl;

    //Variables 
    float a, b, r;

    //Egreso
    cout << "\nIngrese un valor entero: ";
    //Ingreso
    cin >> a;

    //Egreso
    cout << "\nIngrese otro valor entero: ";
    //Ingreso
    cin >> b;

    cout << "\n========================================" << endl;

    //Condicion
    if (b != 0) {
        r = a / b;
        cout << "\nEl resultado de dividir el primer valor por el segundo es: " << r << endl;
    } else {
        cout << "\nNo se puede dividir por cero" << endl;
    }

    cout << "\n========================================" << endl;



}
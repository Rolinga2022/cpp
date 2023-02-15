#include <iostream>
using namespace std;

//Programa que solicita dos valores y realiza operaciones 
int main () {

    cout << "\n========================================" << endl;

    int a, b, r;

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
    if (a > b){
        //Proceso
        r = a - b;
    } else if (a == b){
        r = a + b;
    } else {
        r = a * b;
    }

    //Egreso
    cout << "\nEl resultado obtenido es: " << r << endl;
    cout << "\n========================================" << endl;


}
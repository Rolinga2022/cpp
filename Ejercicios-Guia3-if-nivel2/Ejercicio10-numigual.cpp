#include <iostream>
using namespace std;

//Programa que me devuelve si los valores ingresados son iguales. 
int main () {

    cout << "\n======================================" << endl;

    //Variables
    int n1, n2, n3, n4;

    //Egreso
    cout << "\nIngrese un valor entero: ";
    //Ingreso
    cin >> n1;

    //Egreso
    cout << "\nIngrese otro valor entero: ";
    //Ingreso
    cin >> n2;

    //Egreso
    cout << "\nIngrese otro valor entero: ";
    //Ingreso
    cin >> n3;

    //Egreso
    cout << "\nIngrese otro valor entero: ";
    //Ingreso
    cin >> n4;

    cout << "\n======================================" << endl;

    //Condicion
    if (n1==n2 && n2==n3 && n3==n4) {
        cout << "\nLos valores ingresados son iguales." << endl;
    }

    cout << "\n======================================" << endl;

}
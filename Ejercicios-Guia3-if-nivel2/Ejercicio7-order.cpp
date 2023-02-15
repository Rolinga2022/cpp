#include <iostream>
using namespace std;

//Programa para ingresar cuatro valores e informa si estan ordenados
int main () {

    cout << "\n===============================================" << endl;
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

    cout << "\n===============================================" << endl;

    //Condicion
    if (n1>n2 && n2>n3 && n3>n4) {
        cout << "\nLos valores ingresados se encuentran ordenados de forma decreciente." << endl;
    } else {
        cout << "\nLos valores ingresados NO se encuetran ordenados de forma decreciente." << endl;
    }

    cout << "\n===============================================" << endl;
    
}
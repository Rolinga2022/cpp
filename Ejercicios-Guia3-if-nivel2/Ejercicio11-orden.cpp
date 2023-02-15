#include <iostream>
using namespace std;

//Programa que ordena de menor a mayor los numeros ingresados
int main() {

    cout << "\n======================================" << endl;

    //Variables
    int a, b, c;

    //Egreso
    cout << "\nIngrese un valor entero: ";
    //Ingreso
    cin >> a;

    //Egreso
    cout << "\nIngrese un valor entero diferente al anterior: ";
    //Ingreso
    cin >> b;

    //Egreso
    cout << "\nIngrese un valor entero diferente a los anteriores: ";
    //Ingreso
    cin >> c;

    cout << "\n======================================" << endl;

    //Condicion
    if(a<b && b<c) {
        cout << "\nLos valores ingresados ordenados de menor a mayor: " << a << " " << b << " " << c << endl;
    } else if (a<c && c<b) {
        cout << "\nLos valores ingresados ordenados de menor a mayor: " << a << " " << c << " " << b << endl;
    } else if (b<a && a<c) {
        cout << "\nLos valores ingresados ordenados de menor a mayor: " << b << " " << a << " " << c << endl;
    } else if (b<c && c<a) {
        cout << "\nLos valores ingresados ordenados de menor a mayor: " << b << " " << c << " " << a << endl;
    } else if (c<a && a<b) {
        cout << "\nLos valores ingresados ordenados de menor a mayor: " << c << " " << a << " " << b << endl;
    } else {
        cout << "\nLos valores ingresados ordenados de menor a mayor: " << c << " " << b << " " << a << endl;
    }

}
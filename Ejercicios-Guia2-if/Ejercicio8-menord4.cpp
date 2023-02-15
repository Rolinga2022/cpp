#include <iostream>
using namespace std;

//Programa que me devuelve el menor de cuatro valores ingresados
int main () {

    cout << "\n========================================" << endl;

    //Variables
    int a, b, c, d, m;

    //Egreso
    cout << "\nIngrese el primer valor entero: ";
    //Ingreso
    cin >> a;

    //Egreso
    cout << "\nIngrese el segundo valor entero: ";
    //Ingreso
    cin >> b;

    //Egreso
    cout << "\nIngrese el tercer valor entero: ";
    //Ingreso
    cin >> c;

    //Egreso
    cout << "\nIngrese el cuarto valor entero: ";
    //Ingreso
    cin >> d;

    cout << "\n========================================" << endl;

    //Condicion

    if (a < b) {
        m = a;
    } else {
        m = b;
    }

    if (c < m) {
        m = c;
    }

    if (d < m) {
        m = d;
    }

    //Egreso
    cout << "\nEl menor valor ingresado es: " << m << endl;
    cout << "\n========================================" << endl;


}
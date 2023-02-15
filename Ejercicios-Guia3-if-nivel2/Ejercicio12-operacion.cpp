#include <iostream>
using namespace std;

//Programa que compara operaciones y devuelve resultado de la comparacion
int main() {

    cout << "\n===========================================" << endl;
    
    //Variables
    int a, b, c, s, p;

    //Egreso
    cout << "Ingrese un valor entero: ";
    //Ingreso 
    cin >> a;

    //Egreso
    cout << "Ingrese otro valor entero: ";
    //Ingreso 
    cin >> b;

    //Egreso
    cout << "Ingrese otro valor entero: ";
    //Ingreso 
    cin >> c;

    cout << "\n===========================================" << endl;

    //Proceso
    s = a + b; //suma del primero con el segundo valor ingresado.
    p = b * c; //producto del segundo con el tercer valor ingresado.

    //Condicion
    if (s>p) {
        cout << "\nLa suma de los dos primeros valores ingresados es mayor que el producto de los últimos dos valores ingresados." << endl;
    }

    cout << "\n===========================================" << endl;

}
#include <iostream>
using namespace std;

//Programa que me devuelve si un numero es negativo, positivo o cero
int main () {

    cout << "\n========================================" << endl;

    //Variable 
    int n;

    //Egreso
    cout << "Ingrese un número: ";
    //Ingreso
    cin >> n;

    cout << "\n========================================" << endl;

    //condicion
    if (n>0) {
        cout << "\nEl valor es positivo" << endl;
    } else if (n==0) {
        cout << "\nEl valor es cero" << endl; 
    } else {
        cout << "\nEl valor es negativo" << endl;
    }

    cout << "\n========================================" << endl;
}
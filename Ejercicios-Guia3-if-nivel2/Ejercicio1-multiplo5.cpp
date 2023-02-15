#include <iostream>
using namespace std;

//Programa que me devuelve si el numero ingresado es multiplo de 5
int main() {

    cout << "\n========================================" << endl;

    //Variables
    int n;
    
    //Egreso
    cout << "\nIngrese un valor entero: ";
    //Ingreso
    cin >> n;

    cout << "\n========================================" << endl;

    //Condicion
    if (n % 5 == 0) {
        cout << "\nEl valor ingresado ES MULTIPLO de 5" << endl;
    } else {
        cout << "\nEl valor ingresado NO ES multiplo de 5" << endl;
    }
    cout << "\n========================================" << endl;

}
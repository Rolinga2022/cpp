#include <iostream>
using namespace std;

//Programa que compara dos valores y devuelve el menor de ellos
int main () {

    cout << "\n========================================" << endl;

    //Variable
    int n1, n2;

    //Egreso
    cout << "\nIngrese un número: ";
    //Ingreso
    cin >> n1;

    //Egreso
    cout << "\nIngrese otro número(diferente al anterior): ";
    //Ingreso
    cin >> n2;

    cout << "\n========================================" << endl;

    //Condicion
    if (n1<n2) {
        cout << "\nEl menor número de los ingresados es: " << n1 << endl;
    } else {
        cout << "\nEl menor número de los ingresados es: " << n2 << endl;
    }

     cout << "\n========================================" << endl;

}
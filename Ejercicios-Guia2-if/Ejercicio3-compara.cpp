#include <iostream>
using namespace std;

//Programa que compara dos valores y devuelve si son iguales, mayor o menor.
int main (){

    cout << "\n========================================" << endl;

    //Variables
    int n1, n2;

    //Egreso
    cout << "\nIngrese el primer valor: ";
    //Ingreso
    cin >> n1;
    //Egreso 
    cout << "\nIngrese el segundo valor: ";
    //Ingreso
    cin >> n2;

    cout << "\n========================================" << endl;

    //Condicion
    if (n1>n2) {
        cout << "\n" << n1 << " es el mayor." << endl;
    } else if (n1==n2) {
        cout << "\nLos valores ingresados son iguales" << endl;
    } else {
        cout << "\n" << n2 << " es el mayor." << endl;
    }

    cout << "\n========================================" << endl;
}
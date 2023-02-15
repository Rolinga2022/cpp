#include <iostream>
using namespace std;

//Programa que me pide que ingrese cuatro numeros y devuelve el mayor y menor
int main (){

    cout << "\n========================================" << endl;

    //Variables
    int a, b, c, d, mayor, menor;

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

    //Condiciones para el mayor
    if (a>b){
        mayor=a;
    } else {
        mayor=b;
    }
    if (c>mayor) {
        mayor=c;
    }
    if (d>mayor) {
        mayor=d;
    }

    //condiciones para el menor
    if (a < b) {
        menor = a;
    } else {
        menor = b;
    }
    if (c < menor) {
        menor = c;
    }
    if (d < menor) {
        menor = d;
    }

    //Egresos
    cout << "\nEl mayor valor ingresado es: " << mayor << endl;

    cout << "\nEl menor valor ingresado es: " << menor << endl;
    cout << "\n========================================" << endl;

}
#include <iostream>
using namespace std;

//Programa que devuelve los valores ingresados mayores a 100
int main(){

    cout << "\n========================================" << endl;

    //Variables
    int a, b, c, d;

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

    cout << "\nLos valores ingresados mayores a 100 son: " << endl;
    //Condicion
    if (a > 100) {
        cout << " " << a;
    }
    if (b > 100) {
        cout << " " << b;
    }
    if (c > 100) {
        cout << " " << c;
    }
    if (d > 100) {
        cout << " " << d;
    }


}
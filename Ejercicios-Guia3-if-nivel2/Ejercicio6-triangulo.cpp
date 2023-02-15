#include <iostream>
using namespace std;

//Programa que devuelve el tipo de triangulo en funcion de sus lados
int main() {

    cout << "\n================================================" << endl;

    //Variables
    int l1, l2, l3;

    //Egreso
    cout << "\nIngrese la longitud del lado 1: ";
    //Ingreso
    cin >> l1;

    //Egreso
    cout << "\nIngrese la longitud del lado 2: ";
    //Ingreso
    cin >> l2;

    //Egreso
    cout << "\nIngrese la longitud del lado 3: ";
    //Ingreso
    cin >> l3;

    cout << "\n================================================" << endl;

    //Condicion
    if(l1==l2 && l2==3) {
        cout << "\nEl triángulo es EQUILÁTERO" << endl;
    } else if (l2==l1 || l1==l3 || l3==l2) {
        cout << "\nEl triángulo es ISÓSCELES" << endl;
    } else {
        cout << "\nEl triángulo es ESCALENO" << endl;
    }

    cout << "\n================================================" << endl;

}
#include <iostream>
using namespace std;

//Programa para calcular la edad
int main() {

    //Variable
    int yearActual;
    int yearNac;
    int edad;

    //Egreso
    cout << "\nIngrese el año actual: " << endl;
    //Ingreso
    cin >> yearActual;

    //Egreso
    cout << "\nIngrese su año de nacimiento: " << endl;
    //Ingreso
    cin >> yearNac;

    //Proceso
    edad = yearActual - yearNac;
    
    //Egreso
    cout << "\nUsted tiene " << edad << " años de edad." << endl;
    

}
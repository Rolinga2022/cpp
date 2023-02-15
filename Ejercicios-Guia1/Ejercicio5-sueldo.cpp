#include <iostream>
using namespace std;

//Programa para calcular el sueldo de un empleado
int main() {
    cout << "===========================================" << endl;
    //Variables
    const int sueldoFijo = 15000;
    const double comision = 0.05;
    double totalFact;
    double sueldo;

    //Egreso
    cout << "Ingrese el total facturado: " << endl;
    //Ingreso
    cin >> totalFact;

    cout << "===========================================" << endl;

    //Proceso
    sueldo = sueldoFijo + (totalFact)*(1+comision);

    //Egreso
    cout << "El sueldo total a cobrar es de: " << sueldo << " ARS." << endl; 
    cout << "===========================================" << endl;



}
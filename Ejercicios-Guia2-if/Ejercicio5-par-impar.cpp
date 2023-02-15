#include <iostream>
using namespace std;

//Programa que me devuelve si un numero es par o impar
int main () {

    cout << "\n========================================" << endl;

    //Variables
    int n;
    double r;

    //Egreso
    cout << "\nIngrese un valor numerico entero: ";
    //Ingreso    
    cin >> n;
    
    //Procesamiento de datos
    r = n % 2;
    
    cout << "\n========================================" << endl;

    //Condicion
    if (r==0){
        //Egreso
        cout << "\nEl valor ingresado es PAR" << endl;
    } else {
        //Egreso
        cout << "\nEl valor ingresado es IMPAR" << endl;
    }

    cout << "\n========================================" << endl;
    
}
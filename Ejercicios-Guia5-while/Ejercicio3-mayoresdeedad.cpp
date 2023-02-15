#include <iostream>
using namespace std;

//Programa que solicita edades de personas
//Deja de pedir cuando se ingresa una edad menor de 18.
//Muestra cuantas personas mayores se ingresaron.
int main(){

    cout << "\n==================================" << endl;
    //Variables
    int e; //edad
    int con=0; //contador

    //Egreso
    cout << "\nIngrese la edad: ";
    //Ingreso
    cin >> e; 

    //While
    while (e>=18){
        con++;
        cout << "\nIngrese la edad: ";
        cin >> e;
    }
    
    //Egreso
    cout << "\n==================================" << endl;
    cout << "\nSe registraron " << con << " personas mayores de edad." << endl;
    cout << "\n==================================" << endl;
}
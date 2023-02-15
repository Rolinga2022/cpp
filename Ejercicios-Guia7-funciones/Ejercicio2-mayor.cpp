#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que pide dos numeros enteros y devuelve el mayor de ellos
int main (){
    
    cout << "\n===============================================" << endl;

    //Varibles 
    int n1,n2,max;

    cout << "Ingrese un valor entero: ";
    cin >> n1;
    cout << "Ingrese otro valor entero: ";
    cin >> n2;

    max=mayor(n1,n2);

    cout << "\n===============================================" << endl;
    cout << "\nEl mayor entero ingresado es: " << max << endl;
    cout << "\n===============================================" << endl;

}
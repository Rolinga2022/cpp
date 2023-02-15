#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que me pide 20 valores enteros positivos y devuelve cuantos son pares
int main(){

    cout << "\n===============================================" << endl;

    //Variables
    int n;//numeros a ingresar
    int con=0;//contador de numeros
    int es_Par;// 1 si es par, 0 si no lo es.

    for (int i=0; i<20; i++){

        cout << "\nIngrese un numero entero positivo: ";
        cin >> n;

        es_Par=par(n);
        
        if(es_Par==1){
            con++;
        }        
    }

    cout << "\n===============================================" << endl;
    cout << "\nSe ingresaron " << con << " números pares." << endl;
    cout << "\n===============================================" << endl;

}
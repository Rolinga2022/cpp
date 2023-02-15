#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que solicita el ingreso de numeros
//corta cuando ingresa un cero
//devuelve la cantidad de pares, impares y primos.
int main() {

    cout << "\n===================================================" << endl;
    //Variable
    int n;//variable de ingreso

    int es_Par;//es o no es par
    int max_Par;//maximo par
    int bp=0;//bandera par

    int con_Impar=0;//contador de impares

    int es_Primo;//es o no primo
    int min_Primo;//minimo primo
    int bprimo=0;//bandera primo

    cout << "\nIngrese un valor entero: ";
    cin >> n;

    while (n!=0){

        es_Par=par(n);
        es_Primo = primo(n);

        if (bp == 0){
            if (es_Par == 1){
                max_Par = n;
                bp = 1;
            }
        } else if (n > max_Par && es_Par == 1){
            max_Par = n;
        }

        if (es_Par != 1) {
            con_Impar++;
        }

        if (bprimo==0){
            if (es_Primo == 1){
                min_Primo = n;
                bprimo = 1;
            }
        } else if (n < min_Primo){
            min_Primo = n;
        }

        cout << "Resultado primo >> " << es_Primo << endl;

        cout << "Ingrese un valor entero: ";
        cin >> n;
    }

    cout << "\n===================================================" << endl;
    cout << "\n --> El mayor de los numeros pares ingresados fue: " << max_Par << "." << endl;
    cout << "\n --> La cantidad de impares ingresados fue de: " << con_Impar << "." << endl;
    cout << "\n --> El menor de los numeros primos ingresados fue: " << min_Primo << "." << endl;
    cout << "\n===================================================" << endl;
}
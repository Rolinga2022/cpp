#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que solicita 100 valores enteros y emite cuantos son positivos, negativos o cero
int main(){

    //Variables 
    int n;//ingreso de numeros
    int v;//variable por referencia
    int posNegCer;//variable
    int conP=0;//Contador positivo
    int conN=0;//Contador negativo
    int conCero=0;//Contador cero

    for (int i=0; i<100; i++){
        cout << "Ingrese un valor entero: ";
        cin >> n;

        positivoNegativoCero(n, v); //Como es del tipo voy, no se lo asigno a nada.
        //Me va a devolver v= a lo que tenga que ser

        if (v==0){
            conCero++;
        } else if (v>0){
            conP++;
        } else {
            conN++;
        }
        
    }

    cout << "\n========================================================" << endl;
    cout << "\nSe ingresaron " << conP << " valores positivos." << endl;
    cout << "\nSe ingresaron " << conN << " valores negativos." << endl;
    cout << "\nSe ingresaron " << conCero << " valores cero." << endl;
    cout << "\n========================================================" << endl;



}
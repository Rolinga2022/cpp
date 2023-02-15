#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que solicita ingresar valores numericos entero
//devuelve el promedio de los numeros primos
//el ingreso de numeros concluye cuando se ingresa el cero
int main (){

    cout << "\n===============================================" << endl;

    //Variables
    int n;
    int es_Primo;
    float con=0;//contador de numeros ingresados
    float con_Primo=0;
    float promedio_Primos;

    cout << "\nIngrese un valor entero positivo: ";
    cin >> n;

    while (n!=0){

        con++;

        es_Primo=primo(n);

        if(es_Primo==1){
            con_Primo++;
        }

        cout << "\n-----------------------------------------" << endl;
        cout << "\nIngrese un valor entero positivo: ";
        cin >> n;
    }

    promedio_Primos = (con_Primo/con)*100;

    cout << "\n===============================================" << endl;
    cout << "\nEl promedio de valores primos ingresados fue del " << promedio_Primos << "%." << endl;
    cout << "\n===============================================" << endl;



}
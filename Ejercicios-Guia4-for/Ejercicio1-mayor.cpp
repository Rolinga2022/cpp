#include <iostream>
using namespace std;

//Programa que solicita 10 valores y me devuelve el mayor de ellos.
int main(){

    //Variables
    int a;
    int max = 0;//se le asignara el valor maximo de a


    //Ciclo FOR
    //voy a repetir la instruccion 10 veces 
    for (int x = 0; x < 10; x++) {
        //escribo las instrucciones que se van a repetir 10 veces
        cout << "\n==========================================" << endl;

        //Egreso
        cout << "\nIngrese un valor entero: ";
        //Ingreso
        cin >> a;

        //Condicion
        if (a>max){
            max = a;
        }

    }

    //Egreso 
    cout << "\nEl mayor valor ingresado es: " << max << endl;
    cout << "\n==========================================" << endl;

}
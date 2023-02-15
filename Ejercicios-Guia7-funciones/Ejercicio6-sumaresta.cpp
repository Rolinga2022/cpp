#include <iostream>
#include "funciones.h"
using namespace std;

//Programa que retorna 2 resultados provenientes de una sola funcion
int main(){

    cout << "\n===============================================" << endl;

    int suma;
    int a,b;
    cout << "\nIngrese un valor entero: ";
    cin >> a;
    cout << "\nIngrese otro valor entero: ";
    cin >> b;

    suma=sumaResta(a, b); //b --> variable que paso como referencia.

    /*Esta funcion retorna 2 resultados. Uno se pasa por valor "return suma", y el otro por referencia
    (b es un parametro que comparte espacio en memoria con su par en la funcion, alli dentro al parametro b,
    que se comporta como una variable, se lo procesa de una manera para que su nuevo valor sea la resta del b y a)*/

    cout << "\n===============================================" << endl;
    cout << "\nLa suma del primero y el segundo es: " << suma << endl;
    cout << "La resta del segundo y el primero es: " << b << endl;
    cout << "\n===============================================" << endl;



}
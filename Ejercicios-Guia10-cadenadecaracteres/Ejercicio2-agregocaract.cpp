#include <iostream>
using namespace std;


//Programa que solicita ingresar la cadena de caracteres "hola como ests" y luego pida el caracter a
//Luego agregarlo la posicion 14.
//me tiene que devolver "hola como estas"
int main(){
    cout << "\n============================================" << endl;

    //Variables
    char cadena_Original[50];
    int posicion;
    char caracter_A_Agregar;

    cout << "\nIngrese una cadena de caracteres: ";
    cin.getline(cadena_Original,50,'\n');

    cout << "\nIngrese el caracter a agregar: ";
    cin >> caracter_A_Agregar;

    cout << "\nIngrese la posicion: ";
    cin >> posicion;

    char aux = cadena_Original[posicion-1];
    cadena_Original[posicion-1]=caracter_A_Agregar;
    cadena_Original[posicion] = aux;

    cout << cadena_Original << endl;
    




}
#include <iostream>
using namespace std;

//Programa que solicita dos valores y luego muestra los valores entre el menor y el mayor de ellos
int main(){

    cout << "\n==================================" << endl;

    //Variables
    int a, b, min, max;

    //Egreso
    cout << "\nIngrese un valor entero: ";
    //Ingreso
    cin >> a;

    //Egreso
    cout << "\nIngrese otro valor entero: ";
    //Ingreso
    cin >> b;

    cout << "\n==================================" << endl;

    //Defino cual es mayor y menor
    //Condicion
    if(a>b){
        max=a;
        min=b;
    } else {
        max=b;
        min=a;
    }

    //Para imprimir los valores entre el min y el max
    //While
    while(min<=max){
        cout << min << "  ";
        min++;
    }
    cout << "\n==================================" << endl;
}
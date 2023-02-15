#include <iostream>
using namespace std;

//Programa que solicita una lista de valores
//deja de perdirlos cuando se ingresa cero
//muestra por pantalla el maximo de ellos y la posicion
int main(){

    cout << "\n========================================" << endl;
    
    //Variables
    int n,max,p,pmax;

    //Egreso
    cout << "\nIngrese un valor entero (para finalizar, ingrese cero(0)): ";
    //Ingreso
    cin >> n;
    max=n;
    p=1;
    pmax=p;

    //While
    while(n!=0){
        //condicion
        if(n>max){
            max=n;
            pmax=p;
        }
        p++;
        cout << "\nIngrese un valor entero (para finalizar, ingrese cero(0)): ";
        cin >> n;
    }

    //Egreso
    cout << "\n========================================" << endl;
    cout << "\n--> El valor máximo ingresado es " << max << " , en la posición " << pmax << "." << endl;
    cout << "\n========================================" << endl;
}
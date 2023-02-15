#include <iostream>
using namespace std;


//Programa que solicita 20 valores y devuelve el minimo y la posicion ingresada
int main() {

    //Variables 
    int n, min;
    int pos;

    //FOR
    for (int x=1; x<=20; x++) {

        cout << "\n=======================================" << endl;
        cout << "\nIngrese un valor entero: ";
        cin>>n;

        if(x==1){
            min=n;
            pos=x;
        } else if (n<min) {
            min=n;
            pos=x;
        }
    }
    
    //Egreso
    cout << "\nEl menor valor entero ingresado es: " << min << ", y fue encontrado en la posicion " << pos << "." << endl;
    cout << "\n=======================================" << endl;

}
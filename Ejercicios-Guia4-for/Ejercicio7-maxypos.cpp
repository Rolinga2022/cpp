#include <iostream>
using namespace std;


//Programa que solicita 10 valores y devuelve el maximo y la posicion ingresada
int main() {

    //Variables 
    int n, max;
    int pos;

    //FOR
    for (int x=1; x<=10; x++) {

        cout << "\n=======================================" << endl;
        cout << "\nIngrese un valor entero: ";
        cin>>n;

        if(x==1){
            max=n;
            pos=x;
        } else if (n>max) {
            max=n;
            pos=x;
        }
    }
    
    //Egreso
    cout << "\nEl mayor valor entero ingresado es: " << max << ", y fue encontrado en la posicion " << pos << "." << endl;
    cout << "\n=======================================" << endl;

}
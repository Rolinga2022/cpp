#include <iostream>
using namespace std;

//Programa que devuelve si un numero ingresado es, o no, primo.
int main(){
    cout << "\n=============================================" << endl;
    cout << "\n======ES UN VALOR PRIMO?=====" << endl;

    //Variables
    int con=0; //contador
    int n; //se asigna el valor a ingresar.

    //Ingreso N antes del FOR
    cout << "\nIngrese el valor entero a evaluar: ";
    cin >> n;

    //Ciclo FOR
    for (int i=1; i<=n; i++) {
        if (n % i == 0) {
            con++;
        }
    }

    if (con == 2){
        cout << "\n --> El valor ingresado ES PRIMO." << endl;
    } else {
        cout << "\n --> El valor ingresado NO ES PRIMO." << endl;
    }

    cout << "\n=============================================" << endl;
}
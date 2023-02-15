#include <iostream>
using namespace std;

//Programa que solicita lista de numeros
//corta con cero
//muestra el menor y el segundo menor
int main (){

    cout << "\n========================================" << endl;
    //Variables
    int n, m1, m2;

    cout << "\nIngrese un valor entero (ingrese cero(0) para finalizar): ";
    cin >> n;
    m1=n;

    while(n!=0){
        if(n<m1){
            m2=m1;
            m1=n;
        }
        cout << "\nIngrese un valor entero (ingrese cero(0) para finalizar): ";
        cin >> n;
    }
    cout << "\n========================================" << endl;
    cout << "\n--> El primer menor es " << m1 << ", y el segundo menor es " << m2 << "." << endl;
    cout << "\n========================================" << endl;
}
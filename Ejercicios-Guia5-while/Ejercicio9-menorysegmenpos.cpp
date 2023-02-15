#include <iostream>
using namespace std;

//Programa que solicita lista de numeros
//corta con cero
//muestra el menor y el segundo menor y sus posiciones
int main (){

    cout << "\n========================================" << endl;
    //Variables
    int n, m1, m2;
    int pm1, pm2;
    int con=0;//contador de posicion

    cout << "\nIngrese un valor entero (ingrese cero(0) para finalizar): ";
    cin >> n;
    m1=n;
    pm1=1;
    

    while(n!=0){
        con++;
        if(n<m1){
            m2=m1;
            pm2=pm1;
            m1=n;
            pm1=con;
        }
        cout << "\nIngrese un valor entero (ingrese cero(0) para finalizar): ";
        cin >> n;
    }
    cout << "\n========================================" << endl;
    cout << "\n--> El primer menor es " << m1 << ", ingresado en la posición " << pm1 << "." << endl;
    cout << "\n--> El primer menor es " << m2 << ", ingresado en la posición " << pm2 << "." << endl;
    cout << "\n========================================" << endl;
}
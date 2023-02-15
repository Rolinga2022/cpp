#include <iostream>
using namespace std;

//Programa que solicita 50 valores enteros y los guarda en un vector
//Luego determina e informa la suma de los valores del vector
int main (){

    cout << "\n===========================================" << endl;

    //Variables
    int n;//Variable de ingreso
    int v[50];//variable verctor de 50 elementos
    int suma=0;//variable suma

    for (int i=0; i<50; i++){

        cout << "\nIngrese un valor entero: ";
        cin >> n;

        v[i]=n;//guardo los valores ingresados en el vector

    }

    for (int i=0; i<50; i++){
        suma+=v[i];
    }

    //Egreso
    cout << "\n===========================================" << endl;
    cout << "\nLa sumatoria de los elementos del vector V es igua a: " << suma << "." << endl;
    cout << "\n===========================================" << endl;
}
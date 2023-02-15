#include <iostream>
using namespace std;

//Programa que pide ingresar 20 valores y calcule y emita cuantos son positivos.
int main(){

    //Variables
    int j = 0;//contador
    int n;

    //FOR
    for (int x=0; x<20; x++) {
        cout << "\n=============================================" << endl;
        cout << "\nIngrese un valor entero: ";
        cin >> n;

        if (n>0){
            j++;
        }
    }
    cout << "\n=============================================" << endl;
    cout << "\nDe los valores ingresados, " << j << " son positivos." << endl;
    cout << "\n=============================================" << endl;

}
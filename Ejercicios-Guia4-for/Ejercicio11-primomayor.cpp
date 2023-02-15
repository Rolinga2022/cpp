#include <iostream>
using namespace std;

//Programa que solicita ingresar 10 valores y emite cual es el primo mas alto. 
int main() {

    //Variables
    int bp = 0; //bandera primo
    
    int n, maxp;

    for (int i=0; i<10 ; i++){
        int con = 0; //contador primo
        cout << "\n================================================" << endl;
        cout << "\nPor favor, ingrese un valor entero positivo: ";
        cin >> n;

        for (int j=1; j<=n; j++){
            if(n%j==0){
                con++;
            }
        }
        if (con==2){
            if (bp==0){
                maxp=n;
                bp=1;
            } else if(n>maxp){
                maxp=n;
            }
        }
    }

    if (bp==0){
        cout << "\n================================================" << endl;
        cout << "\nNo se ingresó ningún número PRIMO." << endl;
        cout << "\n================================================" << endl;
    } else {
        cout << "\n================================================" << endl;
        cout << "\nEl máximo número primo ingresado fue el " << maxp << "." << endl;
        cout << "\n================================================" << endl;
    }

}
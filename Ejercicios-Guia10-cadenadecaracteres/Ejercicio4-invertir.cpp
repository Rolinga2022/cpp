#include <iostream>
#include "Funciones-Guia10.h"
using namespace std;


int main() {
    cout << "\n===================================" << endl;

    //Variables
    char cadena[30];
    bool una_Palabra;
    char palabra[30];
        
    cout << "\nIngrese una cadena: ";
    cin.getline(cadena,30,'\n');

    una_Palabra=es_Palabra(cadena);

    cout << "\n" << cadena << endl;

    cout << "\n-----------------------------" << endl;
 
    if (una_Palabra){
        int i=0;
        while (cadena[i]!='\0'){
            palabra[i]=cadena[i];
            i++;
        }
    
        cout << "\n-----------------------------" << endl;

        int j = i+1;
        char palabra_Inv[j];
        int num_Elem=i+1;

        for (int j=0; j<num_Elem; j++){
            palabra_Inv[j]=palabra[i];
            i--;  
        }
        cout << "\n-----------------------------" << endl;

        for (int i=0; i<j; i++){
            cout << palabra_Inv[i] << " ";
        }
    }
}


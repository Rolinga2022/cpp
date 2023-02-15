#include <iostream>
using namespace std;

//Programa que solicita ingresar caracteres
int main(){

    cout << "\n---------------------------------------------------" << endl;

    char l;//variable de ingreso de tipo char
    char v[50];//variable vector de tipo char
    char vm[50];//Variable vector modificado

    cout << "\nIngrese caracter: ";
    cin >> l;

    int i=0;//contador de ingresos al ciclo
    while (l!='.' && i<50){
        
        v[i]=l;
        i++;

        cout << "\nIngrese caracter: ";
        cin >> l;
    }

    for (int i=0; i<50; i++){
        if(v[i]=='-'){
            v[i]=' ';
        }
    }

    cout << "\n=======================================================" << endl;
    cout << "\nLa frase formada y guardada en el vector de caracteres es: " << endl;
    cout << " --> " << v << "." <<endl;
    cout << "\n=======================================================" << endl;

    for (int i=0; i<50; i++){
        if(v[i]=='a'){
            v[i]='e';
        }
    }
    cout << " --> Vector modificado: " << v << "." <<endl;
    cout << "\n=======================================================" << endl;
}
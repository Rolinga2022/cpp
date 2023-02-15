#include <iostream>
using namespace std;

//Programa que solicita un numero y devuelve si es primo o no 
int main(){

    cout << "\n==================================" << endl;
    //Variable
    int n;
    int i=1;//variable controladora del while
    int con=0;//contador

    //Egreso
    cout << "\nIngrese un valor entero positivo: ";
    //Ingreso
    cin >> n;

    //While
    while(i<=n){
        if(n%i==0){
            con++;
        }
        i++;
    }
    //Condicion
    if(con==2){
        cout << "\n==================================" << endl;
        cout << "\n --> EL VALOR INGRESADO ES PRIMO." << endl;
        cout << "\n==================================" << endl;
    } else {
        cout << "\n==================================" << endl;
        cout << "\n --> EL VALOR INGRESADO NO ES PRIMO." << endl;
        cout << "\n==================================" << endl;
    }

}
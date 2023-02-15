#include <iostream>
using namespace std;

//Programa que solicita una lista de valores y devuelve el maximo negativo y el minimo positivo
//corta con cero
int main (){

    cout << "\n=======================================" << endl;
    //Variables
    int n, minp, maxn;
    int bp = 0;//bandera positivo
    int bn = 0;//bandera negativo

    //Egreso
    cout << "\nPor favor ingrese un valor numérico positivo o negativo (ingrese cero para terminar): ";
    //Ingreso
    cin >> n;

    //while
    while(n!=0){
        if(n>0){
            if(bp==0){
                minp=n;
                bp=1;
            } else if (n<minp){
                minp=n;
            }
        } else {
            if(bn==0){
                maxn=n;
                bn=1;
            } else if (n>maxn) {
                maxn=n;
            }
        }
        //Egreso
        cout << "\nPor favor ingrese un valor numérico diferente de cero (positivo o negativo): ";
        //Ingreso
        cin >> n; 
    }

    cout << "\n=======================================" << endl;
    cout << "\n --> El mayor valor negativo es: "<< maxn << "." << endl;
    cout << "\n --> El menor valor positivo es: "<< minp << "." << endl;
    cout << "\n=======================================" << endl;


}
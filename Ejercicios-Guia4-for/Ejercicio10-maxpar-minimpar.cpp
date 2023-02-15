#include <iostream>
using namespace std;

//Programa que pide 20 valores y emite el max par y min impar
int main() {

    //Variables
    int bp = 0;//Bandera par
    int bi = 0;//Bandera impar
    int n, maxp, mini;

    //FOR
    for (int i=0; i<20; i++){
        cout << "\n================================================" << endl;
        cout << "\nPor favor, ingrese un valor entero positivo: ";
        cin >> n;

        if(n%2==0){
            if (bp==0){
                maxp=n;
                bp=1;
            } else if (n>maxp){
                maxp=n;
            }
        } else {
            if (bi==0){
                mini=n;
                bi=1;
            } else if (n<mini){
                mini=n;
            }
        }
    }

    cout << "\n================================================" << endl;
    cout << "\nEl mayor valor PAR ingresado es " << maxp << ", y el menor valor IMPAR es " << mini << "." << endl;
    cout << "\n================================================" << endl;

}
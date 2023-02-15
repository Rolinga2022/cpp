#include <iostream>
using namespace std;

int main(){
    float n;
    float v[100];

    for (int i=0; i<100; i++){
        cout << "\nIngrese un valor entero: ";
        cin >> n;

        v[i]=n;
    }

    float suma;
    float promedio;

    for (int i=0; i<100; i++){
        suma += v[i];
    }
    promedio = suma/100;
    cout << "\nEl promedio es igual a " << promedio << endl;


    for(int i=0; i<100; i++){
        if (v[i]>promedio){
            cout << "\n-----------------------------------------------" << endl;
            cout << "\n --> " << v[i] << " es mayor al promedio." << endl;
            cout << "\n-----------------------------------------------" << endl;
        }
    }


}
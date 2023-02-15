#include <iostream>
using namespace std;

//Programa para determinar su un vector esta ordenado o no
int main() {
    cout << "\n---------------------------------------------------" << endl;
    int n;//declaro variable de ingreso
    int v[10];//declar vector que almacena los ingresos

    //Carga de datos en el vector
    for(int i=0; i<10; i++){
        cout << "\nIngrese un valore entero: ";
        cin >> n;
        v[i]=n;
    }

    //Recorro el vector y determino si esta ordenado 
    int elem_Ref=v[0];//utilizo al primer elemto del vector como referencia
    int b=0;//variable bandera

    for (int i=0; i<10; i++){
        if(v[i]>=elem_Ref){
            elem_Ref=v[i];
        } else {
            b=1;
        }
    }

    if (b==0){
        cout << "\n---------------------------------------------------" << endl;
        cout << "\nEl vector está ordenado en forma creciente." << endl;
        cout << "\n---------------------------------------------------" << endl;
    }

    getch();
    return 0;


}
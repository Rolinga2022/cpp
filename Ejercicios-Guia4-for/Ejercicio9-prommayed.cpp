#include <iostream>
using namespace std;

//Programa que solicita 20 edades y luego calcula y muestra el promedio de edad de los mayeres de edad
int main(){

    //Variables
    int acu=0;
    int con=0;
    int edad;
    float promedio;

    for (int i=0; i<20; i++){
        cout << "\n==========================================" << endl;

        cout << "\nPor favor, ingrese su edad: ";
        cin >> edad;

        if(edad>18){
            acu+=edad;
            con++;
        }
    }
    promedio = acu/con;

    cout << "\n==========================================" << endl;
    cout << "\n --> El promedio de edad de las personas ingresadas que son mayores es: " << promedio << endl;
    cout << "\n==========================================" << endl;

}